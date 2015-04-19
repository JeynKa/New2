#include "home.h"
#include "HomeList.h"
#include "init.h"
#pragma once
class Street {  //класс улиц используется для создания объектов типа улица, включающая в себя дома. Учитываются свойства: название улицы.
 public:
  char name[30];
  HomeList Homes;
  Street();
  Street(const char *name);
  virtual ~Street();
  char getName();
  void setName(const char *name);
  unsigned int getNumberOfHomes();
  Home getHome(unsigned int position);
  void addHome1(const Home &Home);
  void addHome2(unsigned int position, const Home &Home);
  void operator +(Street &Street);//прототип метода класса в котором мы перегрузим оператор +
  void Street::delHome (unsigned int position);
  unsigned int getNumberOfSouls();
  unsigned int getNumberOfApartments();
  friend ostream &operator<< (std::ostream &stream, Street &street);
};


