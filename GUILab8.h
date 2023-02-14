//---------------------------------------------------------------------------

#ifndef GUILab8H
#define GUILab8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <string.h>
#include <stdio.h>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TSaveDialog *SaveDialog;
	TOpenDialog *OpenDialog;
	TButton *SaveData;
	TButton *LoadData;
	TEdit *Text;
	TEdit *Output;
	void __fastcall OnChange(TObject *Sender);
	void __fastcall SaveDataClick(TObject *Sender);
	void __fastcall LoadDataClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
	AnsiString s;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
