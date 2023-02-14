//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GUILab8.h"
#include <string.h>
#include <stdio.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//----------------------------------------------------------------------

void __fastcall TForm2::OnChange(TObject *Sender)
{
	s = Text->Text;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::SaveDataClick(TObject *Sender)
{

if (SaveDialog->Execute())
{
char *STR = new char[256];
AnsiString FileName = SaveDialog->FileName;
STR = FileName.c_str();
FILE *fp;
fp = fopen(STR, "w");
fputs(s.c_str(), fp);
fclose(fp);
}
}
//---------------------------------------------------------------------------


void __fastcall TForm2::LoadDataClick(TObject *Sender)
{
if (SaveDialog->Execute())
{
char *STR = new char[256];
char *restext = new char[256];
AnsiString FileName = SaveDialog->FileName;
STR = FileName.c_str();
FILE *fp;
fp = fopen(STR, "r");
fgets(restext, 255, fp);
fclose(fp);

AnsiString str = restext;
int demiterPos = str.AnsiPos(" ");

double first = str.SubString(1, demiterPos-1).ToDouble();
double second = str.SubString(demiterPos+1, str.Length()).ToDouble();
double sum = first + second;
double diff = first - second;

AnsiString output = "Nums: " + str + ", Sum: " + AnsiString::CurrToStr(sum) + ", Diff: " + AnsiString::CurrToStr(diff);

Output->Text = output;
}
}
//---------------------------------------------------------------------------

