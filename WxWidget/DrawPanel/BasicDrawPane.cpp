/****************************************************************************
 *  Fichier:  BasicDrawPane.cpp
 *  Projet:   Plot
 *  Crée le:  2022-09-22-15.28
 *  Auteur:   Éric Laly (eric.laly@ozanam.eu)
 ****************************************************************************/
 #include "BasicDrawPane.h"

BasicDrawPane::BasicDrawPane(wxFrame* parent, const ParametresTrace param):wxPanel(parent)
{
    m_parametres_trace=param;
    // on connecte le "paint event" (wxEVT_PAINT) sur le handler
    Connect(wxEVT_PAINT,wxPaintEventHandler(BasicDrawPane::paintEvent), 
            NULL, this );
     // autres events...
     //wxEVT_MOTION(BasicDrawPane::mouseMoved)
     //void BasicDrawPane::mouseMoved(wxMouseEvent& event) {}
     //wxEVT_LEFT_DOWN(BasicDrawPane::mouseDown)
     //void BasicDrawPane::mouseDown(wxMouseEvent& event) {}
     //wxEVT_LEFT_UP(BasicDrawPane::mouseReleased)
     //void BasicDrawPane::mouseReleased(wxMouseEvent& event) {}
     //wxEVT_RIGHT_DOWN(BasicDrawPane::rightClick)
     //void BasicDrawPane::rightClick(wxMouseEvent& event) {}
     //wxEVT_LEAVE_WINDOW(BasicDrawPane::mouseLeftWindow)
     //void BasicDrawPane::mouseLeftWindow(wxMouseEvent& event) {}
     //wxEVT_KEY_DOWN(BasicDrawPane::keyPressed)
     //void BasicDrawPane::keyPressed(wxKeyEvent& event) {}
     //wxEVT_KEY_UP(BasicDrawPane::keyReleased)
     //void BasicDrawPane::keyReleased(wxKeyEvent& event) {}
     //wxEVT_MOUSEWHEEL(BasicDrawPane::mouseWheelMoved)
     //void BasicDrawPane::mouseWheelMoved(wxMouseEvent& event) {}
}

// permet d'ajouter des points devant être tracés sur le Panel 
void BasicDrawPane::AjouteCoordonnee (complex<float> coordonnee)
{
    m_coordonnees.push_back(coordonnee);
}

// méthode appelée par la boucle d'évènement quand le Panel doit être retracé 
// Vous pouvez aussi forcer l'appel de cette méthode en appellant 
// "Refresh()" ou "Update()"
void BasicDrawPane::paintEvent(wxPaintEvent & evt)
{
    wxPaintDC dc(this);
    render(dc);
}

// méthode utilisé pour "forcer" le tracé 
// généralement pas utile car un "Refresh()" génèrera un evt qui appellera
// void BasicDrawPane::paintEvent(wxPaintEvent & evt)
 
void BasicDrawPane::paintNow()
{
    wxClientDC dc(this);
    // on trace les points demandé
    render(dc);
}

// ici nous faisons l'affichage sur le DC
// je l'ai mis dans une méthose à part comme ça peut importe le type de DC
// utilisé (par exemple wxPaintDC ou wxClientDC) 
void BasicDrawPane::render(wxDC&  dc)
{
    // encre noire, crayon de 1 point d'épaisseur
    dc.SetPen( wxPen( "black", 1, wxSOLID) );
    if (!m_coordonnees.empty()) // s'il y a qqchose à tracer
    {

        // on calcule la mise à l'échelle
        // attention: le zéro est en haut à gauche
        wxSize sz = GetClientSize(); // on récupère la taille du DC
        float echelle_x=sz.x/(m_parametres_trace.Getxmax()-
                              m_parametres_trace.Getxmin());
        float echelle_y=-sz.y/(m_parametres_trace.Getymax()-
                               m_parametres_trace.Getymin());
        
        // on récupère les points et on les affiche à l'échelle 
        for (unsigned int i=0; i<m_coordonnees.size(); i++)
        {
            float x=m_coordonnees[i].real();
            float y=m_coordonnees[i].imag();
            dc.DrawPoint((x-m_parametres_trace.Getxmin())*echelle_x,
                         (y-m_parametres_trace.Getymax())*echelle_y);
        }
    }
}
