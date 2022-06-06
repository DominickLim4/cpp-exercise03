#include <iostream>

/* Output
0 0 
1 1
2 4
3 9
4 16
5 25
6 36
7 49
9 64
9 81
*/

int main() {
  
  int i = 0;
  int square = 0;
  
  while (i < 10 && square < 100) {
    std::cout << i << " " << square << "\n";

    i++;
    square = i * i;

  }
  
}