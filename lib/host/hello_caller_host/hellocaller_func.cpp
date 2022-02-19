
#include "host/hello_caller_host/hellocaller_func.h"

namespace HelloCaller {
namespace Host {

Expect<size_t>
HostPrompt::body([[maybe_unused]] Runtime::Instance::MemoryInstance *MemInst,
                 uint32_t TextPtr, uint32_t TextSize) {
  char *Text = MemInst->getPointer<char *>(TextPtr);
  std::string TextFromClient;
  std::copy_n(Text, TextSize, std::back_inserter(TextFromClient));

  std::cout << "I got a text:" << Text << std::endl;
  std::cout << "Next Type from Host" << std::endl;

  std::string TextToBack;
  char text_in = 'x';
  std::cin >> text_in;
  TextToBack = std::string("back:").append(&text_in);

  //FIXME: return 'TextToBack' to caller,if any solution was found
  return TextToBack.size();
}

}
}
