//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//  Author:      Dennis Wright (SLAC)
//  Date:        25 July 2011
//  Description: .cc file for G4ProtonInelasticProcess, mainly for
//               implementation of html output
//

#include "G4ProtonInelasticProcess.hh"
#include <iostream>


G4ProtonInelasticProcess::G4ProtonInelasticProcess(const G4String& name)
 :G4HadronInelasticProcess(name, G4Proton::Proton() )
{}


void G4ProtonInelasticProcess::ProcessDescription(std::ostream& outFile) const
{
  outFile << "G4ProtonInelasticProcess handles the inelastic scattering of\n" 
          << "protons from nuclei by invoking one or more hadronic models and\n"
          << "one or more hadronic cross section sets.\n";
}
