#include <time.h>
#include <iostream>
using namespace std;
void feelArray(int *, int);
void printArray(int *, int);
int sumArray(int*, int);
void obrat(int*, int);
void fifth(int *, int);
void masvmas(int *, int *, int);
void masss(int *, int, int*, int *, int *);
int seventh(int *, int *, int , int );
void main()
{
	setlocale(0, "");
	srand(time(0));
	rand();
	cout << "Введите задание которые хотеите выбрать" << endl;
	int x;
	cin >> x;
	if (x == 1)
	{
		int mas[5];
		int n = 5;
		feelArray(mas, n);
		printArray(mas, n);
		sumArray(mas, n);
	}
	else if (x == 2)
	{
		int mas[5];
		int n = 5;
		feelArray(mas, n);
		printArray(mas, n);
		obrat(mas,n);
	}
	else if (x == 4)
	{   

		int mas1[10];
		int mas2[10];
		int n=10;
		feelArray(mas1, n);
		printArray(mas1, n);
		masvmas(mas1,mas2,n);
		cout << endl;
		feelArray(mas2, n);
		printArray(mas2, n);
	}
	else if (x == 5)
	{
		int mas[10];
		int n = 10;
		feelArray(mas, n);
		printArray(mas, n);
	}
	else if (x == 6)
	{
		int mas[10];
		int n = 10, otr=0, pol=0, nul=0;
		feelArray(mas, n);
		printArray(mas, n);
		cout << endl;
		masss(mas,n,&otr,&pol,&nul);
		cout << " Отрицательных " << otr << " Положительных " << pol << " Нулей " << nul << endl;


	}
	else if (x == 7)
	{
		int m, n, a = 0;
		cin >> m >> n;
		int *mas = new int[m];
		int *mas1 = new int[n];
		feelArray(mas, n);
		feelArray(mas1, n);
		
	}
	system("pause");
}
void feelArray(int *mas,int n)
{
	for (int i = 0;i < n;i++)
	{
		*(mas + i) = 1 + rand() % 10;
	}
	
}
void printArray(int *mas,int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << *(mas + i) << " ";
	}
	cout << endl;
}
int sumArray(int* mas, int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum = +*(mas + i);
	}
	return sum;
}
void obrat(int* mas, int n)
{
	for (int i = n-1;i >= 0;i--)
	{
		cout << *(mas + i) << " ";
	}
	cout << endl;
}
void masvmas(int *mas1, int *mas2, int n)
{
	for (int i = 0;i < n;i++)
	{
		*(mas1 + i) = *(mas2 + 1);
	}
}
void fifth(int *mas, int n)
{
	for (int i = 0;i < n-1;i--)
	{
		cout << *(mas + i) << " ";
	}
	cout << endl;
}
void masss(int *mas, int n, int *otr, int *pol, int *nul)
{
	
	for (int i = 0;i < n;i++)
	{
		if (*(mas + 1) < 0)
			*otr+=1;
		else if (*(mas + 1) > 0)
			*pol+=1;
		else if (*(mas + 1)==0)
			*nul+=1;

	}

}
int seventh(int *mas, int *mas1, int m, int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{  
         if (*(mas + i) == *(mas1 + i)); 
		 
		}
		

	}
}