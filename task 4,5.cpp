#include <iostream>
#include<stdio.h>
using namespace std;

//task 4:person record
int main()
{
	string name;
	int age;
	string gender;
	string address;
	string married;
	float height;
	cout << "your name:"<<endl;
	cin >> name;
	cout << "your age:" << endl;
	cin >> age;
	cout << "gender(f/m):" << endl;
	cin >> gender;
	cout << "your address:" << endl;
	cin >> address;
	cout << "married(y/n):" << endl;
	cin >> married;
	cout << "height(m):" << endl;
	cin >> height;
	cout << "name:" << name << endl << "age:" << age << endl << "gender:" << gender << endl << "address:" << address << endl << "married:" << married << endl << "height:" << height<< endl;
	return 0;
}

//task 5:person record¨C C style
int main()
{
	char name[10];
	int age;
	char gender[10];
	char address[10];
	char married[10];
	float height;
	printf_s( "your name:");
	scanf_s("%s", &name);
	printf_s("your age:");
	scanf_s("%d", &age);
	printf_s("gender(f/m):");
	scanf_s("%s", &gender);
	printf_s("your address:");
	scanf_s("%s", &address);
	printf_s("married(y/n):");
	scanf_s("%s", &married);
	printf_s("height(m):");
	scanf_s("%f", &height);
	printf_s("name:%s\nage:%d\ngender:%s\naddress:%s\nmarried:%s\nheight:%f\n", name, age, gender,address,married,height);
	return 0;
}