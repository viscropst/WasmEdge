wasmedge_add_library(wasmedgeHostModuleHelloCallerHost
	hellocaller_mod.cpp
	hellocaller_func.cpp
)

TARGET_LINK_LIBRARIES(wasmedgeHostModuleHelloCallerHost
	PUBLIC
	wasmedgeCommon
	wasmedgeSystem
)
