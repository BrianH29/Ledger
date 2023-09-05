//---------------------------------------------------------------------------

#pragma hdrstop

#include "Mixin.h"
#include "LedgerMain.h"


#include <vector>
#include <algorithm>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)

//---------------------------------------------------------------------------
String Mixin::formatValue(String value){

  String newFormat;

  for(int i=1; i <= value.Length(); i++){
	if(value[i] != ','){
		newFormat += value[i];
	}
  }

  return newFormat;
}

//---------------------------------------------------------------------------
void __fastcall Mixin::totalAmount(TListView* ListView1, String flag){

	if(flag == "openFile") {
	//파일에서 데이터 불러 올 경우
		double totalDeposit = 0.0;
		double totalWithdraw = 0.0;

		for(int i =0; i<ListView1->Items->Count; i++){
			TListItem *item = ListView1->Items->Item[i];

			String deposit = item->SubItems->Strings[2];
			String withdraw = item->SubItems->Strings[3];

			if(deposit != "") {
				//12,000->"12000"->12000 변경
				double convertDeposit = StrToInt(formatValue(deposit));
				totalDeposit += convertDeposit;

			}

			if(withdraw != "") {
			//12,000->"12000"->12000 변경
				double convertWithdraw = StrToInt(formatValue(withdraw));
				totalWithdraw += convertWithdraw;
			}
		}

		//메인 화면에 합계 노출 시키기
		MainView->DepositTotal->Caption = FormatFloat("#,##0", totalDeposit);
		MainView->WithdrawTotal->Caption = FormatFloat("#,##0", totalWithdraw);

	} else if(flag == "delete"){
	//리스트에서 삭제 했을 때 합계에서 빼주기
		TListItem* Selected = ListView1->Selected;

		String selectedDeposit = Selected->SubItems->Strings[2];
		String selectedWithdraw = Selected->SubItems->Strings[3];

		if(selectedDeposit != ""){
            //12,000->"12000"->12000 변경
			double formatSelectedDeposit = StrToInt(formatValue(selectedDeposit));
			double totalDeposit = StrToInt(formatValue(MainView->DepositTotal->Caption));

			double newTotal = totalDeposit - formatSelectedDeposit;
			//메인 화면에 합계 노출
			MainView->DepositTotal->Caption = FormatFloat("#,##0", newTotal);




		} else {
			//12,000->"12000"->12000 변경
			double formatSelectedWithdraw = StrToInt(formatValue(selectedWithdraw));
			double totalWithdraw = StrToInt(formatValue(MainView->WithdrawTotal->Caption));

			double newTotal = totalWithdraw - formatSelectedWithdraw;
			//메인 화면에 합계 노출
			MainView->DepositTotal->Caption = FormatFloat("#,##0", newTotal);
		}


	} else {
		//입금, 출금 리스트에 추가 시 합계 수정
		double totalValue = 0.0;

		for(int i=0; i < ListView1->Items->Count; i++){
			TListItem *item = ListView1->Items->Item[i];

			String value;

			if(flag == "deposit")
				value = item->SubItems->Strings[2];
			else if(flag == "withdraw")
				value = item->SubItems->Strings[3];


			if(value != "") {
				//12,000->"12000"->12000 변경
				double convertValue = StrToInt(formatValue(value));
				totalValue += convertValue;
			}

		}
            //메인 화면에 노출
			if(flag == "deposit")
				MainView->DepositTotal->Caption = FormatFloat("#,##0", totalValue);
			else
				MainView->WithdrawTotal->Caption = FormatFloat("#,##0", totalValue);
	}

}

//---------------------------------------------------------------------------

