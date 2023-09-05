//---------------------------------------------------------------------------

#ifndef TransactionH
#define TransactionH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------

class Transaction{

	private:	// User declarations
	String date;
	String type;
	String deposit;
	String withdraw;
	String note;
public:		// User declarations
	Transaction();
	~Transaction();
	Transaction(String date, String type, String deposit, String withdraw, String note);

	//setter
	void setDate(String date);
	void setType(String type);
	void setDeposit(String deposit);
	void setWithdraw(String withdraw);
	void setNote(String note);

	//getter
	String getDate() const;
	String getType() const;
	String getDeposit() const;
	String getWithdraw() const;
	String getNote() const;

}

#endif
