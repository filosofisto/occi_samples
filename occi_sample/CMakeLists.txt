cmake_minimum_required(VERSION 3.10)
project(occi_sample)

set(CMAKE_CXX_STANDARD 11)

set(ORACLE_INSTANT_CLIENT /home/eduardo/Develop/Oracle/instantclient_11_2_OLD)
include_directories(${ORACLE_INSTANT_CLIENT}/sdk/include)
link_directories(${ORACLE_INSTANT_CLIENT})

add_executable(occi_sample main.cpp)

target_link_libraries(occi_sample occi clntsh)

# comments
# Install libaio => sudo apt-get install libaio1