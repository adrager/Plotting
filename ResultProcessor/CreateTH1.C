#include <TH1.h>
#include <TFile.h>
#include <iostream>
bool debug_;
void CreateTH1()
{
	debug_=true;
	TFile* in = new TFile("/scratch/adraeger/data.root");
	TFile* tOut = new TFile("LostLeptonBaseline.root","RECREATE");
	tOut->mkdir("LostLeptonPlots");
	TDirectory *fOut = (TDirectory*)tOut->Get("LostLeptonPlots");
	

}