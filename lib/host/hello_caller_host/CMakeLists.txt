WASMEDGE_ADD_LIBRARY(hello_caller_host
	hellocaller_mod.cpp
	hellocaller_func.cpp
)

TARGET_LINK_LIBRARIES(hello_caller_host
	PUBLIC
	wasmedgeCommon
	wasmedgeSystem
)