#include <iostream>
using namespace std;

//HW6 문제1

/*int add(int a[], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += a[i];
	}

	return sum;
}

int add(int a[], int len, int b[]) {
	int asum = 0;
	for (int i = 0; i < len; i++) {
		asum += a[i];
	}

	int bsum = 0;
	for (int i = 0; i < len; i++) {
		bsum += b[i];
	}

	int totalsum = asum + bsum;
	return totalsum;
}*/

//디폴트 매개변수 사용해서 add함수 하나만 쓰기
/*
int arr[5] = { 0 };

int add(int a[], int len, int b[] = arr) {
	int asum = 0;
	for (int i = 0; i < len; i++) {
		asum += a[i];
	}

	int bsum = 0;
	for (int i = 0; i < len; i++) {
		bsum += b[i];
	}

	int totalsum = asum + bsum;
	return totalsum;

}
int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); // 배열 a의 정수를 모두 더한 값 리턴
	int d = add(a, 5, b); // 배열 a와 b의 정수를 모두 더한 값 리턴
	cout << c << endl; // 10 출력
	cout << d << endl; // 55 출력
	system("pause");
	return 0;
}*/


//문제2 
