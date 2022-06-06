#include <iostream>

double get_tip(double price){
  return price * 5;
}


int main() {
  
  std::cout << get_tip(10);

  }
  