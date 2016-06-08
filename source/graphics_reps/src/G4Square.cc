// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4Square.cc,v 1.2 1999/12/15 14:50:36 gunter Exp $
// GEANT4 tag $Name: geant4-02-00 $
//
// 

#include "G4Square.hh"

#include "G4VisAttributes.hh"

G4Square::~G4Square () {}

G4Visible & G4Square::operator = (const G4Visible &right) {
  return G4Visible::operator = (right);
}

G4VVisPrim & G4Square::operator = (const G4VVisPrim &right) {
  return G4VVisPrim::operator = (right);
}

G4VMarker & G4Square::operator = (const G4VMarker &right) {
  return G4VMarker::operator = (right);
}

G4Square& G4Square::operator = (const G4Square& right) {
  if (&right == this) return *this;
  G4VMarker::operator = (right);
  return *this;
}