// linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Linked.h"


using namespace std;

int main()
{
    int A[] = {1 ,2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);

    Linked l(A, size);

    int B[] = { 6, 7, 8, 9, 10 };
    int size2 = sizeof(B) / sizeof(B[0]);

    Linked l2(B, size2);
    
    Linked l0;
    l0 = l + l2;
 
    cout << l0 << endl;

}

