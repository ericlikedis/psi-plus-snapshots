project (ICETunnel LANGUAGES CXX)
set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 14)
add_executable (icetunnel main.cpp)
target_link_libraries (icetunnel PUBLIC iris Qt::Core Qt::Network)
target_compile_definitions(icetunnel PUBLIC QCA_STATIC)
