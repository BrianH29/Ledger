//---------------------------------------------------------------------------

#ifndef MixinH
#define MixinH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class Mixin{
 public:
		String formatValue(String value);
		void __fastcall totalAmount(TListView* ListView1, String flag);
};
//---------------------------------------------------------------------------


#endif
