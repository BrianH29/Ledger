//---------------------------------------------------------------------------

#ifndef InsertDepositH
#define InsertDepositH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TDepositMain : public TForm
{
__published:	// IDE-managed Components
	TLabel *InsertDate;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *DepositType;
	TEdit *DepositAmount;
	TEdit *DepositNote;
	TDateTimePicker *DepositDate;
	TButton *DepositInsert;
	void __fastcall DepositInsertClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDepositMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDepositMain *DepositMain;
//---------------------------------------------------------------------------
#endif
