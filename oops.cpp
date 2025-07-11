#include <iostream>
#include <string>

using namespace std;

// class
// class Teacher
// {
// private:
//           double salary;

// public:
//           // BY DEFAULT CLASSES ARE PRIVATE IF WE DONT CONVEY THE TYPE
//           // properties
//           string name;
//           string dept;
//           string subject;
//           // constructor
//           // same name as class
//           // Always declared public

//           // parameterized constructor
//           Teacher(string name, string dept, string subject)
//           {
//                     //when names are same
//                     //(object value) = (parameter value) -> we use "this" pointer
//                     this->name = name;
//                     this->dept = dept;
//                     this->subject = subject;

//                     // does not have a return type
//                     //  cout << "Hi I am constructor";
//                     // runs automatically when object is created

//                     // dept = "Computer Science";
//                     // we can declare values initially with this
//           };

//           //copy constructor
//           Teacher(Teacher &obj){//use pass by reference here
//                     cout << "I am custom copy constructor" << endl;
//                     this->name = obj.name;
//                     this->dept = obj.dept;
//                     this->subject = obj.subject;
//           }

//           //destructor
//           ~Teacher(){
//                     cout << "Hi I am destructor"<< endl;
//           }

//           // methods/member functions

//           void changeDept(string newDept)
//           {
//                     dept = newDept;
//           }

//           void getInfo()
//           {
//                     cout << "name: " << name << endl;
//                     ;
//                     cout << "subject: " << subject << endl;
//           }
// };

// class Student
// {
// public:
//           string name;
//           string rollNo;
// };

// /*Creating classes and wrapping data in classes is known as encapsulation*/

// class Account
// {
// private:
//           double balance;
//           string password; // data hiding

// public:
//           string accountId;
//           string username;
// };

// int main()
// {
//           Teacher t1("Jas", "Computer science", "C++"); // object declaration -> constructor automatically gets called

//           Teacher t2(t1); //default copy constructor is called
//         //  t1.getInfo();

//         t2.getInfo();

//           return 0;
// }

// INHERITANCE

// class Person
// {
// public:
//           string name;
//           int age;

//           Person(string name, int age)
//           {
//                     this->name = name;
//                     this->age = age;
//           }
//           // Person(){
//           //           cout << "Parent constr" << endl;
//           // }

//           // ~Person(){
//           //           cout << "Parent destr" << endl;
//           // }
// };

// class Student : public Person
// {
// public:
//           int rollNo;

//           Student(string name, int age, int rollNo) : Person(name, age)
//           {
//                     this->rollNo = rollNo;
//                     cout << "Child constructor" << endl;
//           }

//           // ~Student(){
//           //           cout << "Child destr" << endl;
//           // }

//           void getInfo()
//           {
//                     cout << "Name: " << name << endl;
//                     cout << "Age: " << age << endl;
//                     cout << "RollNo: " << rollNo << endl;
//           }
// };

// int main()
// {
//           Student s1("Jas" , 21 , 15);
//           // s1.name = "Jas";
//           // s1.age = 21;
//           // s1.rollNo = 15;

//           s1.getInfo();
//           return 0;
// }


//POLYMORPHISM

class Print{
public:
          void show(int x){
                    cout << x << endl;
          }

          void show(char c){
                    cout << c << endl;
          }
};

int main(){

          Print p1;

          p1.show('a');


          return 0;
}