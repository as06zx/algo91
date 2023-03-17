#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    int nums[n];

    for (int i=0; i<n; i++) {
        std::cin >> nums[i];
    }

    std::sort(nums, nums+n);

    for (int i=0; i<n; i++) {
        std::cout << nums[i] << "\n";
    }
}