//---------------------------------------------------------------------------

#ifndef GUILab10H
#define GUILab10H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <vector>
#include <math.h>
#include <string.h>

//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TEdit *StartX;
	TEdit *StopX;
	TEdit *StepX;
	TImage *ImCanvas;
	TButton *Plot;
	TStringGrid *StringGrid;
	void __fastcall PlotClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
    float fun(float x);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
