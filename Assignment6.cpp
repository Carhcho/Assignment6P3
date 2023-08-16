// Assignment6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Cesar Roncancio 12/5/2021

#include <iostream>
using namespace std;

int power(int number, int powerNumber);
string reverser(string phrase);
int sum(int sumNumber);

int main()
{
    int number = 3;
    int powerNumber = 4;
    cout << power(number, powerNumber) << endl;

    string phrase = "hello";
    cout << reverser(phrase) << endl;

    int sumNumber = 6;
    cout << sum(sumNumber) << endl;

}
// the power function takes the base number called number and multiplies recursively the base number to another base number until the powerNumber reaches 0 hence doing 3 * 3 * 3 * 3 and the powerNumber 4 -> 3 -> 2 -> 1 -> 0
int power(int number, int powerNumber)
{
    if (powerNumber != 0)
        return (number * power(number, powerNumber - 1));
    else
        return 0;

}
//the reverser function creates a substring from position 1 to the length of the phrase string plus the position of a character within the string with the at function at position 0 recursively repeating it changing the orientation of the string
string reverser(string phrase)
{
    if (phrase.length() <= 1) {
        return phrase;
    }
    else {
        return reverser(phrase.substr(1, phrase.length())) + phrase.at(0);
    }
}
// the sum function returns the sumNumber (in my example 6) and then sums recursively the sumNumber minus 1 (so 6 + 5 + 4 + 3 + 2 + 1) and when it reaches 1 it returns the total sum.
int sum(int sumNumber)
{
    if (sumNumber <= 1)
        return sumNumber;
    return sumNumber + sum(sumNumber - 1);
}
