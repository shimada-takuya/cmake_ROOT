#include "RandGaus.hh"

#include <iostream>
#include "TH1.h"
#include "TCanvas.h"
#include "TApplication.h"


void RandGaus::randgaus()
{
	TCanvas *c = new TCanvas();
	TH1D *hist = new TH1D("hist","RandomGaus",100,-5,5);
	hist->FillRandom("gaus",10000);
	hist->Draw();
}



