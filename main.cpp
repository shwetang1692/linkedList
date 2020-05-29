// linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Linked.h"


using namespace std;


#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

//class linked_list
//{
//private:
//    node* head, * tail;
//public:
//    linked_list()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    ~linked_list()
//    {
//        std::cout << "detructor\n";
//        node* p = head;
//
//            std::cout << "while\n";
//            while (head)
//            {
//                head = head->next;
//                delete p;
//                p = head;
//            }
//        
//    }
//    void add_node(int n)
//    {
//        node* tmp = new node;
//        tmp->data = n;
//        tmp->next = NULL;
//
//        if (head == NULL)
//        {
//            head = tmp;
//            tail = tmp;
//        }
//        else
//        {
//            tail->next = tmp;
//            tail = tail->next;
//        }
//    }
//
//    node* gethead()
//    {
//        return head;
//    }
//
//    static void display(node* head)
//    {
//        if (head == NULL)
//        {
//            cout << "NULL" << endl;
//        }
//        else
//        {
//            cout << head->data << endl;
//            display(head->next);
//        }
//    }
//
//    static void concatenate(node* a, node* b)
//    {
//        if (a != NULL && b != NULL)
//        {
//            if (a->next == NULL)
//                a->next = b;
//            else
//                concatenate(a->next, b);
//        }
//        else
//        {
//            cout << "Either a or b is NULL\n";
//        }
//    }
//};
//
//int main()
//{
//    linked_list a;
//    a.add_node(1);
//    a.add_node(2);
//    linked_list b;
//    b.add_node(3);
//    b.add_node(4);
//    linked_list::concatenate(a.gethead(), b.gethead());
//    linked_list::display(a.gethead());
//    return 0;
//}


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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
