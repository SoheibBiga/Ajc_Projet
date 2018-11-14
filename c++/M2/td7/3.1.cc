#include "3.1.h"

#define MEM 10

Array::Array(int capacity) : size_(0){
  data_=new double[capacity];
  cap=capacity;
}

Array::~Array(){
  delete[] data_;
}

int Array::size() const{
  return size_;
}   

double& Array::operator[](int i){
  return data_[i];
}

void Array::push_back(double x){
  if(size_<cap){
    data_[size_++]=x;
  }
  else{
    cap+=MEM;
    double* tmp= new double(cap);
    for(int i=0; i<cap;i++){
      tmp[i]=data_[i];
    }
    delete[] data_;
    data_=tmp;
    data_[size_++]=x;
  }
}
void Array::pop_back(){
  if(size_>0) size_--;
}
