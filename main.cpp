#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <string> 
#include <stdlib.h>
#include <crtdbg.h>
using namespace std;

//enumerated list for departments
enum Department {math, science, engineering, english, arts, music, none} department;

class Student{
    
    private:
    int  ID;
    string firstName;
    string lastName;
    float GPA;
    
public:
    //default constructor
    Student(){
        ID = 0;
        firstName = "";
        lastName  = "";
        GPA = 0.0;
    }
    //parametrized student constructor
    Student(int ID, string firstName, string lastName, float GPA){
        this->ID = ID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->GPA = GPA;
    }
    
    //copy constructor
    Student(Student &init){
        this->ID = init.ID;
        this->firstName = "Shaquille";
        this->lastName = "O'neal";
        this->GPA = init.GPA;
    }
    
    //accessors
    int getID() const{
        return ID;
    }
    string getFirstName() const{
        return firstName;
    }
    string getLastName() const{
        return lastName;
    }
    float getGPA() const {
        return GPA;
    }
    
    //mutators
    void setID(int newID){
        ID = newID;
    }
    void setFirstName(string newFirstName){
        firstName = newFirstName;
    }
    void setLastName(string newLastName){
        lastName = newLastName;
    }
    void setGPA(float newGPA){
        GPA = newGPA;
    }
    
    friend ostream& operator << (ostream& ostr, const Student& stud);
    
    //destructor
    ~Student(){
        printf("\n");
        cout << "Destroyed Student(s)" << endl;
    }
};

ostream& operator << (ostream& ostr, const Student& stud){
    ostr << stud.getID() << ", " << stud.getFirstName() << ", " << stud.getLastName() << ", " << stud.getGPA();
    return ostr;
}

class Professor{
    
private:
    
    Department department;
    int ID;
    string firstName;
    string lastName;
    float salary;
    bool tenured;

public:
    
    //default professor constructor
    Professor(){
        department = none;
        ID = 0;
        firstName = "";
        lastName  = "";
        salary = 0.0;
        tenured = 0;
    }
    
    //parametrized professor constructor
    Professor(Department department, int ID, string firstName, string lastName, float salary, bool tenured){
        this->department = department;
        this->ID = ID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
        this->tenured = tenured;
    }
    
    //copy constructor
    Professor(Professor &init){
        this->department = init.department;
        this->ID = init.ID;
        this->firstName = "Al";
        this->lastName = "Gore";
        this->salary = init.salary;
        this->tenured = 0;
    }
    
    //accessors
    int getID() const{
        return ID;
    }
    string getFirstName() const{
        return firstName;
    }
    string getLastName() const{
        return lastName;
    }
    float getSalary() const {
        return salary;
    }
    
    float getTenured() const {
        return tenured;
    }
    
    float getDepartment() const {
        return department;
    }
    
    //mutators
    void setID(int newID){
        ID = newID;
    }
    void setFirstName(string newFirstName){
        firstName = newFirstName;
    }
    void setLastName(string newLastName){
        lastName = newLastName;
    }
    void setSalary(float newSalary){
        salary = newSalary;
    }
    
    void setTenured(float newTenured){
        tenured = newTenured;
    }
    
    void setDepartment(Department newDepartment){
        department = newDepartment;
    }
    
    friend ostream& operator << (ostream& ostr, const Professor& prof);
    
    //destructor
    ~Professor(){
        printf("\n");
        cout << "Destroyed Professor(s)" << endl;
    }
};

ostream& operator << (ostream& ostr, const Professor& prof){
    ostr << prof.getID() << ", " << prof.getFirstName() << ", " << prof.getLastName() << ", " << prof.getSalary() << ", " 
        << prof.getTenured() << ", " << prof.getDepartment();
    return ostr;
}

class Employee{
    
    private:
    int  ID;
    string firstName;
    string lastName;
    float salary;
    
public:

    // default constructor
    Employee(){
        ID = 0;
        firstName = "";
        lastName  = "";
        salary = 0.0;
    }
        
    // parametrized employee constructor
    Employee(int ID, string firstName, string lastName, float salary){
        this->ID = ID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    }
    
    //copy constructor
    Employee(Employee &init){
        this->ID = init.ID;
        this->firstName = "Marie";
        this->lastName = "Curie";
        this->salary = init.salary;
    }
    
    //accessors
    int getID() const{
        return ID;
    }
    string getFirstName() const{
        return firstName;
    }
    string getLastName() const{
        return lastName;
    }
    float getSalary() const {
        return salary;
    }
    
    //mutators
    void setID(int newID){
        ID = newID;
    }
    void setFirstName(string newFirstName){
        firstName = newFirstName;
    }
    void setLastName(string newLastName){
        lastName = newLastName;
    }
    void setSalary(float newSalary){
        salary = newSalary;
    }
    
    friend ostream& operator << (ostream& ostr, const Employee& emp);
    
    //destructor
    ~Employee(){
        printf("\n");
        cout << "Destroyed Employee(s)" << endl;
    }
};

ostream& operator << (ostream& ostr, const Employee& emp){
    ostr << emp.getID() << ", " << emp.getFirstName() << ", " << emp.getLastName() << ", " << emp.getSalary();
    return ostr;
}

int main()
{
    //Student tests
    cout << "Student Tests" << endl;
    Student s0;
    
    cout << s0 << endl;
    
	Student s1 {232, "Micheal", "Jordan", 3.5};
    Student s2 {242, "Jason", "Kidd", 2.5};
    
    cout << s1 << endl;
    cout << s2 << endl;
    
    s1.setGPA(2.7);
    cout << s1 << endl;
    
    s2. setLastName("Williams");
    cout << s2 << endl;
    
    s1.setID(233);
    cout << s1 << endl;
    
    s2.setFirstName("Deron");
    cout << s2 << endl;
    
    Student s3copy = s2;
    cout << s3copy << endl;
    
    //Professor tests
    printf("\n");
    cout << "Professor Tests" << endl;
    Professor p0;
    
    cout << p0 << endl;
    
    Professor p1 {engineering, 111, "Rahm", "Emanuel", 100000, 0};
    Professor p2 {english, 222, "Janet", "Yellen", 150000, 1};
    
    cout << p1 << endl;
    cout << p2 << endl;
    
    p1.setDepartment(math);
    p1.setFirstName("Eric");
    p1.setLastName("Holder");
    p1.setID(821);
    p1.setSalary(200000);
    p1.setTenured(1);
    
    cout << p1 << endl;
    
    //copy
    Professor p3copy = p1;
    cout << p3copy << endl;
    
    //Employee Tests
    
    printf("\n");
    cout << "Employee Tests" << endl;
    
    Employee e0;
    
    cout << e0 << endl;
    
    Employee e1  {777, "Richard", "Feynman", 40000};
    Employee e2 {457, "Alan", "Turing", 95000};
    
    cout << e1 << endl;
    cout << e2 << endl;
    
    e2.setID(523);
    e2.setFirstName("Niels");
    e2.setLastName("Bohr");
    e2.setSalary(385888);
    
    cout << e2 << endl;
    
    //copy
    Employee e3copy = e2;
    cout << e3copy << endl;
    
    _CrtDumpMemoryLeaks();
}


