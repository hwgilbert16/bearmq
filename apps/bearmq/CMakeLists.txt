add_executable(BearMQ src/BearMQ.cpp "include/Broker.h" "src/Broker.cpp" "include/Config.h" "src/Config.cpp" "include/Logger.h")

target_include_directories(BearMQ PRIVATE include)
