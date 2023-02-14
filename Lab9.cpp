//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Lab9.h"
#include <math.h>
#include <string.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::OpenImageClick(TObject *Sender)
{
if (OpenDialog->Execute())
{
ImCanvas->Picture->Graphic = NULL;
ImCanvas->Picture->LoadFromFile(String(OpenDialog->FileName));
ImCanvas->Repaint();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::ConvertImageClick(TObject *Sender)
{
 int w = ImCanvas->Picture->Width;
 int h = ImCanvas->Picture->Height;
  for (int x = 0; x < w; x++){
	for(int y = 0; y < h; y++){
		long int pix = ImCanvas->Canvas->Pixels[x][y];
		int R = GetRValue(pix);
		int G = GetGValue(pix);
		int B = GetBValue(pix);

		float averange = (R+G+B)/3.0;
		if (averange > ScrollPos){
		 ImCanvas->Canvas->Pixels[x][y] = clWhite;
		}

	}
  ImCanvas->Repaint();
  }

}
//---------------------------------------------------------------------------

void __fastcall TForm3::SliderChange(TObject *Sender)
{
 ScrollPos = Slider->Position;
 wchar_t *buff  = new wchar_t[256];
 AnsiString::CurrToStr(ScrollPos).WideChar(buff, 256);
 Label->SetTextBuf(buff);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ExitClick(TObject *Sender)
{
exit(0);
}
//---------------------------------------------------------------------------

