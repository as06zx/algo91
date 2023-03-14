#include <iostream>
#include <algorithm>

int median(int c[], int length) {
    std::sort(c, c + length);
    if (length%2==0) {
        return (c[length/2] + c[length/2-1]) / 2;
    }
    return c[length/2];
}

int range(int c[], int length) {
    std::sort(c, c + length);
    return c[length-1] - c[0];
}

int main() {
    int c[6]  = {11, 1, 8, 7, 5, 3}; // 1 , 3,  5, 7 , 8, 11 ->  (8+7)/2
    int c_len = 6;
    int median_num = median(c, c_len);
    std::cout << median_num;
    return 0;
}
