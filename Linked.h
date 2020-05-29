#pragma once
#include <iostream>

class Node {
public:
    Node* next;
    int val;
};
class Linked {
 public:
    Linked();
    Linked(int* A, int size);
    Linked(const Linked& l);
    void display();
    void insert(int pos, int val);
    int length();
    void delete_linked(int pos);
    friend std::ostream& operator<< ( std::ostream& out, const Linked& l);
    Linked operator+ (const Linked& l);
    //friend Linked operator+ (const Linked& l1, const Linked& l2);
    //friend std::ostream& operator+ (const Linked& l);
    Linked& operator= (const Linked& l);
    void addAtEnd(int val);
    Linked& fun();
    ~Linked();
private:
    Node* first;
};

