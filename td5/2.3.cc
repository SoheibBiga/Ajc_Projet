#include <iostream>

#include "2.3.h"

using namespace std;

const void PrintPixel(const Pixel* const pixel){
  cout << "X=" << pixel->GetX() << "; Y=" << pixel->GetY() << endl;
}

const void ResetPixel(Pixel* const pixel) {
  pixel->SetX(0);
  pixel->SetY(0);
}

// Compléter l'implémentation de PixelArray ci-dessous.

PixelArray::PixelArray(int num,const Pixel* const pixels) : num_(num),pixels_(pixels){
}

const Pixel* PixelArray::GetPixel(const int i) const{
  return &(pixels_[i]);
}
