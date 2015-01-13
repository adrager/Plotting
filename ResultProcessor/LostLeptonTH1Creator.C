bool debug_;
void LostLeptonTH1Creator()
{
	debug_=true;
	// Ouput Histogramms
	TH1D* HTHist = new TH1D("HT","HT_LostLepton",70,500,4000);
	HTHist->Sumw2();
	TH1D* MHTHist = new TH1D("MHT","MHT_LostLepton",46,200,2500);
	MHTHist->Sumw2();
	TH1D* NJetHist = new TH1D("NJet","NJet_LostLepton",11,3,14);
	NJetHist->Sumw2();
	TFile* out = new TFile("lostleptonTH1d.root","RECREATE");
	out->mkdir("LostLepton");
	TDirectory *fOut = (TDirectory*)out->Get("LostLepton");
	
	
	TString prTree("LostLeptonBkgProducer/LostLeptonBkg");
        TChain* c = new TChain(prTree);
        c->Add("/scratch/adraeger/data.root");
	Float_t HT =0;
        c->SetBranchAddress("HT",&HT);
        Float_t MHT =0;
        c->SetBranchAddress("MHT",&MHT);
        UShort_t NJets =0;
        c->SetBranchAddress("NJets",&NJets);
        UShort_t NVtx =0;
        c->SetBranchAddress("NVtx",&NVtx);
        Float_t MTW=0;
        c->SetBranchAddress("MTW",&MTW);

	Int_t muPromtMatched =0;
	c->SetBranchAddress("muPromtMatched",&muPromtMatched);
	
	// weights
	Float_t resultBBBWMTWDiLep=0;
	c->SetBranchAddress("resultBBBWMTWDiLep",&resultBBBWMTWDiLep);
	// uncertainties
	Float_t resultBBBWMTWUp =0;
	c->SetBranchAddress("resultBBBWMTWUp",&resultBBBWMTWUp);
	Float_t resultBBBWMTWDown =0;
	c->SetBranchAddress("resultBBBWMTWDown",&resultBBBWMTWDown);

	Float_t resultBBBWMTWDiLepUp =0;
	c->SetBranchAddress("resultBBBWMTWDiLepUp",&resultBBBWMTWDiLepUp);
	Float_t resultBBBWMTWDiLepDown =0;
	c->SetBranchAddress("resultBBBWMTWDiLepDown",&resultBBBWMTWDiLepDown);


	Float_t resultWeightBinByBinAccUp =0;
	c->SetBranchAddress("resultWeightBinByBinAccUp",&resultWeightBinByBinAccUp);
	Float_t resultWeightBinByBinAccDown =0;
	c->SetBranchAddress("resultWeightBinByBinAccDown",&resultWeightBinByBinAccDown);


	Float_t resultWeightBBBDiBoUp =0;
	c->SetBranchAddress("resultWeightBBBDiBoUp",&resultWeightBBBDiBoUp);
	Float_t resultWeightBBBDiBoDown =0;
	c->SetBranchAddress("resultWeightBBBDiBoDown",&resultWeightBBBDiBoDown);


	Float_t resultWeightBBBNoCloUp =0;
	c->SetBranchAddress("resultWeightBBBNoCloUp",&resultWeightBBBNoCloUp);
	Float_t resultWeightBBBNoCloDown =0;
	c->SetBranchAddress("resultWeightBBBNoCloDown",&resultWeightBBBNoCloDown);
	
	Float_t muonRecoTAPUp =0;
	c->SetBranchAddress("muonRecoTAPUp",&muonRecoTAPUp);
	Float_t muonRecoTAPDown =0;
	c->SetBranchAddress("muonRecoTAPDown",&muonRecoTAPDown);

	Float_t elecIsoTAPUp =0;
	c->SetBranchAddress("elecIsoTAPUp",&elecIsoTAPUp);
	Float_t elecIsoTAPDown =0;
	c->SetBranchAddress("elecIsoTAPDown",&elecIsoTAPDown);

	Float_t muonIsoTAPUp =0;
	c->SetBranchAddress("muonIsoTAPUp",&muonIsoTAPUp);
	Float_t muonIsoTAPDown =0;
	c->SetBranchAddress("muonIsoTAPDown",&muonIsoTAPDown);

	Float_t elecRecoTAPUp =0;
	c->SetBranchAddress("elecRecoTAPUp",&elecRecoTAPUp);
	Float_t elecRecoTAPDown =0;
	c->SetBranchAddress("elecRecoTAPDown",&elecRecoTAPDown);
	

	// uncertainties summation
	TH1D* resultBBBWMTWUpHTHist_= (TH1D*)HTHist->Clone();
	TH1D* resultBBBWMTWDownHTHist_= (TH1D*) HTHist->Clone();
	TH1D* resultBBBWMTWDiLepUpHTHist_= (TH1D*)HTHist->Clone();
	TH1D* resultBBBWMTWDiLepDownHTHist_= (TH1D*)HTHist->Clone();
	TH1D* resultWeightBinByBinAccUpHTHist_= (TH1D*)HTHist->Clone();
	TH1D* resultWeightBinByBinAccDownHTHist_= (TH1D*)HTHist->Clone();
	TH1D* resultWeightBBBDiBoUpHTHist_= (TH1D*)HTHist->Clone();
	TH1D* resultWeightBBBDiBoDownHTHist_= (TH1D*)HTHist->Clone();
	TH1D* resultWeightBBBNoCloUpHTHist_= (TH1D*)HTHist->Clone();
	TH1D* resultWeightBBBNoCloDownHTHist_= (TH1D*)HTHist->Clone();
	TH1D* muonIsoTAPUpHTHist_= (TH1D*)HTHist->Clone();
	TH1D* muonIsoTAPDownHTHist_= (TH1D*)HTHist->Clone();
	TH1D* muonRecoTAPUpHTHist_= (TH1D*)HTHist->Clone();
	TH1D* muonRecoTAPDownHTHist_= (TH1D*)HTHist->Clone();
	TH1D* elecIsoTAPUpHTHist_= (TH1D*)HTHist->Clone();
	TH1D* elecIsoTAPDownHTHist_= (TH1D*)HTHist->Clone();
	TH1D* elecRecoTAPUpHTHist_= (TH1D*)HTHist->Clone();
	TH1D* elecRecoTAPDownHTHist_= (TH1D*)HTHist->Clone();	
	
	TH1D* resultBBBWMTWUpMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* resultBBBWMTWDownMHTHist_= (TH1D*) MHTHist->Clone();
	TH1D* resultBBBWMTWDiLepUpMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* resultBBBWMTWDiLepDownMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* resultWeightBinByBinAccUpMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* resultWeightBinByBinAccDownMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* resultWeightBBBDiBoUpMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* resultWeightBBBDiBoDownMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* resultWeightBBBNoCloUpMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* resultWeightBBBNoCloDownMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* muonIsoTAPUpMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* muonIsoTAPDownMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* muonRecoTAPUpMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* muonRecoTAPDownMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* elecIsoTAPUpMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* elecIsoTAPDownMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* elecRecoTAPUpMHTHist_= (TH1D*)MHTHist->Clone();
	TH1D* elecRecoTAPDownMHTHist_= (TH1D*)MHTHist->Clone();	
	
	TH1D* resultBBBWMTWUpNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* resultBBBWMTWDownNJetHist_= (TH1D*) NJetHist->Clone();
	TH1D* resultBBBWMTWDiLepUpNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* resultBBBWMTWDiLepDownNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* resultWeightBinByBinAccUpNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* resultWeightBinByBinAccDownNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* resultWeightBBBDiBoUpNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* resultWeightBBBDiBoDownNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* resultWeightBBBNoCloUpNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* resultWeightBBBNoCloDownNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* muonIsoTAPUpNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* muonIsoTAPDownNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* muonRecoTAPUpNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* muonRecoTAPDownNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* elecIsoTAPUpNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* elecIsoTAPDownNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* elecRecoTAPUpNJetHist_= (TH1D*)NJetHist->Clone();
	TH1D* elecRecoTAPDownNJetHist_= (TH1D*)NJetHist->Clone();	
	
	double totalWeight=0;
        for(int ii = 0; ii < c->GetEntries(); ++ii)
	{
		c->GetEntry(ii);
		if(muPromtMatched==1&&MTW<100 && NJets > 2.4 && NJets < 100.5)
		{
			HTHist->Fill(HT,resultBBBWMTWDiLep);
			MHTHist->Fill(MHT,resultBBBWMTWDiLep);
			NJetHist->Fill(NJets,resultBBBWMTWDiLep);
			totalWeight+=resultBBBWMTWDiLep;
			
			// uncertainty histograms
			resultBBBWMTWUpHTHist_->Fill(HT,resultBBBWMTWUp);
			resultBBBWMTWDownHTHist_->Fill(HT,resultBBBWMTWDown);
			resultBBBWMTWDiLepUpHTHist_->Fill(HT,resultBBBWMTWDiLepUp);
			resultBBBWMTWDiLepDownHTHist_->Fill(HT,resultBBBWMTWDiLepDown);
			resultWeightBinByBinAccUpHTHist_->Fill(HT,resultWeightBinByBinAccUp);
			resultWeightBinByBinAccDownHTHist_->Fill(HT,resultWeightBinByBinAccDown);
			resultWeightBBBDiBoUpHTHist_->Fill(HT,resultWeightBBBDiBoUp);
			resultWeightBBBDiBoDownHTHist_->Fill(HT,resultWeightBBBDiBoDown);
			resultWeightBBBNoCloUpHTHist_->Fill(HT,resultWeightBBBNoCloUp);
			resultWeightBBBNoCloDownHTHist_->Fill(HT,resultWeightBBBNoCloDown);
			muonIsoTAPUpHTHist_->Fill(HT,muonIsoTAPUp);
			muonIsoTAPDownHTHist_->Fill(HT,muonIsoTAPDown);
			muonRecoTAPUpHTHist_->Fill(HT,muonRecoTAPUp);
			muonRecoTAPDownHTHist_->Fill(HT,muonRecoTAPDown);
			elecIsoTAPUpHTHist_->Fill(HT,elecIsoTAPUp);
			elecIsoTAPDownHTHist_->Fill(HT,elecIsoTAPDown);
			elecRecoTAPUpHTHist_->Fill(HT,elecRecoTAPUp);
			elecRecoTAPDownHTHist_->Fill(HT,elecRecoTAPDown);	
			
			resultBBBWMTWUpMHTHist_->Fill(MHT,resultBBBWMTWUp);
			resultBBBWMTWDownMHTHist_->Fill(MHT,resultBBBWMTWDown);
			resultBBBWMTWDiLepUpMHTHist_->Fill(MHT,resultBBBWMTWDiLepUp);
			resultBBBWMTWDiLepDownMHTHist_->Fill(MHT,resultBBBWMTWDiLepDown);
			resultWeightBinByBinAccUpMHTHist_->Fill(MHT,resultWeightBinByBinAccUp);
			resultWeightBinByBinAccDownMHTHist_->Fill(MHT,resultWeightBinByBinAccDown);
			resultWeightBBBDiBoUpMHTHist_->Fill(MHT,resultWeightBBBDiBoUp);
			resultWeightBBBDiBoDownMHTHist_->Fill(MHT,resultWeightBBBDiBoDown);
			resultWeightBBBNoCloUpMHTHist_->Fill(MHT,resultWeightBBBNoCloUp);
			resultWeightBBBNoCloDownMHTHist_->Fill(MHT,resultWeightBBBNoCloDown);
			muonIsoTAPUpMHTHist_->Fill(MHT,muonIsoTAPUp);
			muonIsoTAPDownMHTHist_->Fill(MHT,muonIsoTAPDown);
			muonRecoTAPUpMHTHist_->Fill(MHT,muonRecoTAPUp);
			muonRecoTAPDownMHTHist_->Fill(MHT,muonRecoTAPDown);
			elecIsoTAPUpMHTHist_->Fill(MHT,elecIsoTAPUp);
			elecIsoTAPDownMHTHist_->Fill(MHT,elecIsoTAPDown);
			elecRecoTAPUpMHTHist_->Fill(MHT,elecRecoTAPUp);
			elecRecoTAPDownMHTHist_->Fill(MHT,elecRecoTAPDown);	
			
			resultBBBWMTWUpNJetHist_->Fill(NJets,resultBBBWMTWUp);
			resultBBBWMTWDownNJetHist_->Fill(NJets,resultBBBWMTWDown);
			resultBBBWMTWDiLepUpNJetHist_->Fill(NJets,resultBBBWMTWDiLepUp);
			resultBBBWMTWDiLepDownNJetHist_->Fill(NJets,resultBBBWMTWDiLepDown);
			resultWeightBinByBinAccUpNJetHist_->Fill(NJets,resultWeightBinByBinAccUp);
			resultWeightBinByBinAccDownNJetHist_->Fill(NJets,resultWeightBinByBinAccDown);
			resultWeightBBBDiBoUpNJetHist_->Fill(NJets,resultWeightBBBDiBoUp);
			resultWeightBBBDiBoDownNJetHist_->Fill(NJets,resultWeightBBBDiBoDown);
			resultWeightBBBNoCloUpNJetHist_->Fill(NJets,resultWeightBBBNoCloUp);
			resultWeightBBBNoCloDownNJetHist_->Fill(NJets,resultWeightBBBNoCloDown);
			muonIsoTAPUpNJetHist_->Fill(NJets,muonIsoTAPUp);
			muonIsoTAPDownNJetHist_->Fill(NJets,muonIsoTAPDown);
			muonRecoTAPUpNJetHist_->Fill(NJets,muonRecoTAPUp);
			muonRecoTAPDownNJetHist_->Fill(NJets,muonRecoTAPDown);
			elecIsoTAPUpNJetHist_->Fill(NJets,elecIsoTAPUp);
			elecIsoTAPDownNJetHist_->Fill(NJets,elecIsoTAPDown);
			elecRecoTAPUpNJetHist_->Fill(NJets,elecRecoTAPUp);
			elecRecoTAPDownNJetHist_->Fill(NJets,elecRecoTAPDown);	
		}
		
	}
	for(int i=1; i<HTHist->GetNbinsX();i++)
	{
		HTHist->SetBinError(i,sqrt(HTHist->GetBinError(i) * HTHist->GetBinError(i) + (HTHist->GetBinContent(i)-resultBBBWMTWUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-resultBBBWMTWUpHTHist_->GetBinContent(i) ) +
				(HTHist->GetBinContent(i)-resultBBBWMTWUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-resultBBBWMTWUpHTHist_->GetBinContent(i) ) +
				(HTHist->GetBinContent(i)-resultBBBWMTWDiLepUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-resultBBBWMTWDiLepUpHTHist_->GetBinContent(i) ) +
				(HTHist->GetBinContent(i)-resultWeightBinByBinAccUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-resultWeightBinByBinAccUpHTHist_->GetBinContent(i) ) +
				(HTHist->GetBinContent(i)-resultWeightBBBDiBoUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-resultWeightBBBDiBoUpHTHist_->GetBinContent(i) ) +
				(HTHist->GetBinContent(i)-resultWeightBBBNoCloUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-resultWeightBBBNoCloUpHTHist_->GetBinContent(i) ) +
				(HTHist->GetBinContent(i)-muonIsoTAPUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-muonIsoTAPUpHTHist_->GetBinContent(i) ) +
				(HTHist->GetBinContent(i)-muonRecoTAPUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-muonRecoTAPUpHTHist_->GetBinContent(i) ) +
				(HTHist->GetBinContent(i)-elecIsoTAPUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-elecIsoTAPUpHTHist_->GetBinContent(i) ) +
				(HTHist->GetBinContent(i)-elecRecoTAPUpHTHist_->GetBinContent(i) ) * (HTHist->GetBinContent(i)-elecRecoTAPUpHTHist_->GetBinContent(i) )
					  ) );
		if (debug_)cout<<"Bin"<<i<<":"<<HTHist->GetBinContent(i)<<"+-"<<HTHist->GetBinError(i)<<" ";
	}
	cout<<endl<<endl;
	for(int i=1; i<MHTHist->GetNbinsX();i++)
	{
		MHTHist->SetBinError(i,sqrt(MHTHist->GetBinError(i) * MHTHist->GetBinError(i) + (MHTHist->GetBinContent(i)-resultBBBWMTWUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-resultBBBWMTWUpMHTHist_->GetBinContent(i) ) +
				(MHTHist->GetBinContent(i)-resultBBBWMTWUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-resultBBBWMTWUpMHTHist_->GetBinContent(i) ) +
						(MHTHist->GetBinContent(i)-resultBBBWMTWDiLepUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-resultBBBWMTWDiLepUpMHTHist_->GetBinContent(i) ) +
						(MHTHist->GetBinContent(i)-resultWeightBinByBinAccUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-resultWeightBinByBinAccUpMHTHist_->GetBinContent(i) ) +
						(MHTHist->GetBinContent(i)-resultWeightBBBDiBoUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-resultWeightBBBDiBoUpMHTHist_->GetBinContent(i) ) +
						(MHTHist->GetBinContent(i)-resultWeightBBBNoCloUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-resultWeightBBBNoCloUpMHTHist_->GetBinContent(i) ) +
						(MHTHist->GetBinContent(i)-muonIsoTAPUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-muonIsoTAPUpMHTHist_->GetBinContent(i) ) +
						(MHTHist->GetBinContent(i)-muonRecoTAPUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-muonRecoTAPUpMHTHist_->GetBinContent(i) ) +
						(MHTHist->GetBinContent(i)-elecIsoTAPUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-elecIsoTAPUpMHTHist_->GetBinContent(i) ) +
						(MHTHist->GetBinContent(i)-elecRecoTAPUpMHTHist_->GetBinContent(i) ) * (MHTHist->GetBinContent(i)-elecRecoTAPUpMHTHist_->GetBinContent(i) )
					   ) );
		if (debug_)cout<<"Bin"<<i<<":"<<MHTHist->GetBinContent(i)<<"+-"<<MHTHist->GetBinError(i)<<" ";
	}
	cout<<endl<<endl;
	for(int i=1; i<NJetHist->GetNbinsX();i++)
	{
		NJetHist->SetBinError(i,sqrt(NJetHist->GetBinError(i) * NJetHist->GetBinError(i) + (NJetHist->GetBinContent(i)-resultBBBWMTWUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-resultBBBWMTWUpNJetHist_->GetBinContent(i) ) +
				(NJetHist->GetBinContent(i)-resultBBBWMTWUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-resultBBBWMTWUpNJetHist_->GetBinContent(i) ) +
						(NJetHist->GetBinContent(i)-resultBBBWMTWDiLepUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-resultBBBWMTWDiLepUpNJetHist_->GetBinContent(i) ) +
						(NJetHist->GetBinContent(i)-resultWeightBinByBinAccUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-resultWeightBinByBinAccUpNJetHist_->GetBinContent(i) ) +
						(NJetHist->GetBinContent(i)-resultWeightBBBDiBoUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-resultWeightBBBDiBoUpNJetHist_->GetBinContent(i) ) +
						(NJetHist->GetBinContent(i)-resultWeightBBBNoCloUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-resultWeightBBBNoCloUpNJetHist_->GetBinContent(i) ) +
						(NJetHist->GetBinContent(i)-muonIsoTAPUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-muonIsoTAPUpNJetHist_->GetBinContent(i) ) +
						(NJetHist->GetBinContent(i)-muonRecoTAPUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-muonRecoTAPUpNJetHist_->GetBinContent(i) ) +
						(NJetHist->GetBinContent(i)-elecIsoTAPUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-elecIsoTAPUpNJetHist_->GetBinContent(i) ) +
						(NJetHist->GetBinContent(i)-elecRecoTAPUpNJetHist_->GetBinContent(i) ) * (NJetHist->GetBinContent(i)-elecRecoTAPUpNJetHist_->GetBinContent(i) )
					    ) );
		if (debug_)cout<<"Bin"<<i<<":"<<NJetHist->GetBinContent(i)<<"+-"<<NJetHist->GetBinError(i)<<" ";
	}
	
	cout<<endl<<"TotalWeight is:"<<totalWeight<<endl;

	fOut->cd();
	HTHist->Write();
	MHTHist->Write();
	NJetHist->Write();
	out->Write();
	out->Close();
	

}
