#ifndef __ApartmentList_H
#define __ApartmentList_H
#include "apartment.h"
class ApartmentList {
 public:
  ApartmentList() : capacity(10), size(0), data(new Apartment[capacity]) {}
  ApartmentList(const ApartmentList &other) : capacity(0), size(0), data(0) {
    copyFrom(other);}

  virtual ~ApartmentList() { delete [] data; }

  ApartmentList &operator=(const ApartmentList &other) {
    return copyFrom(other); }

  ApartmentList &copyFrom(const ApartmentList &other) {
    if (this != &other) {
      delete [] data;
      size = other.getSize();
      capacity = other.getCapacity();
      data = new Apartment[size];
      for (unsigned int i = 0; i < size; ++i) {
        data[i] = other.data[i];
      }
    }
    return *this;
  }
  void insert(unsigned int position, const Apartment &Apartment) {
    checkCapacity();
    for (i = data + size; i != data + position; --i) {
      *i = *(i - 1);
    }
    data[position] = Apartment;
    ++size;
  }
  void remove(unsigned int position) {
    for (i = data + position; i != data + size - 1; ++i) {
      *i = *(i + 1);
    }
    --size;
  }
  Apartment &operator[](unsigned int position) {
    return data[position];
  }
  const Apartment &operator[](unsigned int position) const {
    return data[position];
 }
  unsigned int getSize() const { return size; }
  unsigned int getCapacity() const { return capacity; }
 private:
  void checkCapacity() {
    if (size >= capacity - 1) {
      capacity += 10;
      Apartment *newData = new Apartment[capacity];
      for (unsigned int i = 0; i < size; ++i) {
        newData[i] = data[i];
      }
      delete [] data;
      data = newData;
    }
  }
  unsigned int capacity;
  unsigned int size;
  Apartment *data;
  Apartment *i;
};
#endif
