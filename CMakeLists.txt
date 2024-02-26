cmake_minimum_required (VERSION 3.6)
#set(CMAKE_CXX_STANDART 11)
set(CMAKE_CXX_FLAGS "-std=c++11")
project (GunsFolder)
add_library(LibGuns SHARED 
    src/Layer_1_class.cpp 
    src/Layer_2_class.cpp 
    src/Func.cpp
    src/Guns/Ak47.cpp 
    src/Guns/Ak74.cpp 
    src/Guns/Bizon.cpp 
    src/Guns/commando.cpp 
    src/Guns/CSRX.cpp 
    src/Guns/M870.cpp 
    src/Guns/mpx.cpp 
    src/Guns/Muesoc.cpp 
    src/Guns/SASG.cpp 
    src/Guns/Tacops.cpp)
add_executable(MyProj src/main.cpp)
#target_include_directories(CMEx PUBLIC include/)
target_include_directories(LibGuns PUBLIC include/)
target_link_libraries(MyProj LibGuns)