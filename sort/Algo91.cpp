#include <iostream>

int main() {
    int n,m;
    std::cin >> n;
    std::cin >> m;
    
    int nums[n];

    for (int i=0; i<n; i++) {
        std::cin >> nums[i];
    }

    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (nums[j] < nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }  
        }
    }  
     
    std::cout << nums[m-1];

}