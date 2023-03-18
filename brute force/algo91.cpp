#include <iostream>

int main() {
   int n;
   std::cin >> n;
 
   bool found = false;
   for (int i=1; i<=n; i++) {
      int x = 0;
      int y = i;
      while (y != 0) {
         x += y % 10;
         y = y / 10;
      }
      if (x+i == n) {
         std::cout << i;
         found = true;
         break;
      }
   }  
   if (!found) {
      std::cout << 0;
   }
}