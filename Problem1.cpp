#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//Input data
void input(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        *(arr + i) = rand() % 10 + 1;
    }
}

//Print out the array
void output(int* arr, int n) {
    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

//Count all odd numbers
void odd(int* arr, int n) {
    cout << "Odd numbers in the array: ";
    for(int i = 0; i < n; i++) {
        if(*(arr + i) % 2 != 0) {
            cout << *(arr + i) << " ";
        }
    }
    cout << endl;
}

//Compute sum of the array
void sum(int* arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) { 
        sum += *(arr + i);
    }
    cout << "Sum of the array: " << sum << endl;
}

//Compute average of the array
void average(int* arr, int n) {
    double sum = 0;
    cout << "Average of the array: ";
    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    cout << float(sum / n) << endl;
}

//Find x in the array
void find(int* arr, int n) {
    int x;
    cout << "Find x: ";
    cin >> x;
    for(int i = 0; i < n; i++) {
        if(*(arr + i) == x) {
            cout << "Found at index " << i << endl;
            return;
        }
    }
    cout << "Not found" << endl;
}

//Count elements between a and b
void countelementbetween(int* arr, int n) {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(*(arr + i) > a && *(arr + i) < b) {
            count++;
        }
    }
    cout << "Number of elements between a and b: " << count << endl;
}

//Insert x at position pos
void insert(int* arr, int& n) {
    int x, pos;
    cout << "Enter x and position: ";
    cin >> x >> pos;
    for(int i = n; i > pos; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    *(arr + pos) = x;
    n++;
    cout << "Array after insertion: ";
}

//Delete element at position pos
void remove(int* arr, int& n) {
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    for(int i = pos; i < n - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }
    n--;
    cout << "Array after deletion: ";
}

int main() {
    int arr[100];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    input(arr, n);
    output(arr, n);
    odd(arr, n);
    sum(arr, n);
    average(arr, n);
    find(arr, n);
    countelementbetween(arr, n);
    insert(arr, n); //Insert x at position pos
    output(arr, n);
    remove(arr, n); //Delete element at position pos
    output(arr, n);
    return 0;
}
