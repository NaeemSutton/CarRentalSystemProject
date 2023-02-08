//
// Created by naeem sutton on 2/7/23.
//

#include "RentalAgreement.h"
#include "Car.h"
#include "Customer.h"
#include <string>


RentalAgreement::RentalAgreement() {
    days = -1;
}

RentalAgreement::RentalAgreement(Car car, Customer customer, int days) {
    this->car = car;
    this->customer = customer;
    this->days = days;
}

Car RentalAgreement::getCar() {
    return car;
}

Customer RentalAgreement::getCustomer() {
    return customer;
}

int RentalAgreement::getDays() {
    return days;
}

double RentalAgreement::getTotalCost() {
    return totalCost;
}

double RentalAgreement::getDailyRate() {
    return dailyRate;
}


double RentalAgreement::getTotal() {
    return total;
}

void RentalAgreement::setCar(Car car) {
    this->car = car;
}

void RentalAgreement::setCustomer(Customer customer) {
    this->customer = customer;
}

void RentalAgreement::setDays(int days) {
    this->days = days;
}


double RentalAgreement::TotalCost() {
    return car.getLeasePrice() * days;
}


void RentalAgreement::setTotal(double total) {
    this->total = total;
}

