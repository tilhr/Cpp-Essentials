//============================================================================
// Name        : Lab1.cpp
// Author      : Tyler Rodgers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

/*******************************************************************************
* Function Prototypes
*******************************************************************************/

void getInput(string[], int[], const int);
int modify(int);
void display(const string[], const int[], const int);

/*******************************************************************************
* int main()
*   Starting point of the program.
*
* Output:
*   An integer to signal to the OS the exit code.
*******************************************************************************/

int main() {
    // variables
    const int SIZE = 5;
    string names[SIZE];
    int ages[SIZE];

    // get input from the user
    getInput(names, ages, SIZE);

    // modify the ages for certain students
    // uses a range-based for loop with a reference variable
    for (int& i : ages) {
        i = modify(i);
    }

    // display the modified information back to the user
    display(names, ages, SIZE);

    // terminate
    return 0;
}

/*******************************************************************************
* void getInput(string names[], int ages[], const int SIZE)
*   Use a for loop to prompt the user for the name/age of each student. Store
*   the information in the appropriate array.
*
* Inputs:
*   names - a string array for storing the students' names
*   ages  - an integer array for storing the students' ages
*   SIZE  - a constant integer that represents the size of the two arrays
*******************************************************************************/

void getInput(string names[], int ages[], const int SIZE) {

	for (int count = 0; count < SIZE; count++) {
	    cout << "Enter the name for student #" << count << (count + 1) << ":" << endl;
	    cin >> names[count];

	    cout << "Enter the age for student #" << count << (count + 1) << ":" << endl;
	    cin >> ages[count];
	}

}

/*******************************************************************************
* int modify(int i)
*   Modifies the age for students below 18 or above 50. Students younger than 18
*   should have their age bumped up to 18. Students older than 50 should have
*   their age bumped down to 50. Students that do not meet the criteria do not
*   have their age modified.
*
* Input:
*   i - the actual age of the student
*
* Output:
*   The modified age of the student.
*******************************************************************************/

int modify(int i) {
	if (i < 18)
		i = 18;
	else if (i > 50)
		i = 50;
	else
		i = i+1;
}

/*******************************************************************************
* void display(const string names[], const int ages[], const int SIZE)
*   Use a while loop to display the information about the students stored in the
*   two arrays.
*
* Inputs:
*   names - a string array for storing the students' names
*   ages  - an integer array for storing the students' ages
*   SIZE  - a constant integer that represents the size of the two arrays
*******************************************************************************/

void display(const string names[], const int ages[], const int SIZE) {

	for (int count = 0; count < SIZE; count++) {
			cout << '\t' << "Student #" << count; // Display the input value
			cout << '\t' << "'\t'Name: " << names[count]; // Display the input value
			cout << '\t' << "'\t'Age: " << ages[count]; // Display the input value
		}
}
