#include "DetectorConstruction.hh"
#include "PhysicsList.hh"
#include "ActionInitialization01.hh"
#include "G4RunManagerFactory.hh"
#include "G4UImanager.hh"

int main(void) {
	runManager -> SetUserInitialization(new DetectorConstruction());
	runManager->SetUserInitialization(new PhysicsList);
	runManager->SetUserInitialization(new ActionInitialization);
	runManager->Initialize();
	G4UImanager* UI = G4UImanager::getUIpointer()
  	UI->ApplyCommand("/run/verbose 1");
  	UI->ApplyCommand("/event/verbose 1");
  	UI->ApplyCommand("/tracking/verbose 1")
	int numberOfEvent = 3;
	runManager -> beamOn(numberOfEvent);
	delete runManager;
	return 0;
}