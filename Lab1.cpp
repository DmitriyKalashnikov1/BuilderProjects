//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Lab1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)

{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TextTimerTimer(TObject *Sender)
{

//Draw Circles
Canvas->Brush->Color = clGreen;
Canvas->Ellipse(100, 200, 400, 500);
Canvas->Brush->Color = clYellow;
Canvas->Ellipse(150, 250, 350, 450);
Canvas->Brush->Color = clWhite;
Canvas->Ellipse(200, 300, 300, 400);
//TextOut
Canvas->Brush->Style = bsClear;
Canvas->Font->Color = clBlue;
Canvas->Font->Name = "Times";
Canvas->Font->Style = Canvas->Font->Style << fsItalic << fsBold;
Canvas->Font->Size = 80;
Canvas->TextOut(100, 200, "Kalashnikov");

}
//---------------------------------------------------------------------------
