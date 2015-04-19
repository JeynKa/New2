#ifndef __HomeList_H
#define __HomeList_H
class HomeList {   //Вспомогательный контейнерный класс, описывающий динамический массив из объектов класса Дом для использования в классе Улица.  
 public:
  HomeList() : capacity(10), size(0), data(new Home[capacity]) {}
  HomeList(const HomeList &other) : capacity(0), size(0), data(0) {
    copyFrom(other);
  }
  virtual ~HomeList() { delete [] data; }
  HomeList &operator=(const HomeList &other) {
    return copyFrom(other);
  }
  HomeList &copyFrom(const HomeList &other) {
    if (this != &other) {
      delete [] data;
      size = other.getSize();
      capacity = other.getCapacity();
      data = new Home[size];
      for (unsigned int i = 0; i < size; ++i) {
        data[i] = other.data[i];
      }
    }
    return *this;
  }
  void insert(unsigned int position, const Home &Home) {
    checkCapacity();
    for (i = data + size; i != data + position; --i) {
      *i = *(i - 1);
    }
    data[position] = Home;
    ++size;
  }
  void remove(unsigned int position) {
    for (i = data + position; i != data + size - 1; ++i) {
      *i = *(i + 1);
    }
    --size;
  }
  Home &operator[](unsigned int position) {
    return data[position];
  }
  const Home &operator[](unsigned int position) const {
    return data[position];
  }
  unsigned int getSize() const { return size; }
  unsigned int getCapacity() const { return capacity; }
 private:
  void checkCapacity() {
    if (size >= capacity - 1) {
      capacity += 10;
      Home *newData = new Home[capacity];
      for (unsigned int i = 0; i < size; ++i) {
        newData[i] = data[i];
      }
      delete [] data;
      data = newData;
    }
  }
  unsigned int capacity;
  unsigned int size;
  Home *data;
  Home *i;
};
#endif
