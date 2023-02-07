//
// Created by naeem sutton on 2/7/23.
//

#ifndef CARPROJECT_RENTALAGREEMENT_H
#define CARPROJECT_RENTALAGREEMENT_H

#include "Car.h"
#include "Customer.h"

class RentalAgreement {


private:
    Car *car;
    Customer *customer;
    std::string startDate;
    std::string endDate;
    double fee;

public:
    RentalAgreement();
    RentalAgreement(Car *car, Customer *customer, std::string startDate, std::string endDate);
    std::string GetStartDate();
    std::string GetEndDate();
    Car *GetCar();
    Customer *GetCustomer();
    double GetFee();
};


#endif //CARPROJECT_RENTALAGREEMENT_H
