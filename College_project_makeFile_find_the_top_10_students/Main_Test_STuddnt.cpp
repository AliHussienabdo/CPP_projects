#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.hpp" // in vs code you should include the class.h  
#include "Student.cpp" // and class.cpp files
#include <fstream>
using namespace std;

// a comparetor function that returns the biggest GPA
bool comp(student f,student s){
    return f.getGpa() > s.getGpa();
}

int main(){

    ifstream StudFile("ListOfStudnets.txt"); // open the file and read from it using ios::in

    if(!StudFile){
        cout << "file not found" << endl;
        exit(EXIT_FAILURE);
    }

    vector<student> ArrayOfStudents;

    string firstName, lastName, id;
    int age;
    double gpa;

    while(!StudFile.eof() && StudFile >> firstName >> lastName >> age >> id >> gpa){
        student stud (firstName, lastName, age, id, gpa);
        ArrayOfStudents.push_back(stud);
    }
    
    // sort the array according to the gpa using comparetor function
    sort(ArrayOfStudents.begin(), ArrayOfStudents.end(),comp);
    
    cout << "The Top 10 Students that have the Greatest GPA : " << endl;
    cout << "----------------------------------------------------\n";

    for(int i = 0; i < 10; i++){
        cout << i+1 << " " << ArrayOfStudents[i] << endl;
    }

    StudFile.close(); // close the file 
}