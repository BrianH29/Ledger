//---------------------------------------------------------------------------

#ifndef LedgerMainH
#define LedgerMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include "AdvListV.hpp"
#include <Vcl.Buttons.hpp>
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TMainView : public TForm
{
__published:	// IDE-managed Components
	TButton *DepositBtn;
	TListView *ListView1;
	TBitBtn *EditBtn;
	TBitBtn *WithdrawBtn;
	TButton *DeleteBtn;
	TButton *ConvertToExcel;
	TButton *open;
	TLabel *Label1;
	TStaticText *DepositTotal;
	TLabel *Label2;
	TStaticText *WithdrawTotal;
	void __fastcall DepositBtnClick(TObject *Sender);
	void __fastcall EditBtnClick(TObject *Sender);
	void __fastcall WithdrawBtnClick(TObject *Sender);
	void __fastcall DeleteBtnClick(TObject *Sender);
	void __fastcall ConvertToExcelClick(TObject *Sender);
	void __fastcall openClick(TObject *Sender);
	void __fastcall ListView1ColumnClick(TObject *Sender, TListColumn *Column);

private:	// User declarations

public:		// User declarations
	__fastcall TMainView(TComponent* Owner);


};
//---------------------------------------------------------------------------
extern PACKAGE TMainView *MainView;
//---------------------------------------------------------------------------
#endif
