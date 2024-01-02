// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "polish");
    int random;
    int upRangeOfRandom;
    cout << "Podaj liczbê uczniów obecnych na lekcji";
    cin >> upRangeOfRandom;
    srand(time(NULL));
    random = rand() % upRangeOfRandom + 1;
    cout << random;

}

