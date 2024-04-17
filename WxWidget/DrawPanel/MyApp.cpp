#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "MyApp.h"
#include "EvtFramePrincipal.h"

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    EvtFramePrincipal* frame_principal = new EvtFramePrincipal(0);

    frame_principal->Show();

    return true;
}
