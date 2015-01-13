//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Nov 21 16:09:38 2013 by ROOT version 5.32/00
// from TTree LostLeptonBkg/LostLeptonBkg
// found on file: /scratch/adraeger/data.root
//////////////////////////////////////////////////////////

#ifndef CreateTH1D_h
#define CreateTH1D_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxMTWCut = 1;

class CreateTH1D {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           muPromtMatched;
   Int_t           nMu;
   Int_t           nElec;
   Float_t         LepPt;
   Float_t         LepEta;
   Float_t         LepPhi;
   Float_t         MTW;
   Int_t           MTWCut_;
   Float_t         RecoLevelMuonDeltaR;
   Float_t         RecoLevelMuonRelPTJet;
   Float_t         genDeltaR;
   Float_t         genPTJet;
   Float_t         genPTRelJet;
   Float_t         genPt;
   Float_t         genEta;
   Float_t         genPhi;
   Float_t         LostLeptonWeight;
   Float_t         muonAccEff;
   Float_t         muonRecoEff;
   Float_t         muonIsoEff;
   Float_t         muonIsoWeight;
   Float_t         muonRecoWeight;
   Float_t         muonAccWeight;
   Float_t         elecAccWeight;
   Float_t         elecRecoWeight;
   Float_t         elecIsoWeight;
   Float_t         elecAccEff;
   Float_t         elecRecoEff;
   Float_t         elecIsoEff;
   Float_t         muonIsoWeight2;
   Float_t         muonAllIsoWeight2;
   Float_t         muonRecoWeight2;
   Float_t         muonAccWeight2;
   Float_t         muonTotalWeight2;
   Float_t         elecAccWeight2;
   Float_t         elecRecoWeight2;
   Float_t         elecIsoWeight2;
   Float_t         elecTotalWeight2;
   Float_t         resultWeight2;
   Float_t         resultWeight2MTW_;
   Float_t         resultWeight;
   Float_t         resultWeightMTW_;
   Float_t         muonWeightBinByBin;
   Float_t         elecWeightBinByBin;
   Float_t         resultWeightBinByBin;
   Float_t         resultWeightBinByBinMTW;
   Float_t         mtwCorrection;
   Float_t         HT;
   Float_t         MHT;
   UShort_t        NJets;
   Float_t         Weight;
   UShort_t        NVtx;
   Float_t         MT;
   Float_t         muAllIsoWeight;
   Int_t           Errors;
   Float_t         MuonGenPt;
   Float_t         muonBinByBinIsoWeight;
   Float_t         muonBinByBinRecoWeight;
   Float_t         muonBinByBinAccWeight;
   Float_t         muonBinByBinTotalWeight;
   Float_t         elecBinByBinAccWeight;
   Float_t         elecBinByBinRecoWeight;
   Float_t         elecBinByBinIsoWeight;
   Float_t         elecBinByBinAccEff;
   Float_t         elecBinByBinRecoEff;
   Float_t         elecBinByBinIsoEff;
   Float_t         elecBinByBinTotalWeight;
   Float_t         resultBBBW;
   Float_t         resultBBBWMTW;
   Float_t         resultBBBWMTWUp;
   Float_t         resultBBBWMTWDown;
   Float_t         resultBBBWMTWDiLep;
   Float_t         resultBBBWMTWDiLepUp;
   Float_t         resultBBBWMTWDiLepDown;
   Float_t         muonIsoTAPRelUncertainty;
   Float_t         muonIsoTAPUp;
   Float_t         muonIsoTAPDown;
   Float_t         muonRecoTAPRelUncertainty;
   Float_t         muonRecoTAPUp;
   Float_t         muonRecoTAPDown;
   Float_t         elecIsoTAPRelUncertainty;
   Float_t         elecIsoTAPUp;
   Float_t         elecIsoTAPDown;
   Float_t         elecRecoTAPRelUncertainty;
   Float_t         elecRecoTAPUp;
   Float_t         elecRecoTAPDown;
   Float_t         resultWeightBinByBinAccUp;
   Float_t         resultWeightBinByBinAccDown;
   Float_t         resultWeightBBBDiBoUp;
   Float_t         resultWeightBBBDiBoDown;
   Float_t         resultWeightBBBNoCloUp;
   Float_t         resultWeightBBBNoCloDown;
   Float_t         metup;
   Float_t         metdown;
   Int_t           nRecoMu;
   Float_t         recoMtw1;
   Float_t         recoMtw2;
   Float_t         recoMtw3;
   Float_t         recoMtw4;
   Float_t         recoMtw5;
   Float_t         MTWMax;
   Float_t         MTWCut;
   Float_t         MinMuPT;
   Float_t         MinElecPT;
   Float_t         DiLepCorrection;
   Float_t         DiLepCorrectionUp;
   Float_t         DiLepCorrectionDown;
   Float_t         TAPUncertainties;
   Float_t         TAPConstUncertainty;
   Float_t         MTWUncertaintyUp;
   Float_t         MTWUncertaintyDown;
   Float_t         muonAccUncertaintyUp;
   Float_t         muonAccUncertaintyDown;
   Float_t         elecAccUncertaintyUp;
   Float_t         elecAccUncertaintyDown;
   Float_t         muonTAPIsoWeightMC;
   Float_t         muonTAPIsoWeightData;
   Float_t         muonTAPRecoWeightMC;
   Float_t         muonTAPRecoWeightData;
   Float_t         elecTAPIsoWeightMC;
   Float_t         elecTAPIsoWeightData;
   Float_t         elecTAPRecoWeightMC;
   Float_t         elecTAPRecoWeightData;
   Float_t         diBosonDown;
   Float_t         nonClosureLowNJet;
   Float_t         nonClosureHighNJet;

   // List of branches
   TBranch        *b_muPromtMatched;   //!
   TBranch        *b_nMu;   //!
   TBranch        *b_nElec;   //!
   TBranch        *b_LepPt;   //!
   TBranch        *b_LepEta;   //!
   TBranch        *b_LepPhi;   //!
   TBranch        *b_MTW;   //!
   TBranch        *b_MTWCut_;   //!
   TBranch        *b_RecoLevelMuonDeltaR;   //!
   TBranch        *b_RecoLevelMuonRelPTJet;   //!
   TBranch        *b_genDeltaR;   //!
   TBranch        *b_genPTJet;   //!
   TBranch        *b_genPTRelJet;   //!
   TBranch        *b_genPt;   //!
   TBranch        *b_genEta;   //!
   TBranch        *b_genPhi;   //!
   TBranch        *b_LostLeptonWeight;   //!
   TBranch        *b_muonAccEff;   //!
   TBranch        *b_muonRecoEff;   //!
   TBranch        *b_muonIsoEff;   //!
   TBranch        *b_muonIsoWeight;   //!
   TBranch        *b_muonRecoWeight;   //!
   TBranch        *b_muonAccWeight;   //!
   TBranch        *b_elecAccWeight;   //!
   TBranch        *b_elecRecoWeight;   //!
   TBranch        *b_elecIsoWeight;   //!
   TBranch        *b_elecAccEff;   //!
   TBranch        *b_elecRecoEff;   //!
   TBranch        *b_elecIsoEff;   //!
   TBranch        *b_muonIsoWeight2;   //!
   TBranch        *b_muonAllIsoWeight2;   //!
   TBranch        *b_muonRecoWeight2;   //!
   TBranch        *b_muonAccWeight2;   //!
   TBranch        *b_muonTotalWeight2;   //!
   TBranch        *b_elecAccWeight2;   //!
   TBranch        *b_elecRecoWeight2;   //!
   TBranch        *b_elecIsoWeight2;   //!
   TBranch        *b_elecTotalWeight2;   //!
   TBranch        *b_resultWeight2;   //!
   TBranch        *b_resultWeight2MTW;   //!
   TBranch        *b_resultWeight;   //!
   TBranch        *b_resultWeightMTW;   //!
   TBranch        *b_muonWeightBinByBin;   //!
   TBranch        *b_elecWeightBinByBin;   //!
   TBranch        *b_resultWeightBinByBin;   //!
   TBranch        *b_resultWeightBinByBinMTW;   //!
   TBranch        *b_mtwCorrection;   //!
   TBranch        *b_HT;   //!
   TBranch        *b_MHT;   //!
   TBranch        *b_NJets;   //!
   TBranch        *b_Weight;   //!
   TBranch        *b_NVtx;   //!
   TBranch        *b_MT;   //!
   TBranch        *b_muAllIsoWeight;   //!
   TBranch        *b_Errors;   //!
   TBranch        *b_MuonGenPt;   //!
   TBranch        *b_muonBinByBinIsoWeight;   //!
   TBranch        *b_muonBinByBinRecoWeight;   //!
   TBranch        *b_muonBinByBinAccWeight;   //!
   TBranch        *b_muonBinByBinTotalWeight;   //!
   TBranch        *b_elecBinByBinAccWeight;   //!
   TBranch        *b_elecBinByBinRecoWeight;   //!
   TBranch        *b_elecBinByBinIsoWeight;   //!
   TBranch        *b_elecBinByBinAccEff;   //!
   TBranch        *b_elecBinByBinRecoEff;   //!
   TBranch        *b_elecBinByBinIsoEff;   //!
   TBranch        *b_elecBinByBinTotalWeight;   //!
   TBranch        *b_resultBBBW;   //!
   TBranch        *b_resultBBBWMTW;   //!
   TBranch        *b_resultBBBWMTWUp;   //!
   TBranch        *b_resultBBBWMTWDown;   //!
   TBranch        *b_resultBBBWMTWDiLep;   //!
   TBranch        *b_resultBBBWMTWDiLepUp;   //!
   TBranch        *b_resultBBBWMTWDiLepDown;   //!
   TBranch        *b_muonIsoTAPRelUncertainty;   //!
   TBranch        *b_muonIsoTAPUp;   //!
   TBranch        *b_muonIsoTAPDown;   //!
   TBranch        *b_muonIsoTAPRelUncertainty;   //!
   TBranch        *b_muonIsoTAPUp;   //!
   TBranch        *b_muonIsoTAPDown;   //!
   TBranch        *b_elecIsoTAPRelUncertainty;   //!
   TBranch        *b_elecIsoTAPUp;   //!
   TBranch        *b_elecIsoTAPDown;   //!
   TBranch        *b_elecIsoTAPRelUncertainty;   //!
   TBranch        *b_elecIsoTAPUp;   //!
   TBranch        *b_elecIsoTAPDown;   //!
   TBranch        *b_resultWeightBinByBinAccUp;   //!
   TBranch        *b_resultWeightBinByBinAccDown;   //!
   TBranch        *b_resultWeightBBBDiBoUp;   //!
   TBranch        *b_resultWeightBBBDiBoDown;   //!
   TBranch        *b_resultWeightBBBNoCloUp;   //!
   TBranch        *b_resultWeightBBBNoCloDown;   //!
   TBranch        *b_metup;   //!
   TBranch        *b_metdown;   //!
   TBranch        *b_nRecoMu;   //!
   TBranch        *b_recoMtw1;   //!
   TBranch        *b_recoMtw2;   //!
   TBranch        *b_recoMtw3;   //!
   TBranch        *b_recoMtw4;   //!
   TBranch        *b_recoMtw5;   //!
   TBranch        *b_MTWMax;   //!
   TBranch        *b_MTWCut;   //!
   TBranch        *b_MinMuPT;   //!
   TBranch        *b_MinElecPT;   //!
   TBranch        *b_DiLepCorrection;   //!
   TBranch        *b_DiLepCorrectionUp;   //!
   TBranch        *b_DiLepCorrectionDown;   //!
   TBranch        *b_TAPUncertainties;   //!
   TBranch        *b_TAPConstUncertainty;   //!
   TBranch        *b_MTWUncertaintyUp;   //!
   TBranch        *b_MTWUncertaintyDown;   //!
   TBranch        *b_muonAccUncertaintyUp;   //!
   TBranch        *b_muonAccUncertaintyDown;   //!
   TBranch        *b_elecAccUncertaintyUp;   //!
   TBranch        *b_elecAccUncertaintyDown;   //!
   TBranch        *b_muonTAPIsoWeightMC;   //!
   TBranch        *b_muonTAPIsoWeightData;   //!
   TBranch        *b_muonTAPRecoWeightMC;   //!
   TBranch        *b_muonTAPRecoWeightData;   //!
   TBranch        *b_elecTAPIsoWeightMC;   //!
   TBranch        *b_elecTAPIsoWeightData;   //!
   TBranch        *b_elecTAPRecoWeightMC;   //!
   TBranch        *b_elecTAPRecoWeightData;   //!
   TBranch        *b_diBosonDown;   //!
   TBranch        *b_nonClosureLowNJet;   //!
   TBranch        *b_nonClosureHighNJet;   //!

   CreateTH1D(TTree *tree=0);
   virtual ~CreateTH1D();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef CreateTH1D_cxx
CreateTH1D::CreateTH1D(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/scratch/adraeger/data.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/scratch/adraeger/data.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/scratch/adraeger/data.root:/LostLeptonBkgProducer");
      dir->GetObject("LostLeptonBkg",tree);

   }
   Init(tree);
}

CreateTH1D::~CreateTH1D()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t CreateTH1D::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t CreateTH1D::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void CreateTH1D::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("muPromtMatched", &muPromtMatched, &b_muPromtMatched);
   fChain->SetBranchAddress("nMu", &nMu, &b_nMu);
   fChain->SetBranchAddress("nElec", &nElec, &b_nElec);
   fChain->SetBranchAddress("LepPt", &LepPt, &b_LepPt);
   fChain->SetBranchAddress("LepEta", &LepEta, &b_LepEta);
   fChain->SetBranchAddress("LepPhi", &LepPhi, &b_LepPhi);
   fChain->SetBranchAddress("MTW", &MTW, &b_MTW);
   fChain->SetBranchAddress("MTWCut_", &MTWCut_, &b_MTWCut_);
   fChain->SetBranchAddress("RecoLevelMuonDeltaR", &RecoLevelMuonDeltaR, &b_RecoLevelMuonDeltaR);
   fChain->SetBranchAddress("RecoLevelMuonRelPTJet", &RecoLevelMuonRelPTJet, &b_RecoLevelMuonRelPTJet);
   fChain->SetBranchAddress("genDeltaR", &genDeltaR, &b_genDeltaR);
   fChain->SetBranchAddress("genPTJet", &genPTJet, &b_genPTJet);
   fChain->SetBranchAddress("genPTRelJet", &genPTRelJet, &b_genPTRelJet);
   fChain->SetBranchAddress("genPt", &genPt, &b_genPt);
   fChain->SetBranchAddress("genEta", &genEta, &b_genEta);
   fChain->SetBranchAddress("genPhi", &genPhi, &b_genPhi);
   fChain->SetBranchAddress("LostLeptonWeight", &LostLeptonWeight, &b_LostLeptonWeight);
   fChain->SetBranchAddress("muonAccEff", &muonAccEff, &b_muonAccEff);
   fChain->SetBranchAddress("muonRecoEff", &muonRecoEff, &b_muonRecoEff);
   fChain->SetBranchAddress("muonIsoEff", &muonIsoEff, &b_muonIsoEff);
   fChain->SetBranchAddress("muonIsoWeight", &muonIsoWeight, &b_muonIsoWeight);
   fChain->SetBranchAddress("muonRecoWeight", &muonRecoWeight, &b_muonRecoWeight);
   fChain->SetBranchAddress("muonAccWeight", &muonAccWeight, &b_muonAccWeight);
   fChain->SetBranchAddress("elecAccWeight", &elecAccWeight, &b_elecAccWeight);
   fChain->SetBranchAddress("elecRecoWeight", &elecRecoWeight, &b_elecRecoWeight);
   fChain->SetBranchAddress("elecIsoWeight", &elecIsoWeight, &b_elecIsoWeight);
   fChain->SetBranchAddress("elecAccEff", &elecAccEff, &b_elecAccEff);
   fChain->SetBranchAddress("elecRecoEff", &elecRecoEff, &b_elecRecoEff);
   fChain->SetBranchAddress("elecIsoEff", &elecIsoEff, &b_elecIsoEff);
   fChain->SetBranchAddress("muonIsoWeight2", &muonIsoWeight2, &b_muonIsoWeight2);
   fChain->SetBranchAddress("muonAllIsoWeight2", &muonAllIsoWeight2, &b_muonAllIsoWeight2);
   fChain->SetBranchAddress("muonRecoWeight2", &muonRecoWeight2, &b_muonRecoWeight2);
   fChain->SetBranchAddress("muonAccWeight2", &muonAccWeight2, &b_muonAccWeight2);
   fChain->SetBranchAddress("muonTotalWeight2", &muonTotalWeight2, &b_muonTotalWeight2);
   fChain->SetBranchAddress("elecAccWeight2", &elecAccWeight2, &b_elecAccWeight2);
   fChain->SetBranchAddress("elecRecoWeight2", &elecRecoWeight2, &b_elecRecoWeight2);
   fChain->SetBranchAddress("elecIsoWeight2", &elecIsoWeight2, &b_elecIsoWeight2);
   fChain->SetBranchAddress("elecTotalWeight2", &elecTotalWeight2, &b_elecTotalWeight2);
   fChain->SetBranchAddress("resultWeight2", &resultWeight2, &b_resultWeight2);
   fChain->SetBranchAddress("resultWeight2MTW_", &resultWeight2MTW_, &b_resultWeight2MTW);
   fChain->SetBranchAddress("resultWeight", &resultWeight, &b_resultWeight);
   fChain->SetBranchAddress("resultWeightMTW_", &resultWeightMTW_, &b_resultWeightMTW);
   fChain->SetBranchAddress("muonWeightBinByBin", &muonWeightBinByBin, &b_muonWeightBinByBin);
   fChain->SetBranchAddress("elecWeightBinByBin", &elecWeightBinByBin, &b_elecWeightBinByBin);
   fChain->SetBranchAddress("resultWeightBinByBin", &resultWeightBinByBin, &b_resultWeightBinByBin);
   fChain->SetBranchAddress("resultWeightBinByBinMTW", &resultWeightBinByBinMTW, &b_resultWeightBinByBinMTW);
   fChain->SetBranchAddress("mtwCorrection", &mtwCorrection, &b_mtwCorrection);
   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
   fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
   fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
   fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
   fChain->SetBranchAddress("MT", &MT, &b_MT);
   fChain->SetBranchAddress("muAllIsoWeight", &muAllIsoWeight, &b_muAllIsoWeight);
   fChain->SetBranchAddress("Errors", &Errors, &b_Errors);
   fChain->SetBranchAddress("MuonGenPt", &MuonGenPt, &b_MuonGenPt);
   fChain->SetBranchAddress("muonBinByBinIsoWeight", &muonBinByBinIsoWeight, &b_muonBinByBinIsoWeight);
   fChain->SetBranchAddress("muonBinByBinRecoWeight", &muonBinByBinRecoWeight, &b_muonBinByBinRecoWeight);
   fChain->SetBranchAddress("muonBinByBinAccWeight", &muonBinByBinAccWeight, &b_muonBinByBinAccWeight);
   fChain->SetBranchAddress("muonBinByBinTotalWeight", &muonBinByBinTotalWeight, &b_muonBinByBinTotalWeight);
   fChain->SetBranchAddress("elecBinByBinAccWeight", &elecBinByBinAccWeight, &b_elecBinByBinAccWeight);
   fChain->SetBranchAddress("elecBinByBinRecoWeight", &elecBinByBinRecoWeight, &b_elecBinByBinRecoWeight);
   fChain->SetBranchAddress("elecBinByBinIsoWeight", &elecBinByBinIsoWeight, &b_elecBinByBinIsoWeight);
   fChain->SetBranchAddress("elecBinByBinAccEff", &elecBinByBinAccEff, &b_elecBinByBinAccEff);
   fChain->SetBranchAddress("elecBinByBinRecoEff", &elecBinByBinRecoEff, &b_elecBinByBinRecoEff);
   fChain->SetBranchAddress("elecBinByBinIsoEff", &elecBinByBinIsoEff, &b_elecBinByBinIsoEff);
   fChain->SetBranchAddress("elecBinByBinTotalWeight", &elecBinByBinTotalWeight, &b_elecBinByBinTotalWeight);
   fChain->SetBranchAddress("resultBBBW", &resultBBBW, &b_resultBBBW);
   fChain->SetBranchAddress("resultBBBWMTW", &resultBBBWMTW, &b_resultBBBWMTW);
   fChain->SetBranchAddress("resultBBBWMTWUp", &resultBBBWMTWUp, &b_resultBBBWMTWUp);
   fChain->SetBranchAddress("resultBBBWMTWDown", &resultBBBWMTWDown, &b_resultBBBWMTWDown);
   fChain->SetBranchAddress("resultBBBWMTWDiLep", &resultBBBWMTWDiLep, &b_resultBBBWMTWDiLep);
   fChain->SetBranchAddress("resultBBBWMTWDiLepUp", &resultBBBWMTWDiLepUp, &b_resultBBBWMTWDiLepUp);
   fChain->SetBranchAddress("resultBBBWMTWDiLepDown", &resultBBBWMTWDiLepDown, &b_resultBBBWMTWDiLepDown);
   fChain->SetBranchAddress("muonIsoTAPRelUncertainty", &muonIsoTAPRelUncertainty, &b_muonIsoTAPRelUncertainty);
   fChain->SetBranchAddress("muonIsoTAPUp", &muonIsoTAPUp, &b_muonIsoTAPUp);
   fChain->SetBranchAddress("muonIsoTAPDown", &muonIsoTAPDown, &b_muonIsoTAPDown);
   fChain->SetBranchAddress("muonRecoTAPRelUncertainty", &muonRecoTAPRelUncertainty, &b_muonIsoTAPRelUncertainty);
   fChain->SetBranchAddress("muonRecoTAPUp", &muonRecoTAPUp, &b_muonIsoTAPUp);
   fChain->SetBranchAddress("muonRecoTAPDown", &muonRecoTAPDown, &b_muonIsoTAPDown);
   fChain->SetBranchAddress("elecIsoTAPRelUncertainty", &elecIsoTAPRelUncertainty, &b_elecIsoTAPRelUncertainty);
   fChain->SetBranchAddress("elecIsoTAPUp", &elecIsoTAPUp, &b_elecIsoTAPUp);
   fChain->SetBranchAddress("elecIsoTAPDown", &elecIsoTAPDown, &b_elecIsoTAPDown);
   fChain->SetBranchAddress("elecRecoTAPRelUncertainty", &elecRecoTAPRelUncertainty, &b_elecIsoTAPRelUncertainty);
   fChain->SetBranchAddress("elecRecoTAPUp", &elecRecoTAPUp, &b_elecIsoTAPUp);
   fChain->SetBranchAddress("elecRecoTAPDown", &elecRecoTAPDown, &b_elecIsoTAPDown);
   fChain->SetBranchAddress("resultWeightBinByBinAccUp", &resultWeightBinByBinAccUp, &b_resultWeightBinByBinAccUp);
   fChain->SetBranchAddress("resultWeightBinByBinAccDown", &resultWeightBinByBinAccDown, &b_resultWeightBinByBinAccDown);
   fChain->SetBranchAddress("resultWeightBBBDiBoUp", &resultWeightBBBDiBoUp, &b_resultWeightBBBDiBoUp);
   fChain->SetBranchAddress("resultWeightBBBDiBoDown", &resultWeightBBBDiBoDown, &b_resultWeightBBBDiBoDown);
   fChain->SetBranchAddress("resultWeightBBBNoCloUp", &resultWeightBBBNoCloUp, &b_resultWeightBBBNoCloUp);
   fChain->SetBranchAddress("resultWeightBBBNoCloDown", &resultWeightBBBNoCloDown, &b_resultWeightBBBNoCloDown);
   fChain->SetBranchAddress("metup", &metup, &b_metup);
   fChain->SetBranchAddress("metdown", &metdown, &b_metdown);
   fChain->SetBranchAddress("nRecoMu", &nRecoMu, &b_nRecoMu);
   fChain->SetBranchAddress("recoMtw1", &recoMtw1, &b_recoMtw1);
   fChain->SetBranchAddress("recoMtw2", &recoMtw2, &b_recoMtw2);
   fChain->SetBranchAddress("recoMtw3", &recoMtw3, &b_recoMtw3);
   fChain->SetBranchAddress("recoMtw4", &recoMtw4, &b_recoMtw4);
   fChain->SetBranchAddress("recoMtw5", &recoMtw5, &b_recoMtw5);
   fChain->SetBranchAddress("MTWMax", &MTWMax, &b_MTWMax);
   fChain->SetBranchAddress("MTWCut", &MTWCut, &b_MTWCut);
   fChain->SetBranchAddress("MinMuPT", &MinMuPT, &b_MinMuPT);
   fChain->SetBranchAddress("MinElecPT", &MinElecPT, &b_MinElecPT);
   fChain->SetBranchAddress("DiLepCorrection", &DiLepCorrection, &b_DiLepCorrection);
   fChain->SetBranchAddress("DiLepCorrectionUp", &DiLepCorrectionUp, &b_DiLepCorrectionUp);
   fChain->SetBranchAddress("DiLepCorrectionDown", &DiLepCorrectionDown, &b_DiLepCorrectionDown);
   fChain->SetBranchAddress("TAPUncertainties", &TAPUncertainties, &b_TAPUncertainties);
   fChain->SetBranchAddress("TAPConstUncertainty", &TAPConstUncertainty, &b_TAPConstUncertainty);
   fChain->SetBranchAddress("MTWUncertaintyUp", &MTWUncertaintyUp, &b_MTWUncertaintyUp);
   fChain->SetBranchAddress("MTWUncertaintyDown", &MTWUncertaintyDown, &b_MTWUncertaintyDown);
   fChain->SetBranchAddress("muonAccUncertaintyUp", &muonAccUncertaintyUp, &b_muonAccUncertaintyUp);
   fChain->SetBranchAddress("muonAccUncertaintyDown", &muonAccUncertaintyDown, &b_muonAccUncertaintyDown);
   fChain->SetBranchAddress("elecAccUncertaintyUp", &elecAccUncertaintyUp, &b_elecAccUncertaintyUp);
   fChain->SetBranchAddress("elecAccUncertaintyDown", &elecAccUncertaintyDown, &b_elecAccUncertaintyDown);
   fChain->SetBranchAddress("muonTAPIsoWeightMC", &muonTAPIsoWeightMC, &b_muonTAPIsoWeightMC);
   fChain->SetBranchAddress("muonTAPIsoWeightData", &muonTAPIsoWeightData, &b_muonTAPIsoWeightData);
   fChain->SetBranchAddress("muonTAPRecoWeightMC", &muonTAPRecoWeightMC, &b_muonTAPRecoWeightMC);
   fChain->SetBranchAddress("muonTAPRecoWeightData", &muonTAPRecoWeightData, &b_muonTAPRecoWeightData);
   fChain->SetBranchAddress("elecTAPIsoWeightMC", &elecTAPIsoWeightMC, &b_elecTAPIsoWeightMC);
   fChain->SetBranchAddress("elecTAPIsoWeightData", &elecTAPIsoWeightData, &b_elecTAPIsoWeightData);
   fChain->SetBranchAddress("elecTAPRecoWeightMC", &elecTAPRecoWeightMC, &b_elecTAPRecoWeightMC);
   fChain->SetBranchAddress("elecTAPRecoWeightData", &elecTAPRecoWeightData, &b_elecTAPRecoWeightData);
   fChain->SetBranchAddress("diBosonDown", &diBosonDown, &b_diBosonDown);
   fChain->SetBranchAddress("nonClosureLowNJet", &nonClosureLowNJet, &b_nonClosureLowNJet);
   fChain->SetBranchAddress("nonClosureHighNJet", &nonClosureHighNJet, &b_nonClosureHighNJet);
   Notify();
}

Bool_t CreateTH1D::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void CreateTH1D::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t CreateTH1D::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef CreateTH1D_cxx
