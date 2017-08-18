#include "TFile.h"
#include "TTree.h"

void tree(void){

<<<<<<< HEAD
  Int_t ntimes=100;

=======
  Int_t N = 100;
  
>>>>>>> 5331526b7cbdb9f3dc6bb9ff5ddd47f64ee217eb
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
<<<<<<< HEAD
  
  for(Int_t i=0;i<ntimes;i++){
    Muon.Pt=i;
    Muon.Eta=ntimes+i;
    Muon.Phi=ntimes*2+i;
    Muon.E=ntimes*3+i;
  }
=======

  // Assign some values to each leave
  for(Int_t i=0;i<N;i++){
    Pt = i;
    Eta = N + i;
    Phi = 2*N + i;
    E = 3*N + i;
  }
  
>>>>>>> 5331526b7cbdb9f3dc6bb9ff5ddd47f64ee217eb
  // Fill the tree 
  tree->Fill();

  // Write and close the ROOT file 
  tree->Write();

  delete ftree;
}
