//
// Created by naeem sutton on 2/7/23.
//

#include "RentalSystem.h"
#include <string>
#include <iostream>
#include <vector>



RentalSystem::RentalSystem() {
    std::vector<RentalAgreement> rentalAgreements;
}

void RentalSystem::addRentalAgreement(Car car, Customer customer, int days) {
    RentalAgreement rentalAgreement = RentalAgreement(car, customer, days);
    rentalAgreements.push_back(rentalAgreement);
}

void RentalSystem::printRentalAgreements() {
    for (int i = 0; i < rentalAgreements.size(); i++) {
        std::cout << "Car: " << rentalAgreements[i].getCar().GetMake() << " " << rentalAgreements[i].getCar().GetModel() << std::endl;
        std::cout << "Customer: " << rentalAgreements[i].getCustomer().GetName() << std::endl;
        std::cout << "Days: " << rentalAgreements[i].getDays() << std::endl;
        std::cout << "Total Cost: $" << rentalAgreements[i].TotalCost() << std::endl;
        std::cout << std::endl;
    }
}











