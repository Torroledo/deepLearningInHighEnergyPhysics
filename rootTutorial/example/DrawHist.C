{

   // open the file and list its contents
   TFile * input = new TFile("histograms.root");
   input->ls();

   // grab the one-d histogram from the file
   TH1F * my1Dhist = (TH1F*) input->Get("GausHist1d");

   // declare a new canvas with a white back ground 
   // and divide it into two drawing surfaces 
   TCanvas * myCanvas = new TCanvas("myCanvas", "Example Canvas", 300, 600 );
   myCanvas->SetFillColor( kWhite );
   myCanvas->Divide(1,2);

   // Change some of the attributes of our histogram 
   my1Dhist->SetTitle("I made this title");
   my1Dhist->SetMarkerColor( kRed );
   my1Dhist->SetMarkerStyle(21);
   my1Dhist->SetMarkerSize(0.3);

   my1Dhist->GetXaxis()->SetTitle("X axis");
   my1Dhist->GetYaxis()->SetTitle("Y axis");
   my1Dhist->GetXaxis()->CenterTitle();
   my1Dhist->GetYaxis()->CenterTitle();

   // Change to the first drawing surface of the canvas 
   myCanvas->cd(1);

   // Draw the histogram with error bars 
   my1Dhist->Draw("e");

   // Save the present canvas to file 
   // N.B. the suffix determines the file type 
   myCanvas->SaveAs("a_plot.gif");


}
