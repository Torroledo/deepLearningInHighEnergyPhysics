

int main(int argc, char **argv){

  TFile hfile("Event.root","RECREATE","Example");

  // Create a ROOT Tree 

  TTree *tree = new TTree("myTree","my first ROOT tree");
  //TTree aliTree with folders

  //Event *event = 0;
  Event *event = new Event();

  // Creating variables
  Double_t Pt,Eta,Phi,E;

  // Create one branch.
  myTree->Branch("Muon", "Event", &event,"Pt/D:Eta/D:Phi/D:E/D");


}
