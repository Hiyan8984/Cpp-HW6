#include <iostream>
using namespace std;

//HW6 ����1

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

//����Ʈ �Ű����� ����ؼ� add�Լ� �ϳ��� ����
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
	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ����
	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����
	cout << c << endl; // 10 ���
	cout << d << endl; // 55 ���
	system("pause");
	return 0;
}*/


//����2 
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

//����3

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
	int x = big(3, 5); // 3�� 5�� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5 ����
	int y = big(300, 60); // 300�� 60�� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ����
	int z = big(30, 60, 50); // 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50 ����
	cout << x << ' ' << y << ' ' << z << endl;
	system("pause");
	return 0;
} */


//3-2
/*
int big(int a, int b, int c = 100) {
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
	int x = big(3, 5); // 3�� 5�� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5 ����
	int y = big(300, 60); // 300�� 60�� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ����
	int z = big(30, 60, 50); // 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50 ����
	cout << x << ' ' << y << ' ' << z << endl;
	system("pause");
	return 0;
}*/

//����4

class ArrayUtility2 {
public:
	// s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
	static int* concat(int s1[], int s2[], int size);
	// s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
	static int* remove(int s1[], int s2[], int size, int& retSize);

};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* temp = new int[10];
	int* ptr;
	for (int i = 0; i < size; i++) {
		temp[i] = s1[i];
	}
	for (int i = size; i < 10; i++) {
		temp[i] = s2[i-size];
	}
	ptr = temp;
	return ptr;
	
}

int* remove(int s1[], int s2[], int size, int& retSize) {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (s1[i] == s2[j]) {
				count++;
			}
		}
	}


	return NULL;
}

int main() {
	cout << "������ 5�� �Է��϶�. �迭x�� �����Ѵ�>>";
	int arrx[5];
	for (int i = 0; i < 5; i++) {
		cin >> arrx[i];
	}

	cout << "������ 5�� �Է��϶�. �迭y�� �����Ѵ�>>";
	int arry[5];
	for (int i = 0; i < 5; i++) {
		cin >> arry[i];
	}

	cout << "��ģ ���� �迭�� ����Ѵ�.";
	int* arrxy = ArrayUtility2::concat(arrx, arry, 5);
	for (int i = 0; i < 10; i++) {
		cout << arrxy[i] << endl;
	}

	int len = 0;
	int* arrx_y = ArrayUtility2::remove(arrx, arry, 5, len);



	delete arrxy;



}