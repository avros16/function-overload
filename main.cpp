#include <iostream>
using namespace std; 



int add (int a, int b) {

  cout << "first";
  return 0;
}

double add(double a, double b){
  cout << "second";
  return 0;
}

int main() {
int a{0};
int b{0}; 

  add(a,b);
  add(3.2,2.1);
  
}