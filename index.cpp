#include <iostream>
#include <math.h>
using namespace std;

void mathAku(int n){
  string angka[10] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};
  int pertama;
  int kedua;
  string outPertama;
  string outKedua;
  pertama = floor(n / 10);
  kedua = n % 10;
  outPertama = angka[pertama];
  outKedua = angka[kedua];
  if(n == 11){
  cout << "Sebelas\n";
  }
  else if(n == 10){
  cout << "Sepuluh\n";
  }
  else if(pertama == 0){
  cout << outKedua << "\n";
  }
  else if(kedua == 0){
  cout << outPertama << " Puluh\n";
  }
  else if(pertama == 1){
  cout << outKedua << " Belas\n";
  }
  else{
  cout << outPertama << " Puluh " << outKedua << "\n";
  }
};

int main() {
for (int i = 1; i < 100; i++) {
  mathAku(i);
}
  return 0;
}
