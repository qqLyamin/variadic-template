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



inline void MyPrint(void) //выход из рекурсии
{
	std::cout << "\n";
}

template <typename T, typename... Args>
void MyPrint(const T & first, const Args &... args) //попробовать с forwarding
{
	std::cout << first << " ";
	MyPrint(args...);
}

