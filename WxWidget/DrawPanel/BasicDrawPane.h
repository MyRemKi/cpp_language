#ifndef BASICDRAWPANE_H
#define BASICDRAWPANE_H
#include <wx/panel.h>
#include "wx/wx.h"
#include <complex>
using std::complex;
#include <vector>
using std::vector;
#include "ParametresTrace.h"

class BasicDrawPane : public wxPanel
{
public:
    BasicDrawPane(wxFrame* parent, const ParametresTrace param);
   
    void paintEvent(wxPaintEvent & evt);
    void paintNow();
    void render(wxDC& dc);
    void AjouteCoordonnee (complex<float> coordonnee);
    // some useful events
    /*
     void mouseMoved(wxMouseEvent& event);
     void mouseDown(wxMouseEvent& event);
     void mouseWheelMoved(wxMouseEvent& event);
     void mouseReleased(wxMouseEvent& event);
     void rightClick(wxMouseEvent& event);
     void mouseLeftWindow(wxMouseEvent& event);
     void keyPressed(wxKeyEvent& event);
     void keyReleased(wxKeyEvent& event);
     */
   
private:
    vector <complex<float>> m_coordonnees;
    ParametresTrace m_parametres_trace;
    

};

#endif // BASICDRAWPANE_H
