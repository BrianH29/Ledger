//---------------------------------------------------------------------------

#include <vcl.h>
#include <algorithm>
#pragma hdrstop

#include "InsertDeposit.h"
#include "LedgerMain.h"
#include "System.RegularExpressions.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDepositMain *DepositMain;
//---------------------------------------------------------------------------
__fastcall TDepositMain::TDepositMain(TComponent* Owner)
	: TForm(Owner)
{
	DepositDate->Date = Date();
}
//---------------------------------------------------------------------------

void __fastcall TDepositMain::DepositInsertClick(TObject *Sender)
{
	//value from the input
	String depositDate = FormatDateTime("yyyy'��' MM'��' dd'��' dddd",DepositDate->Date);
	String depositType = DepositType->Text;
	double depositAmount = StrToFloat(DepositAmount->Text);
	String depositNote = DepositNote->Text;

	//list�� ������ convert format 12345 -> 12,345
	String formatAmount = FormatFloat("#,##0", depositAmount);

	//add to the list
	TListItem *ListItem;
	TListItem *Selected = MainView->ListView1->Selected;

	if(Selected){
		int selectedCaption = StrToInt(Selected->Caption);
		int selectedIdx = Selected->Index;

		for(int i=0; i<MainView->ListView1->Items->Count; i++){
			TListItem *item = MainView->ListView1->Items->Item[i];
			int itemCaption = StrToInt(item->Caption);

			//to check when the list is not in order and user adds the item
			// also item has been added to the list so you have to check for the item caption as well
			if(itemCaption > selectedCaption) {
//				ShowMessage(item->Caption);

				int newIdx = itemCaption+1;
				item->Caption = IntToStr(newIdx);
			}
		}

		//add a new item under the selected row
		ListItem = MainView->ListView1->Items->Insert(selectedIdx+1);
		ListItem->Caption = selectedCaption+1;
		ListItem->SubItems->Add(depositDate);
		ListItem->SubItems->Add(depositType);
		ListItem->SubItems->Add(formatAmount);
		ListItem->SubItems->Add("");
		ListItem->SubItems->Add(depositNote);

	} else {
		//add new item at the end of the list
		ListItem = MainView->ListView1->Items->Add();
		ListItem->Caption = MainView->ListView1->Items->Count;
		ListItem->SubItems->Add(depositDate);
	    ListItem->SubItems->Add(depositType);
	    ListItem->SubItems->Add(formatAmount);
	    ListItem->SubItems->Add("");
		ListItem->SubItems->Add(depositNote);
	}
	//close the modal
	ModalResult = mrOk;

	//reset the UI
	DepositDate->Date = Date();
	DepositType->Text = "";
	DepositAmount->Text = "";
	DepositNote->Text = "";
}
//---------------------------------------------------------------------------

