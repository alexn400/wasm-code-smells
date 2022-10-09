//===----------------------------------------------------------------------===//
//
// TODO: Write documentation
//
//===----------------------------------------------------------------------===//

#include "clang/StaticAnalyzer/Checkers/BuiltinCheckerRegistration.h"
#include "clang/StaticAnalyzer/Core/BugReporter/BugType.h"
#include "clang/StaticAnalyzer/Core/Checker.h"
#include "clang/StaticAnalyzer/Core/PathSensitive/CallEvent.h"
#include "clang/StaticAnalyzer/Core/PathSensitive/CheckerContext.h"

using namespace clang;
using namespace ento;

class InvalidFreeChecker : public Checker<check::PreCall> {

  std::unique_ptr<BugType> ExampleBugType;

public:
  void checkPreCall(const CallEvent &Call, CheckerContext &C) const;
};

void InvalidFreeChecker::checkPreCall(const CallEvent &Call,
                                      CheckerContext &C) const {}

void ento::registerInvalidFreeChecker(CheckerManager &mgr) {
  mgr.registerChecker<InvalidFreeChecker>();
}

bool ento::shouldRegisterInvalidFreeChecker(const CheckerManager &mgr) {
  return true;
}