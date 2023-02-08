//
// Created by naeem sutton on 2/7/23.
//

#ifndef CARPROJECT_RENTALAGREEMENT_H
#define CARPROJECT_RENTALAGREEMENT_H

#include "Car.h"
#include "Customer.h"

class RentalAgreement {


private:
    Car car;
    Customer customer;
    int days;
    double totalCost;
    double dailyRate;
    double total;

public:
    RentalAgreement();
    RentalAgreement(Car car, Customer customer, int days);
    Car getCar();
    Customer getCustomer();
    int getDays();
    double getTotalCost();
    double getDailyRate();
    double getTotal();
    void setCar(Car car);
    void setCustomer(Customer customer);
    void setDays(int days);
    void setDailyRate(double dailyRate);
    void setTotal(double total);
    double TotalCost();

};



#endif //CARPROJECT_RENTALAGREEMENT_H
