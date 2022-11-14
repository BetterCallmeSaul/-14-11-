#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main() {
	//1. Задан массив A, содержащий 12 целых случайных чисел от - 5 до 5. Найти сумму элементов массива.
	/*const int size = 12;
	int m = 0;
	int arr[size];
	srand(time(nullptr));
	for(int i = 0; i < size; i++){
		arr[i] = rand() % 11 - 5;
		cout << arr[i] << ' ';
		m += arr[i];
	}
	cout << m << endl;
	cout << endl;*/
	//2. Задан массив, который содержит 13 случайных целых чисел от - 12 до 12. Найти произведение отрицательных элементов массива.
	/*const int size = 13;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 25 - 12;
		cout << arr[i] << ' ';
	}
	cout << endl;
	long long n = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			n *= arr[i];
		}
	}
	cout << "n" << n << endl;*/
	//3. Задан массив, который содержит 11 случайных целых чисел от 0 до 20. Найти количество элементов массива, которые делятся на 3 или на 5 или на 7.
	/*const int size = 11;
	int arr[size];
	int l = 0;
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';
	}
	cout << endl;
	long long n = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0 || arr[i] % 5 == 0 || arr[i] % 7 == 0)  {
			n += 1;
		}
	}
	cout << "kolvo" << n << endl;*/
}