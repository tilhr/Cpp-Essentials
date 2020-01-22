#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name;
        int age;

    public:
        // default constructor
        Student();

        // destructor
        ~Student();

        // mutators
        void setName(string);
        void setAge(int);

        // accessors
        string getName() const;
        int getAge() const;
};

#endif
