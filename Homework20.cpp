// Homework20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Bag
{
	std::string books[];
};

struct Student
{
	int Age = 0;
	int Height = 0;
	std::string Name = 0;
	Bag myBag = nulptr;
	
	void GetInfo()
	{
		std::cout << "student struct";
	}
};

int main()
{
	Student* ptr = new Student(10, 160. "Paul");
	ptr->GetInfo();
}

