//
// Created by naeem sutton on 2/7/23.
//

#ifndef CARPROJECT_CUSTOMER_H
#define CARPROJECT_CUSTOMER_H

#include <string>

class Customer {

private:
    std::string name;
    std::string address;
    std::string phone;

public:
    Customer();
    Customer(std::string name, std::string address, std::string phone);
    std::string GetName();
    std::string GetAddress();
    std::string GetPhone();
    void SetName(std::string name);
    void SetAddress(std::string address);
    void SetPhone(std::string phone);
    
};



#endif //CARPROJECT_CUSTOMER_H
