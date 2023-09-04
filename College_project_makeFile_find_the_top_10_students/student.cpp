#include <iostream>
#include <string>
#include "Student.hpp"
using namespace std;
 
student::student(){
    first_name = "NULL";
    last_name = "NULL";
    age = 0;
    id = "NULL";
    gpa = 0;
}
student::student(string first_name,string last_name, int age, string id, double gpa){
    this->first_name = first_name;
    this->last_name = last_name;
    this->age = age;
    this->id = id;
    this->gpa = gpa;
}
void student::setFirstName(string first_name){
        this->first_name = first_name;
}
string student::getFirstName() const { return this->first_name; }

void student::setLastName(string last_name){
    this->last_name = last_name;
}
string student::getLastName() const { return this->last_name;}

void student::setAge(int age){
    this->age = age;
}
int student::getAge()const { return this->age;}

void student::setId(string id){
    this->id = id;
}
string student::getId() const { return this->id;}

void student::setGpa(double gpa){
    this->gpa = gpa;
}
double student::getGpa() const { return this->gpa;}

ostream& operator<<(ostream& stream, const student& stud){
    stream << "Studnets'name : " << stud.getFirstName() << " " << stud.getLastName() 
    << ", ID: " << stud.getId() << " , GPA: " << stud.getGpa() << endl;
    return stream;
}