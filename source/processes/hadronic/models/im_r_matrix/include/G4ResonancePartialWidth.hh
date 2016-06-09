//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//

//
// -------------------------------------------------------------------
//      GEANT4 Class file
//
//
//      File name:     G4ResonancePartialWidth
//
//      Author:        Maria Grazia Pia (MariaGrazia.Pia@genova.infn.it)
// 
//      Creation date: 15 April 1999
//
//      Modifications: 
//      
// -------------------------------------------------------------------

#ifndef G4RESONANCEPARTIALWIDTH_HH
#define G4RESONANCEPARTIALWIDTH_HH

#include "globals.hh"
#include <map>

class G4PhysicsVector;

class G4ResonancePartialWidth 
{
public:

  G4ResonancePartialWidth() {};

  virtual ~G4ResonancePartialWidth() {};

  // Returned pointer is not owned by the client
  virtual G4PhysicsVector* MassDependentWidth(const G4String& name) const = 0;

protected:
  
private:  

  G4ResonancePartialWidth(const G4ResonancePartialWidth& right);
  G4ResonancePartialWidth& operator=(const G4ResonancePartialWidth& right);
};
  
#endif