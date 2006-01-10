#ifndef Modules_EventContentAnalyzer_h
#define Modules_EventContentAnalyzer_h
// -*- C++ -*-
//
// Package:     Modules
// Class  :     EventContentAnalyzer
// 
/**\class EventContentAnalyzer EventContentAnalyzer.h FWCore/Modules/src/EventContentAnalyzer.h

 Description: prints out what data is contained within an Event at that point in the path

 Usage:
    <usage>

*/
//
// Original Author:  Chris Jones
//         Created:  Mon Sep 19 11:49:35 CEST 2005
// $Id: EventContentAnalyzer.h,v 1.2 2006/01/10 17:23:08 chrjones Exp $
//

// system include files
#include <string>
#include <map>
#include <vector>

// user include files
#include "FWCore/Framework/interface/EDAnalyzer.h"

// forward declarations

class EventContentAnalyzer : public edm::EDAnalyzer {
public:
   explicit EventContentAnalyzer(const edm::ParameterSet&);
   ~EventContentAnalyzer();
   
   virtual void analyze(const edm::Event&, const edm::EventSetup&);
   virtual void endJob();

private:
      
   // ----------member data ---------------------------
   std::string indentation_;
   std::string verboseIndentation_;
   std::vector<std::string> moduleLabels_;
   bool        verbose_;  
   int         evno_;
   std::map<std::string, int>  cumulates_;
};



#endif
