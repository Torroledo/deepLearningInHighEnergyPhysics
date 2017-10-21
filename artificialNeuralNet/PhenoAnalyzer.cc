#include <iostream>
#include "ROOTFunctions.h"
#include "DelphesFunctions.h"
#include "PhenoAnalyzer.h"
#include <time.h>
#include <vector>

//--------------------------------------------------------------------------------------
// PhenoAnalyzer creates a TTree with branches that have data from Muon, Event,         
// MissingET, Jet branches of output_delphes.root (TTree Delphes)                       
//--------------------------------------------------------------------------------------

int main(int argc, char *argv[]){
  
  // Loading data                                                                      
  TChain chain("Delphes");
  chain.Add(argv[1]);
  ExRootTreeReader *treeReader = new ExRootTreeReader(&chain);
  
  // Retrieving the seleted Branches                                                   
  TClonesArray *branchMuon = treeReader->UseBranch("Muon");
  TClonesArray *branchEvent = treeReader->UseBranch("Event");
  TClonesArray *branchMissingET = treeReader->UseBranch("MissingET");
  TClonesArray *branchJet = treeReader->UseBranch("Jet");
  
  Long64_t numberOfEntries = treeReader->GetEntries();
  
  // Creating the output file                                                           
  TFile * rawOutputFile = new TFile(argv[2], "RECREATE");
  
  // Creating a TTree for the output data                                              
  TTree *simu = new TTree("simu","Raw Data from Delphes");
  
  // Declaring Muon variables except - Muon, Muon.Particle, Muon_size, fUniqueID -
  std::vector<Float_t> PT, Eta, Phi, T;
  std::vector<Int_t> Charge, key;

  // Declaring MissingET (M_) variables except - MissingET, MissingET_size, M_fUniqueID, M_fBits  -   
  std::vector<Float_t> M_MET, M_Eta, M_Phi;
  std::vector<Int_t> M_key; 

  // Declaring Jet (J_) variables except - Jet,  Jet.Constituents, Jet.Particles, Jet_size, J_fUniqueID, J_fBits, J_BTag, J_TauTag -
  std::vector<Float_t> J_PT,J_Eta, J_Phi, J_T, J_Mass, J_DeltaEta, J_DeltaPhi, J_EhadOverEem, J_Beta, J_BetaStar, J_MeanSqDeltaR, J_PTD, J_FracPt, J_Tau1, J_Tau2, J_Tau3, J_Tau4, J_Tau5;
  std::vector<Int_t> J_Charge, J_NCharged, J_NNeutrals, J_key;
  std::vector<UInt_t> J_BTag, J_TauTag;

  // Creating one Branch for each variable                                              
  simu->Branch("PT",     &PT);
  simu->Branch("Eta",    &Eta);
  simu->Branch("Phi",    &Phi);
  simu->Branch("Charge", &Charge);
  simu->Branch("key",       &key);
 
  simu->Branch("M_MET",  &M_MET);
  simu->Branch("M_Eta",  &M_Eta);
  simu->Branch("M_Phi",  &M_Phi);
  simu->Branch("M_key",  &M_key);

  simu->Branch("J_PT",   &J_PT);
  simu->Branch("J_Eta",  &J_Eta);
  simu->Branch("J_Phi",  &J_Phi);
  simu->Branch("J_T",    &J_T);
  simu->Branch("J_Mass", &J_Mass);
  simu->Branch("J_DeltaEta",    &J_DeltaEta);
  simu->Branch("J_DeltaPhi",    &J_DeltaPhi);
  simu->Branch("J_EhadOverEem", &J_EhadOverEem);
  simu->Branch("J_Beta",        &J_Beta);
  simu->Branch("J_BetaStar",    &J_BetaStar);
  simu->Branch("J_MeanSqDeltaR", &J_MeanSqDeltaR);
  simu->Branch("J_PTD",   &J_PTD);
  simu->Branch("J_FracPt",&J_FracPt);
  simu->Branch("J_Tau1",  &J_Tau1);
  simu->Branch("J_Tau2",  &J_Tau2);
  simu->Branch("J_Tau3",  &J_Tau3);
  simu->Branch("J_Tau4",  &J_Tau4);
  simu->Branch("J_Tau5",  &J_Tau5);
  simu->Branch("J_Charge",&J_Charge);
  simu->Branch("J_NCharged",  &J_NCharged);
  simu->Branch("J_NNeutrals", &J_NNeutrals);
  simu->Branch("J_BTag", &J_BTag);
  simu->Branch("J_TauTag", &J_TauTag);
  simu->Branch("J_key", &J_key);

  cout << "\n\nNumber of entries in the Tree: " << numberOfEntries << endl;
  cout << "\nEmpty Tree:\n" << endl;

  simu->Print();

  for(Int_t entry = 0; entry < numberOfEntries; ++entry){
    
    treeReader->ReadEntry(entry);

    for (int muo = 0; muo < branchMuon->GetEntriesFast(); muo++){
      Muon *muon = (Muon*) branchMuon->At(muo);
      PT.push_back(muon->PT);
      Eta.push_back(muon->Eta);
      Phi.push_back(muon->Phi);
      Charge.push_back(muon->Charge);
      // Introducing a key identifier
      key.push_back(muo);
    }
    
    for (int mis = 0; mis < branchMissingET->GetEntriesFast(); mis++){
      MissingET *missinget = (MissingET*) branchMissingET->At(mis);
      M_MET.push_back(missinget->MET);
      M_Eta.push_back(missinget->Eta);
      M_Phi.push_back(missinget->Phi);
      // Introducing a key identifier
      M_key.push_back(mis);
    }
    
    for (int je = 0; je < branchJet->GetEntriesFast(); je++){
      Jet *jet= (Jet*) branchJet->At(je);
      J_PT.push_back(jet->PT);
      J_Eta.push_back(jet->Eta);
      J_Phi.push_back(jet->Phi);
      J_T.push_back(jet->T);
      J_Mass.push_back(jet->Mass);
      J_DeltaEta.push_back(jet->DeltaEta);
      J_DeltaPhi.push_back(jet->DeltaPhi); 
      J_EhadOverEem.push_back(jet->EhadOverEem);
      J_Beta.push_back(jet->Beta);
      J_BetaStar.push_back(jet->BetaStar);
      J_MeanSqDeltaR.push_back(jet->MeanSqDeltaR);
      J_PTD.push_back(jet->PTD);
      J_FracPt.push_back(jet->FracPt[5]);
      J_Tau1.push_back(jet->Tau1);
      J_Tau2.push_back(jet->Tau2);
      J_Tau3.push_back(jet->Tau3);
      J_Tau4.push_back(jet->Tau4);
      J_Tau5.push_back(jet->Tau5);
      J_Charge.push_back(jet->Charge);
      J_NCharged.push_back(jet->NCharged);
      J_NNeutrals.push_back(jet->NNeutrals);
      J_BTag.push_back(jet->BTag);
      J_TauTag.push_back(jet->TauTag);
      // Introducing a key identifier 
      J_key.push_back(je);
    }
    
    simu->Fill();

    PT.clear();
    Eta.clear();
    Phi.clear();
    Charge.clear();
    key.clear();

    M_MET.clear();
    M_Eta.clear();
    M_Phi.clear();
    M_key.clear();

    J_PT.clear();
    J_Eta.clear(); 
    J_Phi.clear(); 
    J_T.clear();
    J_Mass.clear();
    J_DeltaEta.clear(); 
    J_DeltaPhi.clear(); 
    J_EhadOverEem.clear();
    J_Beta.clear();
    J_BetaStar.clear();
    J_MeanSqDeltaR.clear();
    J_PTD.clear();
    J_FracPt.clear();
    J_Tau1.clear();
    J_Tau2.clear();
    J_Tau3.clear();
    J_Tau4.clear(); 
    J_Tau5.clear();
    J_Charge.clear(); 
    J_NCharged.clear(); 
    J_NNeutrals.clear();
    J_key.clear();
    J_BTag.clear();;
    J_TauTag.clear();
  }
  simu->Print();
  //simu->Scan();
  rawOutputFile->Write();
  rawOutputFile->Close();
}
