#include "global.h"
#include "test_runner.h"

__attribute__((weak))
const bool32 gTestRunnerEnabled = FALSE;

// The Makefile patches gTestRunnerHeadless as part of make test.
// This allows us to open the ROM in an mgba with a UI and see the
// animations and messages play, which helps when debugging a test.
const bool32 gTestRunnerHeadless = FALSE;
const bool32 gTestRunnerSkipIsFail = FALSE;
