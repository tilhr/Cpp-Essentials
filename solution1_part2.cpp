#include "Student.h"

/*******************************************************************************
* Function Prototypes
*******************************************************************************/

void getInput(Student[], const int);
int modify(int);
void display(const Student[], const int);

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
    Student objArray[SIZE];

    // get input from the user
    getInput(objArray, SIZE);

    // modify the ages for certain students
    // uses a range-based for loop with a reference variable
    for (Student& s : objArray) {
        s.setAge(modify(s.getAge()));
    }

    // display the modified information back to the user
    display(objArray, SIZE);

    // terminate
    return 0;
}

/*******************************************************************************
* void getInput(Student objArray[], const int SIZE)
*   Use a for loop to prompt the user for the name/age of each student. Store
*   the information in the appropriate object.
*
* Inputs:
*   objArray - an array of Student objects
*   SIZE     - a constant integer that represents the size of the array
*******************************************************************************/

void getInput(Student objArray[], const int SIZE) {
    // temporary variables
    int t = 0;
    string s = "";

    // for each student
    for (int i = 0; i < SIZE; i++) {
        // prompt and store the name of the current student
        cout << "Enter the name for student #" << i + 1 << ": ";
        getline(cin, s);

        // prompt and store for the age of the current student
        cout << "Enter the age for student #" << i + 1 << ": ";
        cin >> t;

        // need to ignore the newline for the next iteration
        cin.ignore();

        // store the data from the user into the current object in the array
        objArray[i].setName(s);
        objArray[i].setAge(t);
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
    // younger students should bump their age up to 18
    if (i < 18) {
        i = 18;
    }

    // older students should bump their age down to 50
    else if (i > 50) {
        i = 50;
    }

    // return the modified age
    return i;
}

/*******************************************************************************
* void display(const Student objArray[], const int SIZE)
*   Use a while loop to display the information about the students stored in the
*   object array.
*
* Inputs:
*   objArray - an array of Student objects
*   SIZE     - a constant integer that represents the size of the array
*******************************************************************************/

void display(const Student objArray[], const int SIZE) {
    // counter variable
    int i = 0;

    // iterate through each student
    while (i < SIZE) {
        // display the student's information
        cout << "Student #" << i + 1 << endl;
        cout << "\tName: " << objArray[i].getName() << endl;
        cout << "\tAge: " << objArray[i].getAge() << endl << endl;

        // update the counter
        i++;
    }
}
