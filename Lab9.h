//---------------------------------------------------------------------------

#ifndef Lab9H
#define Lab9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <math.h>
#include <string.h>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TOpenDialog *OpenDialog;
	TMainMenu *MainMenu;
	TMenuItem *File;
	TMenuItem *OpenImage;
	TMenuItem *ConvertImage;
	TMenuItem *Exit;
	TImage *ImCanvas;
	TScrollBar *Slider;
	TLabel *Label;
	void __fastcall OpenImageClick(TObject *Sender);
	void __fastcall ConvertImageClick(TObject *Sender);
	void __fastcall SliderChange(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
    int ScrollPos;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
