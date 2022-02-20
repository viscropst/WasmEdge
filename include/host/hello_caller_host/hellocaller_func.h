#pragma once

#include "host/hello_caller_host/hellocaller_base.h"
#include "common/defines.h"
#include "common/types.h"

#include <vector>

namespace HelloCaller {
  namespace Host {
class HostPrompt : public CallerHostFunc<HostPrompt> {
public:
  HostPrompt() : CallerHostFunc() {}
  WasmEdge::Expect<size_t>
  body(WasmEdge::Runtime::Instance::MemoryInstance *MemInst, uint32_t TextPtr,
       uint32_t TextSize);
};
}
// Send any thing from caller,and get user input and return to caller back
  

}
