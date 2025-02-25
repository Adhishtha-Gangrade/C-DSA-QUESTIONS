// common elements in 3 sorted array 
#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    int arr[] = {1, 5, 10, 20, 40, 80};
    int brr[] = {6, 7, 20, 80, 100};
    int crr[] = {3, 4, 15, 20, 30, 70, 80, 120};
    n = sizeof(arr) / sizeof(int);
    m = sizeof(brr) / sizeof(int);
    p = sizeof(crr) / sizeof(int);

    int i = 0, j = 0, k = 0;

    while (i < n && j < m && k < p) {
        if (arr[i] == brr[j] && brr[j] == crr[k]) {
            cout << arr[i] << endl;
            i++;
            j++;
            k++;
        } else if (arr[i] < brr[j]) {
            i++;
        } else if (brr[j] < crr[k]) {
            j++;
        } else {
            k++;
        }
    }

    return 0;
}
