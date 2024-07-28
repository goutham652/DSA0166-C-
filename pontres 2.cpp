#include <iostream>	
#include <conio.h>
void main()
{
	int a, *ptr1, **ptr2;
	clrscr();
	ptr1=&a;
	ptr2=&ptr1;
	cout << "the address of a : " <<ptr1 << "\n";
	cout << " the address of ptr1: " << ptr2;
	cout << "\n\n";
	cout << "after incrementing the address value:\n\n";
	ptr1+=2;
    cout << "the address of a:" << ptr1 << "\n";
	ptr2+=2;
	cout << "the address of ptr1 : " << ptr2 << "\n";
}

