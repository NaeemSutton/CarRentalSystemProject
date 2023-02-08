#include <iostream>
#include "RentalSystem.h"


int main() {

    int days = 0;
    double leasePrice = 0;

    RentalSystem rentalSystem;
    std::cout << "Welcome to the Car Rental System" << std::endl << std::endl;

    char choice = 'y';
    while (choice == 'y') {

        std::cout << "Please enter your name: ";
        std::string name;
        std::getline(std::cin, name);
        std::cout << std::endl;

        std::cout << "Please enter your address: ";
        std::string address;
        std::getline(std::cin, address);
        std::cout << std::endl;

        std::cout << "Please enter your phone number: ";
        std::string phone;
        std::getline(std::cin, phone);
        std::cout << std::endl;

        Customer customer = Customer(name, address, phone);

        std::cout << "Please enter the make of the car you would like to rent: ";
        std::string make;
        std::getline(std::cin, make);
        std::cout << std::endl;

        std::cout << "Please enter the model of the car you would like to rent: ";
        std::string model;
        std::getline(std::cin, model);
        std::cout << std::endl;

        std::cout << "Please enter the year of the car you would like to rent: ";
        int year;
        std::cin >> year;
        std::cout << std::endl;

        std::cout << "Please enter the number of days you would like to rent the car for: ";
        std::cin >> days;
        std::cout << std::endl;


        std:: cout << "Please enter the lease price of the car you would like to rent: ";
        std::cin >> leasePrice;
        std::cout << std::endl;

        Car car(model, make, year, leasePrice);

        rentalSystem.addRentalAgreement(car, customer, days);

        rentalSystem.printRentalAgreements();

        std::cout << std::endl;

        std::cout << "Do you want to create another rental agreement (y/n)? ";
        std::cin >> choice;
        std::cout << std::endl;



        std::cin.ignore();

    }

    rentalSystem.printRentalAgreements();

    return 0;
}












