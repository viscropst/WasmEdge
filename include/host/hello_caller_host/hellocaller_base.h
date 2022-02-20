#pragma once

#include "common/errcode.h"
#include "runtime/hostfunc.h"

namespace HelloCaller {
namespace Host {
template <typename T>
class CallerHostFunc : public WasmEdge::Runtime::HostFunction<T> {
public:
  CallerHostFunc() : WasmEdge::Runtime::HostFunction<T>() {}
};
}
}
