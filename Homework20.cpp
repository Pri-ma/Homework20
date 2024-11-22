// Homework20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class Result
{
    SUCCESS,
    FAIL,
    ERROR_WRITE,
    ERROR_READ

};

enum class Another
{
    WORK,
    SUCCESS
};

Result Dowork()
{
    return Result::SUCCESS;
}

enum Alphabet
{
    A,
    B,
    C
};

int main()
{
    Result workResult = Dowork();
    if (workResult == Result::SUCCESS)
    {

    }

    Another anotherRes = Another::WORK;
    //if (workResult == anotherRes)
    {

    }
}

