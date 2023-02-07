//
// Created by naeem sutton on 2/7/23.
//

#ifndef CARPROJECT_CAR_H
#define CARPROJECT_CAR_H

#include <string>



class Car {
private:
    std::string model;
    std::string make;
    int year;

public:
    Car();
    Car(std::string model, std::string make, int year);
    std::string GetModel();
    std::string GetMake();
    int GetYear();
    void SetModel(std::string model);
    void SetMake(std::string make);
    void SetYear(int year);


};


#endif //CARPROJECT_CAR_H
