#ifndef TauTagTools_PFCandidateMergerBase
#define TauTagTools_PFCandidateMergerBase 

#include "DataFormats/ParticleFlowCandidate/interface/PFCandidate.h"
#include "DataFormats/ParticleFlowCandidate/interface/PFCandidateFwd.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

class PFCandidateMergerBase 
{
 public:
  PFCandidateMergerBase(const edm::ParameterSet&);
  PFCandidateMergerBase();

  virtual ~PFCandidateMergerBase()=0;

  virtual std::vector<std::vector<reco::CandidatePtr> > mergeCandidates(const std::vector<reco::CandidatePtr>&) =0;

};

#endif


