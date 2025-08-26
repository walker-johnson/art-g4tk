#include "Geant4/G4String.hh"
#include "Geant4/G4Fragment.hh"
#include "Geant4/G4Types.hh"
#include "Geant4/G4ReactionProduct.hh"
#include "Geant4/G4ReactionProductVector.hh"
#include "Geant4/G4ThreeVector.hh"
#include "Geant4/Randomize.hh"
#include "Geant4/G4Gamma.hh"
#include "Geant4/G4Electron.hh"
#include <vector>
#include <CLHEP/Units/SystemOfUnits.h>
#include "G4SystemOfUnits.hh"
#include "G4PhysicalConstants.hh"
#include <fstream>
#include <iostream>
#include <math.h>

#include "artg4tk/lists/G4RDAtomicDeexcitation.hh"
#include "artg4tk/lists/G4RDShellData.hh"
#include "artg4tk/lists/G4RDAtomicDeexcitation.hh"

#include "Geant4/G4PhotonEvaporation.hh"
#include "Geant4/G4IonTable.hh"

using namespace std;

class G4CASCADE
{
  public:
    G4CASCADE();
   ~G4CASCADE();

    bool HasData(G4int Z, G4int A);
    vector<vector<vector<G4double>>> GetLevels(G4int Z, G4int A);
    G4ReactionProductVector* GetGammas(G4Fragment nucleus, G4bool UseRawExcitation, G4bool doUnplaced);
    G4ThreeVector GetRandomDirection();
};
