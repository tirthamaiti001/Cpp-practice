#include <iostream>
#include <string>
using namespace std;

// Function to convert integer to Roman numeral
string convert(int num)
{
    // Roman numeral values and their corresponding symbols
    int values[]    = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";

    // Loop through each Roman numeral
    for (int i = 0; i < 13 && num > 0; i++)
    {
        while (num >= values[i])
        {
            result += symbols[i];
            num -= values[i];
        }
    }

    return result;
}

int main()
{
    cout << "Please enter a number between 1 - 3999!\n";
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Call convert function and display Roman numeral
    cout << "Roman numeral: " << convert(number) << endl;

    return 0;
}
