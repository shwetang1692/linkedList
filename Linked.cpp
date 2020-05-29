#include "Linked.h"

Linked::Linked(): first(nullptr)
{
}
Linked::Linked(const Linked &l)
{
	(*this) = l;
}
Linked& Linked::operator= (const Linked& l)
{
	Node* tmp = l.first;
	
	if (this->first != nullptr) this->first = nullptr;
	while (tmp)
	{
		this->addAtEnd(tmp->val);
		tmp = tmp->next;
	}
	return (*this);
}
Linked::Linked(int* A, int size)
{
	Node* last;
	try
	{
		first = new Node();
	}
	catch (const std::bad_alloc& e)
	{
		std::cerr << "Error while allocating memory " << e.what() << "\n";
		return;
	}
	first->val = A[0];
	first->next = nullptr;
	last = first;
	
	for (auto i = 1; i < size; i++)
	{
		Node* t;
		try
		{
			t = new Node();
		}
		catch (const std::bad_alloc & e)
		{
			std::cerr << "Error while allocating memory " << e.what() << "\n" ;
			return;
		}
		t->val = A[i];
		t->next = nullptr;
		last->next = t;
		last = t;
	}	
}

void Linked::display()
{
	Node* tmp = first;

	while(tmp)
	{
		std::cout << tmp->val << " ";
		tmp = tmp->next;
	}
}
void Linked::insert(int pos, int val)
{
	if (pos < 0 ) return;

	Node* t = new Node();

	t->val = val;
	t->next = nullptr;

	if (pos == 0)
	{
		t->next = first;
		first = t;
	}
	else
	{
		Node* p = first;
		for (auto i = 0; i < pos - 1; i++)
		{
			p = p->next;			
		}
		t->next = p->next;
		p->next = t;
	}
}
std::ostream& operator<< (std::ostream& out, const Linked& l)
{
	Node* t = l.first;

	while (t)
	{
		out << t->val << " ";
		t = t->next;
	}
	return out;
}
int Linked::length()
{
	Node* p = first;
	int len = 0;
	while (p)
	{
		p = p->next;
		++len;
	}
	return len;
}

void Linked::delete_linked(int pos)
{
	if (pos < 1 || pos > this->length()) return;

	if (pos == 1)
	{
		Node* t = first;
		first = first->next;
		delete t;
	}
	else
	{
		Node* p = first;
		for (auto i = 1; i < pos - 1; i++)
		{
			p = p->next;
		}
		Node* t = p->next;
		p->next = t->next;
		delete t;
	}
}
void Linked::addAtEnd(int val)
{
	if (this->first == nullptr)
	{
		first = new Node();
		this->first->val = val;
		this->first->next = nullptr;
	}
	else
	{	
		Node* tmp = this->first;
		while (tmp->next) tmp = tmp->next;
		Node* p = new Node();
		p->val = val;
		p->next = nullptr;
		
		tmp->next = p;
	}	
}
Linked Linked::operator+(const Linked& l)
{
	Linked res;
	
	Node* p1  = this->first;	
	
	while (p1)
	{
		res.addAtEnd(p1->val);
		p1 = p1->next;
	}
	p1 = l.first;
	while (p1)
	{
		res.addAtEnd(p1->val);
		p1 = p1->next;
	}
	return (res);
}
Linked:: ~Linked()
{
	Node* p = first;

	while (first)
	{
		first = first->next;
		delete p;
		p = first;
	}
}