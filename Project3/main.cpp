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
/*
class Person {
	int id;
	double weight;
	string name;
public:
	//Person();
	//Person(int id, string name);
	Person(int id = 1, string name ="Grace", double weight = 20.5);
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};
*/
/*
Person::Person() {
	this->id = 1;
	this->name = "Grace";
	this->weight = 20.5;
}

Person::Person(int id, string name) {
	this->id = id;
	this->name = name;
	this->weight = 20.5;
}
*/
/*
Person::Person(int id, string name, double weight) {
	this->id = id;
	this->name = name;
	this->weight = weight;
}



int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
	system("pause");
	return 0;
}*/

//문제3

//3-1

/*int big(int a, int b) {
	int bigNum;
	if (a > b) 
		bigNum = a;
	else 
		bigNum = b;

	if (bigNum > 100) 
		return 100;
	else
		return bigNum;
}

int big(int a, int b, int c) {
	int bigNum;
	if (a > b)
		bigNum = a;
	else
		bigNum = b;

	if (bigNum > c)
		return c;
	else
		return bigNum;
}

int main() {
	int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
	int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
	int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
	cout << x << ' ' << y << ' ' << z << endl;
	system("pause");
	return 0;
} */