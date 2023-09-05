//---------------------------------------------------------------------------

#ifndef EditLedgerH
#define EditLedgerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TEditView : public TForm
{
__published:	// IDE-managed Components
	TLabel *InsertDate;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *EditType;
	TEdit *EditAmount;
	TEdit *EditNote;
	TDateTimePicker *EditDate;
	TButton *EditInsert;
	void __fastcall EditInsertClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TEditView(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEditView *EditView;
//---------------------------------------------------------------------------
#endif
