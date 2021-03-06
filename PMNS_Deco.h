////////////////////////////////////////////////////////////////////////
/// \class OscProb::PMNS_Deco
///
/// \brief Implementation of oscillations of neutrinos in matter in a
///        three-neutrino framework with decoherence. 
///
/// This class expands the PMNS_Fast class including a effects from
/// decoherence in an increasing entropy and energy conserving model.
///
/// The model currently assumes no energy dependence of the decoherence 
/// parameters and that decoherence occurs in the effective mass basis.
///
/// \sa PMNS_Fast
///
/// \author coelho\@lal.in2p3.fr
////////////////////////////////////////////////////////////////////////

#ifndef PMNS_Deco_H
#define PMNS_Deco_H

#include "PMNS_Fast.h"

namespace OscProb {
  class PMNS_Deco : public PMNS_Fast {

  public:

    PMNS_Deco();          ///< Constructor
    virtual ~PMNS_Deco(); ///< Destructor

    /// Set any given decoherence parameter
    virtual void SetGamma(int j, double val);
    
    /// Set the decoherence angle
    virtual void SetDecoAngle(double th);

    /// Get any given decoherence parameter
    virtual double GetGamma(int i, int j);

    typedef std::vector<complex> row;
    typedef std::vector<row> matrix;

  protected:
  
    // Resetting and propagating
    virtual void ResetToFlavour(int flv); ///< Reset neutrino state to pure flavour flv

    virtual void PropagatePath(OscProb::NuPath p);    ///< Propagate neutrino through a single path

    virtual double P(int flv);    ///< Return the probability of final state in flavour flv

    
    virtual matrix Dot(matrix A, matrix B);
    virtual matrix Mult(matrix A, matrix B);
    virtual matrix CTransp(matrix A);
    
    double fGamma[3]; ///< Stores each decoherence parameter
    
    matrix fRho; ///< The neutrino density matrix state

  };

}
#endif
////////////////////////////////////////////////////////////////////////
