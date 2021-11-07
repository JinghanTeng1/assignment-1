#include <iostream>
#include<stdio.h>
using namespace std;

//task 6
int main()
{
	int x;
	int n = 1;
	int r;
	cin >> x;
	cout << "2";
	for (int i = 1; i <x; i++)
	{
		r = 2 * (n + 1) - 1;
		cout << r;
		n = n + 1;
	}
	return 0;
}

//task 7
int main()
{
	int x;
	int i= 0;
	int b = 0;
	cout << "Give a natural number:";
	cin >> x;
	if (x < 0)
	{
		cout << "Error! Input cannot be negative";
		
	}
	else if(x >= 0)
	{
		cout << "results:";
		while (x >= i)
		{
			cout << x;
			x = x - 1;
			b = b + 1;
		}
		x = 0;
		for (i = 1; i < b; i++)
		{
			x = x + 1;
			cout << x;
		}

	}
	return 0;
}

//task 8:numbers
int main()
{
	int n;
	int i;
	int a;
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++) 
	{
        for (a = 1; a <= i; a++)
        {
            printf_s("%d", a);
        }
        printf_s("\n"); 

	}
}


////task 8:alphabets
int main()
{
    int n;
    int c = 'A';
    int a, i;
    scanf_s("%d", &n);
    for (a = 1; a <= n; a++)
    {
        for (i = 0; i <= a - 1; i++)
        {
            printf_s("%c", c);
        }
        printf("\n");
        c = c + 1;
    }
}

//task 9:Reflection
//I learned the use of loops and various data types
//the most diffcult part for me is printf and scanf,I don't know why they always report error