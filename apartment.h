#ifndef __Apartment_H
#define __Apartment_H
#include "init.h"
#pragma once
class Apartment {
public:
Apartment();
Apartment(int NumApartment,int CountPeopleApartment, float AreaApartment, float PayApartment);
~Apartment();
int getNumApartment();
int getCountPeopleApartment();
float getAreaApartment();
float getPayApartment();
void setNumApartment(int NumApartment);
void setCountPeopleApartment(int CountPeopleApartment);
void setAreaApartment(float AreaApartment);
void setPayApartment(float PayApartment);
friend ostream &operator<<(ostream &stream, const Apartment &apartment);
int NumApartment;
int CountPeopleApartment;
float AreaApartment;
float PayApartment;
};
#endif

