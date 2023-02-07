//
// Created by naeem sutton on 2/7/23.
//

#include "Customer.h"
#include <string>

Customer::Customer() {
    name = "none";
    address = "none";
    phone = "none";
}

Customer::Customer(std::string name, std::string address, std::string phone) {
    this->name = name;
    this->address = address;
    this->phone = phone;
}

void Customer::SetName(std::string name) {
    this->name = name;
}

std::string Customer::GetName() {
    return name;
}

void Customer::SetAddress(std::string address) {
    this->address = address;
}

std::string Customer::GetAddress() {
    return address;
}

void Customer::SetPhone(std::string phone) {
    this->phone = phone;
}

std::string Customer::GetPhone() {
    return phone;
}