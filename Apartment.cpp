#include "Apartment.h"
#include "Init.h"
//методы класса Apartment
  Apartment::Apartment(){};
  Apartment::Apartment(int NumApartment,int CountPeopleApartment, float AreaApartment, float PayApartment){};
  Apartment::~Apartment(){};
  int Apartment::getNumApartment() {return NumApartment;}
  int Apartment::getCountPeopleApartment() {return CountPeopleApartment;}
  float Apartment::getAreaApartment()  {return AreaApartment;}
  float Apartment::getPayApartment()  {return PayApartment;}
  void Apartment::setNumApartment(int NumApartment){this -> NumApartment = NumApartment;}
  void Apartment::setCountPeopleApartment(int CountPeopleApartment) {this -> CountPeopleApartment= CountPeopleApartment; }
  void Apartment::setAreaApartment(float AreaApartment){this -> AreaApartment = AreaApartment;}
  void Apartment::setPayApartment(float PayApartment){this -> PayApartment = PayApartment;}
  //форматирование вывода объектов классов
  ostream &operator<<(std::ostream &stream, Apartment &apartment) {
  return stream << "Apartment{" <<
    "NumApartment=" << apartment.getNumApartment() << "," <<
    "CountPeopleApartment=" << apartment.getCountPeopleApartment() << "," <<
    "AreaApartment=" << apartment.getAreaApartment() << "," <<
    "PayApartment=" << apartment.getPayApartment() << "}";
  };
