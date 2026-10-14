#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int total = 0;
    int highest, lowest;
    double average;

    cout << "Enter marks of five students:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    highest = marks[0];
    lowest = marks[0];

    for (int i = 1; i < 5; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }

    average = total / 5.0;

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Highest Mark: " << highest << endl;
    cout << "Lowest Mark: " << lowest << endl;

    return 0;
}
