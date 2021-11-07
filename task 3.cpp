#include <iostream>
using namespace std;

//task 3:hello worlds

//for
int main() 
{
	int x;
	cin>>x;
	for (int i = 0; i < x; i++)
	{
        cout << "hello world" << endl;
	}
	return 0;
}

//while
int main()
{
	int x;
	int i{};
	cin >> x;
	while (i < x and i >= 0)
	{
		cout << "hello world" << endl;
		i = i + 1;
	}
	return 0;
}

//do while
int main()
{
	int x;
	int i{};
	cin >> x;
	do {
		cout << "hello world" << endl;
		i = i + 1;
	}while(i < x and i >= 0);
	return 0;
}
