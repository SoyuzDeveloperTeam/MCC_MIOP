//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("MainU.cpp", MainFrm);
USEFORM("gz_mon_frm.cpp", GZ_frm);
USEFORM("gz_table_form.cpp", gz_table_frm);
USEFORM("gz_table_settings.cpp", gz_table_sett);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "MIOP";
                 Application->CreateForm(__classid(TMainFrm), &MainFrm);
                 Application->CreateForm(__classid(TGZ_frm), &GZ_frm);
                 Application->CreateForm(__classid(Tgz_table_frm), &gz_table_frm);
                 Application->CreateForm(__classid(Tgz_table_sett), &gz_table_sett);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
