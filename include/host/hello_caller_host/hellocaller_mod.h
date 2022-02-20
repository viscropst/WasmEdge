#pragma once

#include "runtime/importobj.h"

#include <cstdint>

namespace HelloCaller {
namespace Host {

 class HelloCallerMod : public WasmEdge::Runtime::ImportObject {
public:
   HelloCallerMod();
};

}
} // namespace HelloCaller
