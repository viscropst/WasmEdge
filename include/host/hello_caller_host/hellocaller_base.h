#pragma once

#include "common/errorcode.h"
#include "runtime/hostfunc.h"

namespace HelloCaller {
namespace Host {
template <typename T>
class CallerHostFunc : public WasmEdge::Runtime::HostFunction<T> {
  CallerHostFunc() : Runtime::HostFunction<T>(0) {}
};
}
}
