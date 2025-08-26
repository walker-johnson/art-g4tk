cet_make_library(SOURCE
  ArCaptureGammas.cc
  ArParticleHPCapture.cc
  ArParticleHPCaptureFS.cc
  G4EmStandardPhysics_pseudoLaser.cc
  MyG4BiasedBertiniNeutronBuilder.cc
  MyG4DecayPhysics.cc
  MyG4HadronPhysicsQGSP_BERT_ArHP.cc
  MyG4HadronPhysicsQGSP_BERT_HP_NeutronXSBias.cc
  MyG4MuIonisationNoDelta.cc
  MyG4NeutronPHPBuilder.cc
  MyQGSP_BERT_ArHP.cc
  MyQGSP_BERT_HP_NeutronXSBias.cc
  MyQGSP_BERT_LASER.ccG4CASCADE.cc
  G4CASCADEParticleHPCapture.cc
  G4CASCADEParticleHPCaptureFS.cc
  G4CASCADEParticleHPManager.cc
  G4CASCADEParticleHPMessenger.cc
  G4RDAtomicDeexcitation.cc
  G4RDAtomicShell.cc
  G4RDAtomicTransitionManager.cc
  G4RDAugerData.cc
  G4RDAugerTransition.cc
  G4RDFluoData.cc
  G4RDFluoTransition.cc
  G4RDShellData.cc
  LIBRARIES PUBLIC
  Geant4::G4physicslists
  artg4tk_particles
)

install_headers()
install_source()

