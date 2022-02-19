#pragma once
namespace HelloCaller {
  namespace Host {
class HostPrompt : public HelloCaller<HostPrompt> {
public:
  // Send any thing from caller,and get user input and return to caller back
  HostPrompt(HostFuncExampleEnvironment &HostEnv) : HostFuncExample(HostEnv) {}
  Expect<size_t> body(Runtime::Instance::MemoryInstance *MemInst,
                      uint32_t TextPtr, uint32_t TextSize);
};
 }
}
