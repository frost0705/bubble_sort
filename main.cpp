#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
 
 
void main()
{
  srand(time(NULL));
	
	int arRay[100];
	
	for (int i = 0; i < 100; i++)
	{
		arRay[i]=(rand()%100);
		cout << arRay[i] << ' ';
		if (!((i%5)-4))
		{
			cout << "\n";
		}
 
	}

	for (int i = 100; i > 0; i--)
	{
		for (int j = 0; j < (i-1); j++)
		{
			if ( arRay[j] > arRay[j+1])
			{
				arRay[j+1]+=arRay[j];
				arRay[j]=arRay[j+1]-arRay[j];
				arRay[j+1]-=arRay[j];
			}
 
		}
 
	}
	cout << "\n\n\n";
	
		for (int i = 0; i < 100; i++)
	{
		cout << arRay[i] << ' ';
		if (!((i%5)-4))
		{
			cout << "\n";
		}
	}
	getch();
}