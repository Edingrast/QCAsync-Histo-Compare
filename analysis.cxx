//
// download file containing several output histograms
//


// -----------------------------------------------------------------
// all headers are defined here

// c++ headers
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// root headers
#include "TH1F.h"
#include "TH1.h"
#include "TFile.h"
#include "TLegend.h"
#include "TDirectory.h"
#include "TCanvas.h"
#include "THStack.h"
#include "TCollection.h"
#include "TKey.h"

void compareHisto(string histName);
void compareHistoRuns(string histName);
void compareHistoRunList(string histName);
void compareHistoRunListPass(string histName);
void compareHistoPass(string histName);
void compareHistoRunsPass(string histName);
void analysisRuns(int option);
void analysisTime(int option);
void analysisRunList(int option);
//
//------------------------------------------------------------------
//main program
void analysis(int choice, int option){
    if(choice==1){
        analysisRuns(option);
    }
    if(choice==2){
        analysisTime(option);
    }
    if(choice==3)
    {
        analysisRunList(option);
    }
    return;
}


void analysisTime(int option){
    int pass;
    cout << endl;
    cout << "Analyse data with given pass?" << endl;
    cout << "1. Yes, analyse previously downloaded passes." << endl;
    cout << "2. No, without chosen passes." << endl;
    cout << "Enter option number: ";
    cin >> pass;
    
    if(pass==1){
        TFile *outputfile = new TFile("AnalysisTimePass.root","RECREATE");
        outputfile->Close();
        if(option==1){
            compareHistoPass("mMFTTrackTanl");
        }
        if(option==2){
            compareHistoPass("mMFTTrackROFSize");
        }
        if(option==3){
            compareHistoPass("mMFTTrackNumberOfClusters");
        }
        if(option==4){
            compareHistoPass("mMFTTrackPhi");
        }
        if(option==5){
            compareHistoPass("mMFTTrackEta");
        }
        if(option==6){
            compareHistoPass("mMFTClusterPatternIndex");
        }
        if(option==7){
            compareHistoPass("mMFTClustersROFSize");
        }
        if(option==8){
            compareHistoPass("mMFTClusterSensorIndex");
        }
        if(option==9){
        compareHistoPass("mMFTTrackTanl");
        compareHistoPass("mMFTTrackPhi");
        compareHistoPass("mMFTTrackEta");
        compareHistoPass("mMFTTrackNumberOfClusters");
        compareHistoPass("mMFTTrackROFSize");
        compareHistoPass("mMFTClusterPatternIndex");
        compareHistoPass("mMFTClustersROFSize");
        compareHistoPass("mMFTClusterSensorIndex");
        }
        
    }
    if(pass==2){
    TFile *outputfile = new TFile("AnalysisTime.root","RECREATE");
    outputfile->Close();
    if(option==1){
        compareHisto("mMFTTrackTanl");
    }
    if(option==2){
        compareHisto("mMFTTrackROFSize");
    }
    if(option==3){
        compareHisto("mMFTTrackNumberOfClusters");
    }
    if(option==4){
        compareHisto("mMFTTrackPhi");
    }
    if(option==5){
        compareHisto("mMFTTrackEta");
    }
    if(option==6){
        compareHisto("mMFTClusterPatternIndex");
    }
    if(option==7){
        compareHisto("mMFTClustersROFSize");
    }
    if(option==8){
        compareHisto("mMFTClusterSensorIndex");
    }
    if(option==9){
    compareHisto("mMFTTrackTanl");
    compareHisto("mMFTTrackPhi");
    compareHisto("mMFTTrackEta");
    compareHisto("mMFTTrackNumberOfClusters");
    compareHisto("mMFTTrackROFSize");
    compareHisto("mMFTClusterPatternIndex");
    compareHisto("mMFTClustersROFSize");
    compareHisto("mMFTClusterSensorIndex");
    }
    }
}



void analysisRuns(int option){
    
    int pass;
    cout << endl;
    cout << "Analyse data with given pass?" << endl;
    cout << "1. Yes, analyse previously downloaded passes." << endl;
    cout << "2. No, without chosen passes." << endl;
    cout << "Enter option number: ";
    cin >> pass;
    
    if(pass==1){
    TFile *outputfile = new TFile("AnalysisRunsPass.root","RECREATE");
    outputfile->Close();
    if(option==1){
        compareHistoRunsPass("mMFTTrackTanl");
    }
    if(option==2){
        compareHistoRunsPass("mMFTTrackROFSize");
    }
    if(option==3){
        compareHistoRunsPass("mMFTTrackNumberOfClusters");
    }
    if(option==4){
        compareHistoRunsPass("mMFTTrackPhi");
    }
    if(option==5){
        compareHistoRunsPass("mMFTTrackEta");
    }
    if(option==6){
        compareHistoRunsPass("mMFTClusterPatternIndex");
    }
    if(option==7){
        compareHistoRunsPass("mMFTClustersROFSize");
    }
    if(option==8){
        compareHistoRunsPass("mMFTClusterSensorIndex");
    }
    if(option==9){
    compareHistoRunsPass("mMFTTrackTanl");
    compareHistoRunsPass("mMFTTrackPhi");
    compareHistoRunsPass("mMFTTrackEta");
    compareHistoRunsPass("mMFTTrackNumberOfClusters");
    compareHistoRunsPass("mMFTTrackROFSize");
    compareHistoRunsPass("mMFTClusterPatternIndex");
    compareHistoRunsPass("mMFTClustersROFSize");
    compareHistoRunsPass("mMFTClusterSensorIndex");
    }
    }
    if(pass==2){
        TFile *outputfile = new TFile("AnalysisRuns.root","RECREATE");
        outputfile->Close();
        if(option==1){
            compareHistoRuns("mMFTTrackTanl");
        }
        if(option==2){
            compareHistoRuns("mMFTTrackROFSize");
        }
        if(option==3){
            compareHistoRuns("mMFTTrackNumberOfClusters");
        }
        if(option==4){
            compareHistoRuns("mMFTTrackPhi");
        }
        if(option==5){
            compareHistoRuns("mMFTTrackEta");
        }
        if(option==6){
            compareHistoRuns("mMFTClusterPatternIndex");
        }
        if(option==7){
            compareHistoRuns("mMFTClustersROFSize");
        }
        if(option==8){
            compareHistoRuns("mMFTClusterSensorIndex");
        }
        if(option==9){
        compareHistoRuns("mMFTTrackTanl");
        compareHistoRuns("mMFTTrackPhi");
        compareHistoRuns("mMFTTrackEta");
        compareHistoRuns("mMFTTrackNumberOfClusters");
        compareHistoRuns("mMFTTrackROFSize");
        compareHistoRuns("mMFTClusterPatternIndex");
        compareHistoRuns("mMFTClustersROFSize");
        compareHistoRuns("mMFTClusterSensorIndex");
        }
    }
}

void analysisRunList(int option){
    
    int pass;
    cout << endl;
    cout << "Analyse data with given pass?" << endl;
    cout << "1. Yes, analyse previously downloaded passes." << endl;
    cout << "2. No, without chosen passes." << endl;
    cout << "Enter option number: ";
    cin >> pass;
    
    if(pass==1){
    
    TFile *outputfile = new TFile("AnalysisRunListPass.root","RECREATE");
    outputfile->Close();
    if(option==1){
        compareHistoRunListPass("mMFTTrackTanl");
    }
    if(option==2){
        compareHistoRunListPass("mMFTTrackROFSize");
    }
    if(option==3){
        compareHistoRunListPass("mMFTTrackNumberOfClusters");
    }
    if(option==4){
        compareHistoRunListPass("mMFTTrackPhi");
    }
    if(option==5){
        compareHistoRunListPass("mMFTTrackEta");
    }
    if(option==6){
        compareHistoRunListPass("mMFTClusterPatternIndex");
    }
    if(option==7){
        compareHistoRunListPass("mMFTClustersROFSize");
    }
    if(option==8){
        compareHistoRunListPass("mMFTClusterSensorIndex");
    }
    if(option==9){
    compareHistoRunListPass("mMFTTrackTanl");
    compareHistoRunListPass("mMFTTrackPhi");
    compareHistoRunListPass("mMFTTrackEta");
    compareHistoRunListPass("mMFTTrackNumberOfClusters");
    compareHistoRunListPass("mMFTTrackROFSize");
    compareHistoRunListPass("mMFTClusterPatternIndex");
    compareHistoRunListPass("mMFTClustersROFSize");
    compareHistoRunListPass("mMFTClusterSensorIndex");
    }
    }
    if(pass==2){
        TFile *outputfile = new TFile("AnalysisRunList.root","RECREATE");
        outputfile->Close();
        if(option==1){
            compareHistoRunList("mMFTTrackTanl");
        }
        if(option==2){
            compareHistoRunList("mMFTTrackROFSize");
        }
        if(option==3){
            compareHistoRunList("mMFTTrackNumberOfClusters");
        }
        if(option==4){
            compareHistoRunList("mMFTTrackPhi");
        }
        if(option==5){
            compareHistoRunList("mMFTTrackEta");
        }
        if(option==6){
            compareHistoRunList("mMFTClusterPatternIndex");
        }
        if(option==7){
            compareHistoRunList("mMFTClustersROFSize");
        }
        if(option==8){
            compareHistoRunList("mMFTClusterSensorIndex");
        }
        if(option==9){
        compareHistoRunList("mMFTTrackTanl");
        compareHistoRunList("mMFTTrackPhi");
        compareHistoRunList("mMFTTrackEta");
        compareHistoRunList("mMFTTrackNumberOfClusters");
        compareHistoRunList("mMFTTrackROFSize");
        compareHistoRunList("mMFTClusterPatternIndex");
        compareHistoRunList("mMFTClustersROFSize");
        compareHistoRunList("mMFTClusterSensorIndex");
        }
    }
}

void compareHisto(string histName){
    TFile *outputfile = new TFile("AnalysisTime.root","UPDATE");
    TFile *file_in = TFile::Open("OutputTime.root", "read");
    if(file_in) Printf("Input data file loaded.");
    file_in->cd(histName.c_str());
    THStack *hStack = new THStack("stack", histName.c_str());
    TLegend *legend = new TLegend(0.7,0.6,0.9,0.9);
    TIter next(gDirectory->GetListOfKeys());
    TKey *key;
    double norm;
    int i = 0;
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTTrackPhi" || histName=="mMFTTrackEta" || histName=="mMFTTrackTanl" || histName=="mMFTTrackNumberOfClusters"){
        while ((key=(TKey*)next())) {
            TH1F *histName = (TH1F*)key->ReadObj();
            histName->SetLineColor(i+1);
            norm = 1/histName->GetEntries();
            histName->Scale(norm);
            histName->Sumw2(kFALSE);
            hStack->Add(histName);
            legend->AddEntry(histName,Form("Run %s",histName->GetName()));
            i++;
        }
    }
    else{
       while ((key=(TKey*)next())) {
           TH1F *histName = (TH1F*)key->ReadObj();
           histName->SetLineColor(i+1);
           hStack->Add(histName);
           legend->AddEntry(histName,Form("Run %s",histName->GetName()));
           i++;
       }
    }
    TCanvas *c1 = new TCanvas(histName.c_str(),histName.c_str());
    c1->cd();
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTClusterPatternIndex"){
        gPad->SetLogy();
    }
    else if(histName=="mMFTTrackROFSize" || histName=="mMFTClustersROFSize"){
        gPad->SetLogy();
        gPad->SetLogx();
    }
    hStack->Draw("nostack");
    legend->Draw();
    //axis labels
    if(histName=="mMFTClusterSensorIndex") hStack->GetXaxis()->SetTitle("Chip ID");
    if(histName=="mMFTClustersROFSize" || histName=="mMFTTrackROFSize") hStack->GetXaxis()->SetTitle("ROF Size");
    if(histName=="mMFTClusterPatternIndex") hStack->GetXaxis()->SetTitle("Pattern ID");
    if(histName=="mMFTTrackNumberOfClusters") hStack->GetXaxis()->SetTitle("#clusters");
    if(histName=="mMFTTrackTanl") hStack->GetXaxis()->SetTitle("tan #lambda");
    if(histName=="mMFTTrackPhi") hStack->GetXaxis()->SetTitle("#varphi");
    if(histName=="mMFTTrackEta") hStack->GetXaxis()->SetTitle("#eta");
    hStack->GetYaxis()->SetTitle("#entries");
    
    outputfile->cd();
    c1->Write();
    outputfile->Close();
}

void compareHistoPass(string histName){
    TFile *outputfile = new TFile("AnalysisTimePass.root","UPDATE");
    TFile *file_in = TFile::Open("OutputTimePass.root", "read");
    if(file_in) Printf("Input data file loaded.");
    file_in->cd(histName.c_str());
    THStack *hStack = new THStack("stack", histName.c_str());
    TLegend *legend = new TLegend(0.7,0.6,0.9,0.9);
    TIter next(gDirectory->GetListOfKeys());
    TKey *key;
    double norm;
    int i = 0;
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTTrackPhi" || histName=="mMFTTrackEta" || histName=="mMFTTrackTanl" || histName=="mMFTTrackNumberOfClusters"){
        while ((key=(TKey*)next())) {
            TH1F *histName = (TH1F*)key->ReadObj();
            histName->SetLineColor(i+1);
            norm = 1/histName->GetEntries();
            histName->Scale(norm);
            histName->Sumw2(kFALSE);
            hStack->Add(histName);
            legend->AddEntry(histName,Form("Run %s",histName->GetName()));
            i++;
        }
    }
    else{
       while ((key=(TKey*)next())) {
           TH1F *histName = (TH1F*)key->ReadObj();
           histName->SetLineColor(i+1);
           hStack->Add(histName);
           legend->AddEntry(histName,Form("Run %s",histName->GetName()));
           i++;
       }
    }
    TCanvas *c1 = new TCanvas(histName.c_str(),histName.c_str());
    c1->cd();
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTClusterPatternIndex"){
        gPad->SetLogy();
    }
    else if(histName=="mMFTTrackROFSize" || histName=="mMFTClustersROFSize"){
        gPad->SetLogy();
        gPad->SetLogx();
    }
    
    hStack->Draw("nostack");
    legend->Draw();
    
    if(histName=="mMFTClusterSensorIndex") hStack->GetXaxis()->SetTitle("Chip ID");
    if(histName=="mMFTClustersROFSize" || histName=="mMFTTrackROFSize") hStack->GetXaxis()->SetTitle("ROF Size");
    if(histName=="mMFTClusterPatternIndex") hStack->GetXaxis()->SetTitle("Pattern ID");
    if(histName=="mMFTTrackNumberOfClusters") hStack->GetXaxis()->SetTitle("#clusters");
    if(histName=="mMFTTrackTanl") hStack->GetXaxis()->SetTitle("tan #lambda");
    if(histName=="mMFTTrackPhi") hStack->GetXaxis()->SetTitle("#varphi");
    if(histName=="mMFTTrackEta") hStack->GetXaxis()->SetTitle("#eta");
    hStack->GetYaxis()->SetTitle("#entries");
    outputfile->cd();
    c1->Write();
    outputfile->Close();
}

void compareHistoRuns(string histName){
    TFile *outputfile = new TFile("AnalysisRuns.root","UPDATE");
    TFile *file_in = TFile::Open("DownloadRuns.root", "read");
    if(file_in) Printf("Input data file loaded.");
    file_in->cd(histName.c_str());
    THStack *hStack = new THStack("stack", histName.c_str());
    TLegend *legend = new TLegend(0.7,0.6,0.9,0.9);
    TIter next(gDirectory->GetListOfKeys());
    TKey *key;
    double norm;
    int i = 0;
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTTrackPhi" || histName=="mMFTTrackEta" || histName=="mMFTTrackTanl" || histName=="mMFTTrackNumberOfClusters"){
        while ((key=(TKey*)next())) {
            TH1F *histName = (TH1F*)key->ReadObj();
            histName->SetLineColor(i+1);
            norm = 1/histName->GetEntries();
            histName->Scale(norm);
            histName->Sumw2(kFALSE);
            hStack->Add(histName);
            legend->AddEntry(histName,Form("Run %s",histName->GetName()));
            i++;
        }
    }
    else{
       while ((key=(TKey*)next())) {
           TH1F *histName = (TH1F*)key->ReadObj();
           histName->SetLineColor(i+1);
           hStack->Add(histName);
           legend->AddEntry(histName,Form("Run %s",histName->GetName()));
           i++;
       }
    }
    TCanvas *c1 = new TCanvas(histName.c_str(),histName.c_str());
    c1->cd();
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTClusterPatternIndex"){
        gPad->SetLogy();
    }
    else if(histName=="mMFTTrackROFSize" || histName=="mMFTClustersROFSize"){
        gPad->SetLogy();
        gPad->SetLogx();
    }

    hStack->Draw("nostack");
    legend->Draw();
    if(histName=="mMFTClusterSensorIndex") hStack->GetXaxis()->SetTitle("Chip ID");
    if(histName=="mMFTClustersROFSize" || histName=="mMFTTrackROFSize") hStack->GetXaxis()->SetTitle("ROF Size");
    if(histName=="mMFTClusterPatternIndex") hStack->GetXaxis()->SetTitle("Pattern ID");
    if(histName=="mMFTTrackNumberOfClusters") hStack->GetXaxis()->SetTitle("#clusters");
    if(histName=="mMFTTrackTanl") hStack->GetXaxis()->SetTitle("tan #lambda");
    if(histName=="mMFTTrackPhi") hStack->GetXaxis()->SetTitle("#varphi");
    if(histName=="mMFTTrackEta") hStack->GetXaxis()->SetTitle("#eta");
    hStack->GetYaxis()->SetTitle("#entries");
    outputfile->cd();
    c1->Write();
    outputfile->Close();
}

void compareHistoRunsPass(string histName){
    TFile *outputfile = new TFile("AnalysisRunsPass.root","UPDATE");
    TFile *file_in = TFile::Open("DownloadRunsPass.root", "read");
    if(file_in) Printf("Input data file loaded.");
    file_in->cd(histName.c_str());
    THStack *hStack = new THStack("stack", histName.c_str());
    TLegend *legend = new TLegend(0.7,0.6,0.9,0.9);
    TIter next(gDirectory->GetListOfKeys());
    TKey *key;
    double norm;
    int i = 0;
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTTrackPhi" || histName=="mMFTTrackEta" || histName=="mMFTTrackTanl" || histName=="mMFTTrackNumberOfClusters"){
        while ((key=(TKey*)next())) {
            TH1F *histName = (TH1F*)key->ReadObj();
            histName->SetLineColor(i+1);
            norm = 1/histName->GetEntries();
            histName->Scale(norm);
            histName->Sumw2(kFALSE);
            hStack->Add(histName);
            legend->AddEntry(histName,Form("Run %s",histName->GetName()));
            i++;
        }
    }
    else{
       while ((key=(TKey*)next())) {
           TH1F *histName = (TH1F*)key->ReadObj();
           histName->SetLineColor(i+1);
           hStack->Add(histName);
           legend->AddEntry(histName,Form("Run %s",histName->GetName()));
           i++;
       }
    }
    TCanvas *c1 = new TCanvas(histName.c_str(),histName.c_str());
    c1->cd();
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTClusterPatternIndex"){
        gPad->SetLogy();
    }
    else if(histName=="mMFTTrackROFSize" || histName=="mMFTClustersROFSize"){
        gPad->SetLogy();
        gPad->SetLogx();
    }
    
    hStack->Draw("nostack");
    legend->Draw();
    if(histName=="mMFTClusterSensorIndex") hStack->GetXaxis()->SetTitle("Chip ID");
    if(histName=="mMFTClustersROFSize" || histName=="mMFTTrackROFSize") hStack->GetXaxis()->SetTitle("ROF Size");
    if(histName=="mMFTClusterPatternIndex") hStack->GetXaxis()->SetTitle("Pattern ID");
    if(histName=="mMFTTrackNumberOfClusters") hStack->GetXaxis()->SetTitle("#clusters");
    if(histName=="mMFTTrackTanl") hStack->GetXaxis()->SetTitle("tan #lambda");
    if(histName=="mMFTTrackPhi") hStack->GetXaxis()->SetTitle("#varphi");
    if(histName=="mMFTTrackEta") hStack->GetXaxis()->SetTitle("#eta");
    hStack->GetYaxis()->SetTitle("#entries");
    outputfile->cd();
    c1->Write();
    outputfile->Close();
}

void compareHistoRunList(string histName){
    TFile *outputfile = new TFile("AnalysisRunList.root","UPDATE");
    TFile *file_in = TFile::Open("DownloadRunList.root", "read");
    if(file_in) Printf("Input data file loaded.");
    file_in->cd(histName.c_str());
    THStack *hStack = new THStack("stack", histName.c_str());
    TLegend *legend = new TLegend(0.7,0.6,0.9,0.9);
    TIter next(gDirectory->GetListOfKeys());
    TKey *key;
    double norm;
    int i = 0;
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTTrackPhi" || histName=="mMFTTrackEta" || histName=="mMFTTrackTanl" || histName=="mMFTTrackNumberOfClusters"){
        while ((key=(TKey*)next())) {
            TH1F *histName = (TH1F*)key->ReadObj();
            histName->SetLineColor(i+1);
            norm = 1/histName->GetEntries();
            histName->Scale(norm);
            histName->Sumw2(kFALSE);
            hStack->Add(histName);
            legend->AddEntry(histName,Form("Run %s",histName->GetName()));
            i++;
        }
    }
    else{
       while ((key=(TKey*)next())) {
           TH1F *histName = (TH1F*)key->ReadObj();
           histName->SetLineColor(i+1);
           hStack->Add(histName);
           legend->AddEntry(histName,Form("Run %s",histName->GetName()));
           i++;
       }
    }
    TCanvas *c1 = new TCanvas(histName.c_str(),histName.c_str());
    c1->cd();
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTClusterPatternIndex"){
        gPad->SetLogy();
    }
    else if(histName=="mMFTTrackROFSize" || histName=="mMFTClustersROFSize"){
        gPad->SetLogy();
        gPad->SetLogx();
    }

    hStack->Draw("nostack");
    legend->Draw();
    if(histName=="mMFTClusterSensorIndex") hStack->GetXaxis()->SetTitle("Chip ID");
    if(histName=="mMFTClustersROFSize" || histName=="mMFTTrackROFSize") hStack->GetXaxis()->SetTitle("ROF Size");
    if(histName=="mMFTClusterPatternIndex") hStack->GetXaxis()->SetTitle("Pattern ID");
    if(histName=="mMFTTrackNumberOfClusters") hStack->GetXaxis()->SetTitle("#clusters");
    if(histName=="mMFTTrackTanl") hStack->GetXaxis()->SetTitle("tan #lambda");
    if(histName=="mMFTTrackPhi") hStack->GetXaxis()->SetTitle("#varphi");
    if(histName=="mMFTTrackEta") hStack->GetXaxis()->SetTitle("#eta");
    hStack->GetYaxis()->SetTitle("#entries");
    outputfile->cd();
    c1->Write();
    outputfile->Close();
}

void compareHistoRunListPass(string histName){
    TFile *outputfile = new TFile("AnalysisRunListPass.root","UPDATE");
    TFile *file_in = TFile::Open("DownloadRunListPass.root", "read");
    if(file_in) Printf("Input data file loaded.");
    file_in->cd(histName.c_str());
    THStack *hStack = new THStack("stack", histName.c_str());
    TLegend *legend = new TLegend(0.7,0.6,0.9,0.9);
    TIter next(gDirectory->GetListOfKeys());
    TKey *key;
    double norm;
    int i = 0;
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTTrackPhi" || histName=="mMFTTrackEta" || histName=="mMFTTrackTanl" || histName=="mMFTTrackNumberOfClusters"){
        while ((key=(TKey*)next())) {
            TH1F *histName = (TH1F*)key->ReadObj();
            histName->SetLineColor(i+1);
            norm = 1/histName->GetEntries();
            histName->Scale(norm);
            histName->Sumw2(kFALSE);
            hStack->Add(histName);
            legend->AddEntry(histName,Form("Run %s",histName->GetName()));
            i++;
        }
    }
    else{
       while ((key=(TKey*)next())) {
           TH1F *histName = (TH1F*)key->ReadObj();
           histName->SetLineColor(i+1);
           hStack->Add(histName);
           legend->AddEntry(histName,Form("Run %s",histName->GetName()));
           i++;
       }
    }
    TCanvas *c1 = new TCanvas(histName.c_str(),histName.c_str());
    c1->cd();
    if(histName=="mMFTClusterSensorIndex" || histName=="mMFTClusterPatternIndex"){
        gPad->SetLogy();
    }
    else if(histName=="mMFTTrackROFSize" || histName=="mMFTClustersROFSize"){
        gPad->SetLogy();
        gPad->SetLogx();
    }
   
    hStack->Draw("nostack");
    legend->Draw();
    if(histName=="mMFTClusterSensorIndex") hStack->GetXaxis()->SetTitle("Chip ID");
    if(histName=="mMFTClustersROFSize" || histName=="mMFTTrackROFSize") hStack->GetXaxis()->SetTitle("ROF Size");
    if(histName=="mMFTClusterPatternIndex") hStack->GetXaxis()->SetTitle("Pattern ID");
    if(histName=="mMFTTrackNumberOfClusters") hStack->GetXaxis()->SetTitle("#clusters");
    if(histName=="mMFTTrackTanl") hStack->GetXaxis()->SetTitle("tan #lambda");
    if(histName=="mMFTTrackPhi") hStack->GetXaxis()->SetTitle("#varphi");
    if(histName=="mMFTTrackEta") hStack->GetXaxis()->SetTitle("#eta");
    hStack->GetYaxis()->SetTitle("#entries");
    outputfile->cd();
    c1->Write();
    outputfile->Close();
}
