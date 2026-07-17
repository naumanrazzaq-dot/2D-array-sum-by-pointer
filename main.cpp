#include <iostream>
using namespace std;

int sum2DArray(int (*arr)[3], int rows) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            sum += *(*(arr + i) + j);  // Pointer to pointer
        }
    }
    return sum;
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int total = sum2DArray(arr, 2);
    cout << "Sum of all elements: " << total << endl;

    return 0;
}
