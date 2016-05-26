/*
 *  ssa_direct_driver.cpp
 *  
 */

#include <iostream>
#include <string>
#include "StandardDriverTypes.h"
#include "SerialIntervalSimulationDriver.h"
#include "TauLeapingExplicitAdaptive.h"

using namespace STOCHKIT;

int main(int ac, char* av[])
{

  typedef TauLeapingExplicitAdaptive<StandardDriverTypes::populationType,
    StandardDriverTypes::stoichiometryType, 
    StandardDriverTypes::propensitiesType,
    StandardDriverTypes::graphType> solverType;
  setFilename(av[ac - 1]);
  SerialIntervalSimulationDriver<solverType> driver(ac,av);

  solverType solver=driver.createMixedSolver();
  
  //set solver-specific parameters
  solver.setEpsilon(driver.getCommandLine().getEpsilon());
  solver.setThreshold(driver.getCommandLine().getThreshold());
  solver.setSSASteps(driver.getCommandLine().getSSASteps());

  driver.callSimulate(solver);

  driver.writeOutput();

  return 0;
}
