#ifndef __Home_H
#define __Home_H
#include "ApartmentList.h"
#include "apartment.h"
#include "Init.h"

class Home {
  int number;
  int numberOfStories;
  ApartmentList apartments;
 public:
  Home();
  Home(int number,int numberOfStories);
  virtual ~Home();
  int getNumber();
  int getNumberOfStories();
  void setNumber(int number);
  void setNumberOfStories(int numberOfStories);
  unsigned int getNumberOfApartments();
  Apartment getApartment(unsigned int position);
  void addApartment(const Apartment &apartment);
  void addApartment(unsigned int position, const Apartment &apartment);
  unsigned int getNumberOfPeople();
  float getPayOfApartments();
  friend ostream &operator<<(ostream &stream, Home &Home);
};
#endif


