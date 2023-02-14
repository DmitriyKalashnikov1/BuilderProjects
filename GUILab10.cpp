//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GUILab10.h"
#include <vector>
#include <math.h>
#include <string.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::PlotClick(TObject *Sender)
{
int xStart = StartX->Text.ToInt();
int xStop =  StopX->Text.ToInt();
int xStep = StepX->Text.ToInt();

std::vector<float> x(xStop-xStart), y(xStop-xStart);

x[0] = xStart;
y[0] = fun(x[0]);
StringGrid->RowCount = xStop-xStart;
StringGrid->Cells[0][0]=AnsiString::CurrToStr(0);
StringGrid->Cells[1][0]=AnsiString::CurrToStr(x[0]);
StringGrid->Cells[2][0]=AnsiString::CurrToStr(y[0]);
//ImCanvas->Canvas->MoveTo(100,100);
ImCanvas->Canvas->Brush->Color = clRed;
ImCanvas->Canvas->Brush->Style = bsSolid;
//ImCanvas->Canvas->LineTo(x[0],y[0]*1000);
	for (int i=1; i< x.size(); i++)  // пробегаем по всем значениям x и считаем соответствущее y
	{
	  x[i] = x[i-1] + xStep; //
	 y[i] = fun(x[i]); // let's plot our function
	 StringGrid->Cells[0][i]=AnsiString::CurrToStr(i);
	StringGrid->Cells[1][i]=AnsiString::CurrToStr(x[i]);
	StringGrid->Cells[2][i]=AnsiString::CurrToStr(y[i]);
	ImCanvas->Canvas->LineTo(x[i],y[i]*1000);

	}
}
//---------------------------------------------------------------------------
float TForm4::fun(float x){
return pow(x, 2.0)*exp(-x);
}
