// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int random;
    int upRangeOfRandom;
    cin >> upRangeOfRandom;
    srand(time(NULL));
    random = rand() % upRangeOfRandom + 1;
    cout << random;

}

