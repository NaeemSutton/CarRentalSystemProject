//
// Created by naeem sutton on 2/7/23.
//

#ifndef CARPROJECT_RENTALSYSTEM_H
#define CARPROJECT_RENTALSYSTEM_H

#include <vector>
#include "RentalAgreement.h"



class RentalSystem {

private:
    std::vector<RentalAgreement> rentalAgreements;
public:

    RentalSystem();
    void addRentalAgreement(Car car, Customer customer, int days);
    void printRentalAgreements();



};


#endif //CARPROJECT_RENTALSYSTEM_H
