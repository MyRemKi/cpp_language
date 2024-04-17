///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  6 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "FramePrincipal.h"

///////////////////////////////////////////////////////////////////////////

FramePrincipal::FramePrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 640,480 ), wxSize( 1600,1200 ) );

	bSizerPrincipal = new wxBoxSizer( wxVERTICAL );

	m_buttonTrace = new wxButton( this, wxID_ANY, wxT("Trace !"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPrincipal->Add( m_buttonTrace, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	this->SetSizer( bSizerPrincipal );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonTrace->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButtonTraceClick ), NULL, this );
    
}

FramePrincipal::~FramePrincipal()
{
	// Disconnect Events
	m_buttonTrace->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButtonTraceClick ), NULL, this );

}
