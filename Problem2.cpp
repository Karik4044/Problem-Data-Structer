#include <iostream>

using namespace std;

#define MAX 50

void input(char arr[MAX], int n) {
	for(int i = 0; i < n; i++) {
		cout << "Array[" << i << "]: ";
		cin >> arr[i];
	}
}

void output(char arr[MAX], int n) {
	cout << "Array: ";
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int findX(char arr[MAX], int n) {
	char x;
	cout << "\nEnter x char: ";
	cin >> x;
	for(int i = 0; i < n; i++) {
		if(arr[i] == x) {
			return i;
		}
	}
	return -1;
}

void insert(char arr[MAX], int& n) {
	char x;
	int p;
	cout << "Enter x Character and p Position: ";
	cin >> x >> p;
	if(p < 0 || p > n) {
		cout << "Invalid position!" << endl;
		return;
	} 
	for(int i = n; i > p; i--) {
		arr[i] = arr[i - 1];
	}
	arr[p] = x;
	n++;
	cout << "\nArray after insert: ";
	output(arr, n);
	
}

void remove(char arr[MAX], int& n) {
	int k;
	cout << "Enter the position to delete: ";
	cin >> k;
	if(k < 0 || k > n) {
		cout << "Invalid position!";
		return;
	} 
	for(int i = k; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
	cout << "Array after delete: ";
	output(arr, n);
	
}

int main() {
	int n;
	char arr[MAX];
	cout << "Enter size of array: ";
	cin >> n;
	input(arr, n);
	output(arr, n);
	int findx = findX(arr, n);
	if(findx != -1) {
		cout << "Character at position: " << findx << endl;
	} else {
		cout << findx << endl;
	}
	insert(arr, n);
	remove(arr, n);
	return 0;
}