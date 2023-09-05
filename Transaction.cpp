//---------------------------------------------------------------------------

#pragma hdrstop

#include "Transaction.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Transaction *Transaction;

//Transaction::Transaction(String date, String type, String deposit, String withdraw, String note){
//	this.date = date;
//	this.type = type;
//	this.deposit = deposit;
//	this.withdraw = withdraw;
//	this.note = note;
//}

void Transaction::setDate(String date){
	this.date = date;
}

void Transaction::setType(String type){
	this.type = type;
}

void Transaction::setDeposit(String deposit){
	this.deposit = deposit;
}

void Transaction::setWithdraw(String withdraw){
	this.withdraw = withdraw;
}

void Transaction::setNote(String note){
	this.note = note;
}

String Transaction::getDate() const{
	return this.date;
}

String Transaction::getType() const{
	return this.type;
}

String Transaction::getDeposit() const{
	return this.deposit;
}

String Transaction::getWithdraw() const{
	return this.withdraw;
}

String Transaction::getNote() const{
	return this.note;
}
