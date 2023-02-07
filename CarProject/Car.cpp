//
// Created by naeem sutton on 2/7/23.
//

#include "Car.h"

Car::Car() {
    std::string model = "none";
    std::string make = "none";
    int year = -1;
}

Car::Car(std::string model, std::string make, int year) {
    this->model = model;
    this->make = make;
    this->year = year;
}

void Car::SetModel(std::string model) {
    this->model = model;
}

std::string Car::GetModel() {
    return model;
}

void Car::SetMake(std::string make) {
    this->make = make;
}

std::string Car::GetMake() {
    return make;
}

void Car::SetYear(int year) {
    this->year = year;
}

int Car::GetYear() {
    return year;
}