#include "Student.h"

Student::Student() {
    cout << "Student object created!\n";
}

Student::~Student() {
    cout << "Student object destroyed!\n";
}

void Student::setName(string s) {
    name = s;
}

void Student::setAge(int i) {
    age = i;
}

string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}
