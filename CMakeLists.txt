cmake_minimum_required(VERSION 3.17)
project(NMEA_parser)

set(CMAKE_CXX_STANDARD 14)

add_executable(NMEA_parser main.cpp check_input.h check_input.cpp RMC.cpp RMC.h GGA.cpp GGA.h VTG.cpp VTG.h GSA.cpp GSA.h Input_Types.h)