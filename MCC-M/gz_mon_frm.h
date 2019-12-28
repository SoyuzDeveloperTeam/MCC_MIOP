//---------------------------------------------------------------------------

#ifndef gz_mon_frmH
#define gz_mon_frmH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TGZ_frm : public TForm
{
__published:	// IDE-managed Components
        TImage *background;
        TSpeedButton *gz_up_table;
        TSpeedButton *gz_left_up_mon;
        TSpeedButton *gz_left_down_mon;
        TSpeedButton *gz_central_mon;
        TSpeedButton *gz_right_up_mon;
        TSpeedButton *gz_right_down_mon;
        void __fastcall gz_up_tableClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TGZ_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGZ_frm *GZ_frm;
//---------------------------------------------------------------------------
#endif
