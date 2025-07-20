#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;

    cout << "Create a username: ";
    cin >> username;

    cout << "Create a password: ";
    cin >> password;

    string enteredUsername, enteredPassword;

    cout << "\n--- Login ---\n";
    cout << "Enter username: ";
    cin >> enteredUsername;

    cout << "Enter password: ";
    cin >> enteredPassword;

    if (enteredUsername == username && enteredPassword == password) {
        cout << "Login successful!\n";
    } else {
        cout << "Invalid username or password.\n";
    }

    return 0;
}