cmake_minimum_required(VERSION 3.24)
project(CarProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(CarProject main.cpp Car.cpp Car.h Customer.cpp Customer.h RentalAgreement.cpp RentalAgreement.h RentalSystem.cpp RentalSystem.h)
