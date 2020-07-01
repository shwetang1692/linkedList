// linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Linked.h"
#include <memory>
#include <vector>
using namespace std;
 
int main()
{
    int A[] = {1 ,2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    Linked l1(A, size);

    int B[] = { 6, 7, 8, 9, 10 };
    int size2 = sizeof(B) / sizeof(B[0]);
    Linked l2(B, size2);
    
    Linked l0;
    l0 = l1 + l2;
    cout <<"l0 = l1 + l2: "<< l0 << "\n";

    l1 += l2;
    cout << "l1 += l2: " << l1 <<"\n";

    Linked lm = std::move(l1);
    cout << "lm: " <<  lm;   
}

