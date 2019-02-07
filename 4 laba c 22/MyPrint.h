#pragma once
#include <iostream>
#include <string>

class A
{
	int a;
public:
	A(int a) : a(a)
	{
	};

	friend std::ostream& operator<<(std::ostream& mycout, const A & myobj);
};



inline void MyPrint(void) //����� �� ��������
{
	std::cout << "\n";
}

template <typename T, typename... Args>
void MyPrint(const T & first, const Args &... args) //����������� � forwarding
{
	std::cout << first << " ";
	MyPrint(args...);
}

