//---------------------------------------------------------------------------

#ifndef FormWithBDH
#define FormWithBDH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "VirtualTrees.hpp"
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button2;
	TButton *Button3;
	TVirtualStringTree *VirtualStringTree;
	TButton *Button1;
	void __fastcall VirtualStringTreeGetText(TBaseVirtualTree *Sender, PVirtualNode Node,
          TColumnIndex Column, TVSTTextType TextType, UnicodeString &CellText);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);


private:	// User declarations
public:		// User declarations


	typedef struct {
	int id;
	UnicodeString url;
	int visit_count;
	} Structure_table_sqlite;
	__fastcall TForm2(TComponent* Owner);
};


//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
