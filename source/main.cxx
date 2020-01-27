#include "Hello.hh"
#include "RandGaus.hh"

//#include <iostream>
//#include "TH1.h"
//#include "TCanvas.h"
#include "TApplication.h"


int main(int argc, char* argv[])
{

	TApplication app("app",&argc,argv);
	
	Hello he;
	he.hello();

	RandGaus rg;
	rg.randgaus();
	
	app.Run();
	return 1;
}
