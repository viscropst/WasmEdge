
#include "host/hello_caller_host/hellocaller_func.h"

namespace HelloCaller {
namespace Host {

WasmEdge::Expect<size_t>
HostPrompt::body(
  [[maybe_unused]] WasmEdge::Runtime::Instance::MemoryInstance *MemInst,
                 uint32_t TextPtr, uint32_t TextSize) {
  char *Text = MemInst->getPointer<char *>(TextPtr);
  std::string TextFromClient;
  std::copy_n(Text, TextSize, std::back_inserter(TextFromClient));

  std::cout << "HOST[hello_caller]::I got a text:" << Text << std::endl;
  std::cout << "HOST[hello_caller]::Next Type from Host" << std::endl;

  std::string TextToBack;
  std::string TextIn = "";
  std::cin >> TextIn;
  TextToBack = std::string("back:").append(TextIn);

  //FIXME: return 'TextToBack' to caller,if any solution was found
  return TextToBack.size();
}

}
}
