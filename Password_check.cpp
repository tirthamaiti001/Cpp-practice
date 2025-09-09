// Function to check password strength
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string checkPassword(string password, int size) {
    bool hasLower = false, hasUpper = false, hasDigit = false;

    // Checking for lowercase, uppercase, and digits
    for (int i = 0; i < size; i++) {
        if (islower(password[i])) hasLower = true;
        if (isupper(password[i])) hasUpper = true;
        if (isdigit(password[i])) hasDigit = true;
    }

    // Checking if requirements are not met
    if (size < 4 || !hasLower || !hasUpper || !hasDigit) {
        return "Password does not meet the requirements.\nYour password should contains:\nAtleast a upper & lower case letters & a number.";
    }

    // Determining password strength
    if (size <= 6) {
        return "Password is too weak!!";
    } else if (size <= 10) {
        return "Password is weak.";
    } else if (size <= 15) {
        return "Password is strong!";
    } else {
        return "Password is very strong!";
    }
}

int main() {
    string name;
    string password;
    string confirm_password;

    // Taking password input
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << "!\nEnter a password: ";
    cin >> password;
    cout << "Confirm your password: ";
    cin >> confirm_password;

    if(password != confirm_password) {
        cout << "Confirm password is not matching!!" << endl;
    } else {
        // Calculating size of the password
        int size = password.size();

        string result = checkPassword(password, size);
        cout << result << endl;
    }

    return 0;
}