#include "TFile.h"
#include "TTree.h"

void myMacro(){

  Int_t totalSize = 0;
  TH1F fPosX = 0;
  TCut c1 = 'fParticles.fMomentum > 40';

  // Open some file 
  TFile *f = TFile::Open("http://lcg-heppkg.web.cern.ch/lcg-heppkg/ROOT/eventdata.root");
  if (f == 0){
    printf("Error: cannot open the file");
    return;
  }

  TTreeReader myReader("EventTree",f);

  TTreeReaderValue<Int_t> eventSize(myReader, "fEventSize");

  while (myReader.Next()) {
    // Get the data from the current TTree entry by getting
    // the value from the connected reader (eventSize):
    totalSize += *eventSize;
    
  }

  Int_t sizeInMB = totalSize/1024/1024;
  printf("Total size of all events: %d MB\n", sizeInMB);

  new TH1F("hPosX", "Position in X", 20, -5, 5);
 
 
}
