//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditLedger.h"
#include "LedgerMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEditView *EditView;
//---------------------------------------------------------------------------
__fastcall TEditView::TEditView(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TEditView::EditInsertClick(TObject *Sender)
{
	TListItem *list = MainView->ListView1->Selected;

	list->SubItems->Strings[0] = FormatDateTime("yyyy'년' MM'월' dd'일' dddd",EditDate->Date);
	list->SubItems->Strings[1] = EditType->Text;
	list->SubItems->Strings[4] = EditNote->Text;

	//convert format 12345 -> 12,345
	double amount = StrToFloat(EditAmount->Text);
	String formatAmount = FormatFloat("#,##0", amount);

	if(EditView->Caption == "입금"){
		list->SubItems->Strings[2] = formatAmount;
	}else {
	  list->SubItems->Strings[3] = formatAmount;
	}



	//close the modal
	ModalResult = mrOk;

	//Reset UI
	EditDate->Date = Date();
	EditType->Text = "";
	EditAmount->Text = "";
	EditNote->Text = "";

}

