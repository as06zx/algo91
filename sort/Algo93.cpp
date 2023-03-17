#include <iostream>

int main() {
int nums[5];
int sum = 0;
int n;

for (int i=0; i<5; i++) {
   std::cin >> n;
   nums[i] = n;
   sum += n;
}

for (int i=0; i<4; i++) {
   for (int j=0; j<4-i; j++) {
    if (nums[j] > nums[j+1]) {
      int tmp = nums[j];
      nums[j] = nums[j+1];
      nums[j+1] = tmp;
    }
   }
}

std::cout << sum/5 << "\n";
std::cout << nums[2];
}