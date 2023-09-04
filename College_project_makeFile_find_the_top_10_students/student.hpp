
#ifndef STUDENTCLASS_H
#define STUDENTCLASS_H

#include <string>
#include <iostream>
using namespace std;

class student{
    friend std::ostream& operator<<(std::ostream& stream, const student& stud);
    private:
       string first_name, last_name;
       int age;
       string id;
       double gpa;
    public:
        student();
        student(string ,string , int , string , double);

        void setFirstName(string);
        void setLastName(string);
        void setAge(int);
        void setId(string);
        void setGpa(double);

        string getFirstName() const;
        string getLastName() const;        
        int getAge() const;
        string getId() const;
        double getGpa() const;

        ~student(){};
};



#endif