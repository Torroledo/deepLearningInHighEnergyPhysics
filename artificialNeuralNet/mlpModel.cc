//--------------------------------------------------------------------------------------
// Multilayer Perceptron Model for a signal to background classification problem
// Search of a Z' vector Boson at LHC
// 
// by Iván Torroledo 
//--------------------------------------------------------------------------------------

void mlpModel(){
 
  // Loading MLP class if it don't exist
  if (!gROOT->GetClass("TMultiLayerPerceptron")) {
    gSystem->Load("libMLP");
    cout << "MLP lib loaded! :)"<< endl;
  }
  
  // Model Parameters
  ntrain = 100;

  // Loading Data  
  const char* signalFilename = "outputTree.root";
  const char* back1Filename = "outputTree.root";
  const char* back2Filename = "outputTree.root";

  TFile* signalFile = new TFile(signalFilename);
  TFile* back1File  = new TFile(back1Filename);
  TFile* back2File  = new TFile(back2Filename);  

  TTree* signalSimulation = (TTree *) signalFile->Get("simu");
  TTree* back1Simulation  = (TTree *) back1File->Get("simu");
  TTree* back2Simulation  = (TTree *) back2File->Get("simu");

  // Creating a Total TTree with signal & background data
  TTree* totalSimulation = new TTree("totalSimulation","Joined Normalized Data");

  // Creating vector variables to store joined data 
  std::vector<Int_t> Charge,J_Charge,J_NCharged,J_NNeutrals;
  std::vector<UInt_t> J_BTag,J_TauTag;
  std::vector<Float_t> PT,Eta,Phi,T, M_MET,M_Eta,M_Phi;
  std::vector<Float_t> J_PT,J_Eta,J_Phi,J_T,J_Mass,J_DeltaEta,J_DeltaPhi;
  std::vector<Float_t> J_EhadOverEem,J_Beta,J_BetaStar,J_MeanSqDeltaR,J_PTD;
  std::vector<Float_t> J_FracPt,J_Tau1,J_Tau2,J_Tau3,J_Tau4,J_Tau5;

  std::vector<Int_t> type;
  
  signalSimulation->SetBranchAddress("PT",     &PT);
  signalSimulation->SetBranchAddress("Eta",    &Eta);
  signalSimulation->SetBranchAddress("Phi",    &Phi);
  signalSimulation->SetBranchAddress("Charge", &Charge);
  signalSimulation->SetBranchAddress("M_MET",  &M_MET);
  signalSimulation->SetBranchAddress("M_Eta",  &M_Eta);
  signalSimulation->SetBranchAddress("M_Phi",  &M_Phi);
  signalSimulation->SetBranchAddress("J_PT",   &J_PT);
  signalSimulation->SetBranchAddress("J_Eta",  &J_Eta);
  signalSimulation->SetBranchAddress("J_Phi",  &J_Phi);
  signalSimulation->SetBranchAddress("J_T",    &J_T);
  signalSimulation->SetBranchAddress("J_Mass", &J_Mass);
  signalSimulation->SetBranchAddress("J_DeltaEta",    &J_DeltaEta);
  signalSimulation->SetBranchAddress("J_DeltaPhi",    &J_DeltaPhi);
  signalSimulation->SetBranchAddress("J_EhadOverEem", &J_EhadOverEem);
  signalSimulation->SetBranchAddress("J_Beta",        &J_Beta);
  signalSimulation->SetBranchAddress("J_BetaStar",    &J_BetaStar);
  signalSimulation->SetBranchAddress("J_MeanSqDeltaR", &J_MeanSqDeltaR);
  signalSimulation->SetBranchAddress("J_PTD",   &J_PTD);
  signalSimulation->SetBranchAddress("J_FracPt",&J_FracPt);
  signalSimulation->SetBranchAddress("J_Tau1",  &J_Tau1);
  signalSimulation->SetBranchAddress("J_Tau2",  &J_Tau2);
  signalSimulation->SetBranchAddress("J_Tau3",  &J_Tau3);
  signalSimulation->SetBranchAddress("J_Tau4",  &J_Tau4);
  signalSimulation->SetBranchAddress("J_Tau5",  &J_Tau5);
  signalSimulation->SetBranchAddress("J_Charge",&J_Charge);
  signalSimulation->SetBranchAddress("J_NCharged",  &J_NCharged);
  signalSimulation->SetBranchAddress("J_NNeutrals", &J_NNeutrals);
  signalSimulation->SetBranchAddress("J_BTag", &J_BTag);
  signalSimulation->SetBranchAddress("J_TauTag", &J_TauTag);

  back1Simulation->SetBranchAddress("PT",     &PT);
  back1Simulation->SetBranchAddress("Eta",    &Eta);
  back1Simulation->SetBranchAddress("Phi",    &Phi);
  back1Simulation->SetBranchAddress("Charge", &Charge);
  back1Simulation->SetBranchAddress("M_MET",  &M_MET);
  back1Simulation->SetBranchAddress("M_Eta",  &M_Eta);
  back1Simulation->SetBranchAddress("M_Phi",  &M_Phi);
  back1Simulation->SetBranchAddress("J_PT",   &J_PT);
  back1Simulation->SetBranchAddress("J_Eta",  &J_Eta);
  back1Simulation->SetBranchAddress("J_Phi",  &J_Phi);
  back1Simulation->SetBranchAddress("J_T",    &J_T);
  back1Simulation->SetBranchAddress("J_Mass", &J_Mass);
  back1Simulation->SetBranchAddress("J_DeltaEta",    &J_DeltaEta);
  back1Simulation->SetBranchAddress("J_DeltaPhi",    &J_DeltaPhi);
  back1Simulation->SetBranchAddress("J_EhadOverEem", &J_EhadOverEem);
  back1Simulation->SetBranchAddress("J_Beta",        &J_Beta);
  back1Simulation->SetBranchAddress("J_BetaStar",    &J_BetaStar);
  back1Simulation->SetBranchAddress("J_MeanSqDeltaR", &J_MeanSqDeltaR);
  back1Simulation->SetBranchAddress("J_PTD",   &J_PTD);
  back1Simulation->SetBranchAddress("J_FracPt",&J_FracPt);
  back1Simulation->SetBranchAddress("J_Tau1",  &J_Tau1);
  back1Simulation->SetBranchAddress("J_Tau2",  &J_Tau2);
  back1Simulation->SetBranchAddress("J_Tau3",  &J_Tau3);
  back1Simulation->SetBranchAddress("J_Tau4",  &J_Tau4);
  back1Simulation->SetBranchAddress("J_Tau5",  &J_Tau5);
  back1Simulation->SetBranchAddress("J_Charge",&J_Charge);
  back1Simulation->SetBranchAddress("J_NCharged",  &J_NCharged);
  back1Simulation->SetBranchAddress("J_NNeutrals", &J_NNeutrals);
  back1Simulation->SetBranchAddress("J_BTag", &J_BTag);
  back1Simulation->SetBranchAddress("J_TauTag", &J_TauTag);

  back2Simulation->SetBranchAddress("PT",     &PT);
  back2Simulation->SetBranchAddress("Eta",    &Eta);
  back2Simulation->SetBranchAddress("Phi",    &Phi);
  back2Simulation->SetBranchAddress("Charge", &Charge);
  back2Simulation->SetBranchAddress("M_MET",  &M_MET);
  back2Simulation->SetBranchAddress("M_Eta",  &M_Eta);
  back2Simulation->SetBranchAddress("M_Phi",  &M_Phi);
  back2Simulation->SetBranchAddress("J_PT",   &J_PT);
  back2Simulation->SetBranchAddress("J_Eta",  &J_Eta);
  back2Simulation->SetBranchAddress("J_Phi",  &J_Phi);
  back2Simulation->SetBranchAddress("J_T",    &J_T);
  back2Simulation->SetBranchAddress("J_Mass", &J_Mass);
  back2Simulation->SetBranchAddress("J_DeltaEta",    &J_DeltaEta);
  back2Simulation->SetBranchAddress("J_DeltaPhi",    &J_DeltaPhi);
  back2Simulation->SetBranchAddress("J_EhadOverEem", &J_EhadOverEem);
  back2Simulation->SetBranchAddress("J_Beta",        &J_Beta);
  back2Simulation->SetBranchAddress("J_BetaStar",    &J_BetaStar);
  back2Simulation->SetBranchAddress("J_MeanSqDeltaR", &J_MeanSqDeltaR);
  back2Simulation->SetBranchAddress("J_PTD",   &J_PTD);
  back2Simulation->SetBranchAddress("J_FracPt",&J_FracPt);
  back2Simulation->SetBranchAddress("J_Tau1",  &J_Tau1);
  back2Simulation->SetBranchAddress("J_Tau2",  &J_Tau2);
  back2Simulation->SetBranchAddress("J_Tau3",  &J_Tau3);
  back2Simulation->SetBranchAddress("J_Tau4",  &J_Tau4);
  back2Simulation->SetBranchAddress("J_Tau5",  &J_Tau5);
  back2Simulation->SetBranchAddress("J_Charge",&J_Charge);
  back2Simulation->SetBranchAddress("J_NCharged",  &J_NCharged);
  back2Simulation->SetBranchAddress("J_NNeutrals", &J_NNeutrals);
  back2Simulation->SetBranchAddress("J_BTag", &J_BTag);
  back2Simulation->SetBranchAddress("J_TauTag", &J_TauTag);

  totalSimulation->Branch("PT",     &PT);
  totalSimulation->Branch("Eta",    &Eta);
  totalSimulation->Branch("Phi",    &Phi);
  totalSimulation->Branch("Charge", &Charge);
  totalSimulation->Branch("M_MET",  &M_MET);
  totalSimulation->Branch("M_Eta",  &M_Eta);
  totalSimulation->Branch("M_Phi",  &M_Phi);
  totalSimulation->Branch("J_PT",   &J_PT);
  totalSimulation->Branch("J_Eta",  &J_Eta);
  totalSimulation->Branch("J_Phi",  &J_Phi);
  totalSimulation->Branch("J_T",    &J_T);
  totalSimulation->Branch("J_Mass", &J_Mass);
  totalSimulation->Branch("J_DeltaEta",    &J_DeltaEta);
  totalSimulation->Branch("J_DeltaPhi",    &J_DeltaPhi);
  totalSimulation->Branch("J_EhadOverEem", &J_EhadOverEem);
  totalSimulation->Branch("J_Beta",        &J_Beta);
  totalSimulation->Branch("J_BetaStar",    &J_BetaStar);
  totalSimulation->Branch("J_MeanSqDeltaR", &J_MeanSqDeltaR);
  totalSimulation->Branch("J_PTD",   &J_PTD);
  totalSimulation->Branch("J_FracPt",&J_FracPt);
  totalSimulation->Branch("J_Tau1",  &J_Tau1);
  totalSimulation->Branch("J_Tau2",  &J_Tau2);
  totalSimulation->Branch("J_Tau3",  &J_Tau3);
  totalSimulation->Branch("J_Tau4",  &J_Tau4);
  totalSimulation->Branch("J_Tau5",  &J_Tau5);
  totalSimulation->Branch("J_Charge",&J_Charge);
  totalSimulation->Branch("J_NCharged",  &J_NCharged);
  totalSimulation->Branch("J_NNeutrals", &J_NNeutrals);
  totalSimulation->Branch("J_BTag", &J_BTag);
  totalSimulation->Branch("J_TauTag", &J_TauTag);
  totalSimulation->Branch("type", &type);

  // Filling the Tree with signal events
  type = 1;
  for (Int_t i = 0; i < signalSimulation->GetEntries(); ++i){
    signalSimulation->GetEntry();
    totalSimulation->Fill();
  }
  // Filling the Tree with background events
  type = 0;
  for (Int_t i = 0; i < back1Simulation->GetEntries(); ++i){
    back1Simulation->GetEntry();
    totalSimulation->Fill();
  }
  for (Int_t i = 0; i < back2Simulation->GetEntries(); ++i){
    back2Simulation->GetEntry();
    totalSimulation->Fill();
  }

  //------------------------------------------------------------------------------------
  // WARNING !!
  // Machine Learning Zone 
  //------------------------------------------------------------------------------------
  // J_T is empty ! beta has zero values betastar meansqrDeltaR JPTD
  std::string inputMuonFeatures = "@PT,@Eta,@Phi,Charge,";
  std::string inputMissFeatures = "@M_MET,@M_Eta,@M_phi,";
  std::string inputJetFeatures  = "@J_PT,@J_Eta,@J_Phi,@J_T,@J_Mass,@J_DeltaEta,
  @J_EhadOverEem,@J_Beta,@J_BetaStar,@J_MeanSqDeltaR,@J_PTD,@J_FracPt,@J_Tau1,@J_Tau2,
  @J_Tau3,@J_Tau4,@J_Tau5,J_Charge,J_NCharged,J_NNeutrals,@J_Btag,@J_TauTag";
  std::string features = inputMuonFeatures+inputMissFeatures+inputJetFeatures;
  std::string architecture = ":31:20:10:5:";
  std::string model = features + architecture + "type";

  //  TMultiLayerPerceptron *mlp = new TMultiLayerPerceptron(model.c_str(),totalSimulation);

  // cout << "Multi Layer Perceptron initialized" << endl;
  // mlp->Train(ntrain, "text,update=10");
}
