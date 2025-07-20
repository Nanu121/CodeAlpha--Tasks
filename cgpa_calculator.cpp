#include <iostream>
using namespace std;

int main() {
    int n;
    float credit, gradePoint, totalPoints = 0, totalCredits = 0;

    cout << "Enter number of subjects: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nSubject " << i << ":\n";
        cout << "Enter credit hours: ";
        cin >> credit;

        cout << "Enter grade point (on 10 scale): ";
        cin >> gradePoint;

        totalPoints += credit * gradePoint;
        totalCredits += credit;
    }

    float cgpa = totalPoints / totalCredits;

    cout << "\nYour CGPA is: " << cgpa << endl;

    return 0;
}