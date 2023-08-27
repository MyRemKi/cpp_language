///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Sep 14 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "FramePrincipal.h"

///////////////////////////////////////////////////////////////////////////

FramePrincipal::FramePrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 400,200 ), wxSize( 600,400 ) );
	this->SetBackgroundColour( wxColour( 249, 173, 75 ) );

	wxBoxSizer* bSizerPrincipal;
	bSizerPrincipal = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* BCase0;
	BCase0 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* C0;
	C0 = new wxBoxSizer( wxVERTICAL );

	m_button0 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );

	m_button0->SetBitmapPressed( wxNullBitmap );
	m_button0->SetForegroundColour( wxColour( 255, 95, 78 ) );
	m_button0->SetBackgroundColour( wxColour( 110, 34, 97 ) );

	C0->Add( m_button0, 1, wxALL|wxEXPAND, 5 );


	BCase0->Add( C0, 1, wxEXPAND, 5 );

	wxBoxSizer* C1;
	C1 = new wxBoxSizer( wxVERTICAL );

	m_button1 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_button1->SetForegroundColour( wxColour( 255, 95, 78 ) );
	m_button1->SetBackgroundColour( wxColour( 110, 34, 97 ) );

	C1->Add( m_button1, 1, wxALL|wxEXPAND, 5 );


	BCase0->Add( C1, 1, wxEXPAND, 5 );

	wxBoxSizer* C2;
	C2 = new wxBoxSizer( wxVERTICAL );

	m_button2 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_button2->SetForegroundColour( wxColour( 255, 95, 78 ) );
	m_button2->SetBackgroundColour( wxColour( 110, 34, 97 ) );

	C2->Add( m_button2, 1, wxALL|wxEXPAND, 5 );


	BCase0->Add( C2, 1, wxEXPAND, 5 );


	bSizer14->Add( BCase0, 1, wxEXPAND, 5 );

	wxBoxSizer* BCase1;
	BCase1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* C3;
	C3 = new wxBoxSizer( wxVERTICAL );

	m_button3 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_button3->SetForegroundColour( wxColour( 255, 95, 78 ) );
	m_button3->SetBackgroundColour( wxColour( 110, 34, 97 ) );

	C3->Add( m_button3, 1, wxALL|wxEXPAND, 5 );


	BCase1->Add( C3, 1, wxEXPAND, 5 );

	wxBoxSizer* C4;
	C4 = new wxBoxSizer( wxVERTICAL );

	m_button4 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_button4->SetForegroundColour( wxColour( 255, 95, 78 ) );
	m_button4->SetBackgroundColour( wxColour( 110, 34, 97 ) );

	C4->Add( m_button4, 1, wxALL|wxEXPAND, 5 );


	BCase1->Add( C4, 1, wxEXPAND, 5 );

	wxBoxSizer* C5;
	C5 = new wxBoxSizer( wxVERTICAL );

	m_button5 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_button5->SetForegroundColour( wxColour( 255, 95, 78 ) );
	m_button5->SetBackgroundColour( wxColour( 110, 34, 97 ) );

	C5->Add( m_button5, 1, wxALL|wxEXPAND, 5 );


	BCase1->Add( C5, 1, wxEXPAND, 5 );


	bSizer14->Add( BCase1, 1, wxEXPAND, 5 );

	wxBoxSizer* Bcase2;
	Bcase2 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* C6;
	C6 = new wxBoxSizer( wxVERTICAL );

	m_button6 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_button6->SetForegroundColour( wxColour( 255, 95, 78 ) );
	m_button6->SetBackgroundColour( wxColour( 110, 34, 97 ) );

	C6->Add( m_button6, 1, wxALL|wxEXPAND, 5 );


	Bcase2->Add( C6, 1, wxEXPAND, 5 );

	wxBoxSizer* C7;
	C7 = new wxBoxSizer( wxVERTICAL );

	m_button7 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_button7->SetForegroundColour( wxColour( 255, 95, 78 ) );
	m_button7->SetBackgroundColour( wxColour( 110, 34, 97 ) );

	C7->Add( m_button7, 1, wxALL|wxEXPAND, 5 );


	Bcase2->Add( C7, 1, wxEXPAND, 5 );

	wxBoxSizer* C8;
	C8 = new wxBoxSizer( wxVERTICAL );

	m_button8 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_button8->SetForegroundColour( wxColour( 255, 95, 78 ) );
	m_button8->SetBackgroundColour( wxColour( 110, 34, 97 ) );

	C8->Add( m_button8, 1, wxALL|wxEXPAND, 5 );


	Bcase2->Add( C8, 1, wxEXPAND, 5 );


	bSizer14->Add( Bcase2, 1, wxEXPAND, 5 );


	bSizerPrincipal->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	m_textCtrl1->SetForegroundColour( wxColour( 229, 229, 229 ) );
	m_textCtrl1->SetBackgroundColour( wxColour( 48, 63, 82 ) );

	bSizer15->Add( m_textCtrl1, 0, wxALL|wxEXPAND, 5 );


	bSizerPrincipal->Add( bSizer15, 0, wxEXPAND, 5 );


	this->SetSizer( bSizerPrincipal );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button0->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC0 ), NULL, this );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC1 ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC2 ), NULL, this );
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC3 ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC4 ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC5 ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC6 ), NULL, this );
	m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC7 ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC8 ), NULL, this );
}

FramePrincipal::~FramePrincipal()
{
	// Disconnect Events
	m_button0->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC0 ), NULL, this );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC1 ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC2 ), NULL, this );
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC3 ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC4 ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC5 ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC6 ), NULL, this );
	m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC7 ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnClickBC8 ), NULL, this );

}
