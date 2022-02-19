#include "host/hello_caller_host/hellocaller_mod.h"
#include "host/hello_caller_host/hellocaller_func.h"

namespace HelloCaller {
  namespace Host {
HelloCallerMod::HelloCallerMod()::ImportObject("hellocaller_host") {
    addHostFunc("c_host_prompt", std::make_unique<HostPrompt>());
  }
}
}
