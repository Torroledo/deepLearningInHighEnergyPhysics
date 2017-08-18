#include "TFile.h"
#include "TTree.h"

void tree(void){

  // Create a ROOT file to save the TTree

  TFile *ftree = new TFile("Muon.root","RECREATE");

  // Create a ROOT Tree 

  TTree *tree = new TTree("myTree","my first ROOT tree");
  //TTree aliTree with folders

  struct Muon{
    Double_t Pt;
    Double_t Eta;
    Double_t Phi;
    Double_t E;
  };
  //Event *event = 0;
  //Event *event = new Event();
  struct Muon event;

  // Create one branch.
  tree->Branch("Event", &event,"Pt/D:Eta/D:Phi/D:E/D");

  // Fill the tree 
  tree->Fill();

  // Write and close the ROOT file 
  tree->Write();

  delete ftree;
}
