//
// Created by naeem sutton on 2/7/23.
//

#include "Car.h"

Car::Car() {
    model = "none";
    make = "none";
    year = -1;
    leasePricePerDay = -1;
}

Car::Car(std::string model, std::string make, int year, double leasePricePerDay) {
    this->model = model;
    this->make = make;
    this->year = year;
    this->leasePricePerDay = leasePricePerDay;
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

double Car::getLeasePrice() const {
    return leasePricePerDay;
}

void Car::setLeasePrice(double leasePricePerDay) {
    this->leasePricePerDay = leasePricePerDay;
}
