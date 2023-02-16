#include <iostream>
#include <algorithm>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, m;
    int a[100000], b[100000];
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::sort(a, a + n);

    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }

    for (int i = 0; i < m; ++i) {
        int result = binarySearch(a, 0, n - 1, b[i]);
        if (result == -1) {
            std::cout << 0 << "\n";
        }
        else {
            std::cout << 1 << "\n";
        }
    }
    return 0;
}
