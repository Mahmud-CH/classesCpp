#include <iostream>

class Student {

  public: 
    std::string name {""};
    int age {};
    double gpa {};

  // this is called a constructer
  // there are two ways to defining one, this is one of them
  Student(std::string name, int x, double gpa) {

    // here  we only need a pointer if the paramater name
    // is the same as the referanced name
    this->name = name;
    age = x;
    this->gpa = gpa;
  }
};

class Car {

  public:
    std::string brand {""};
    std::string model {""};
    int year {};

  // this is the other way of defining a constructor
  // this is the most common way of defining a constructor
  Car(std::string brand, std::string model, int year) : brand{ brand }, model{ model }, year{ year } {
    std::cout << brand << " " << model << " " << year << '\n';
  };

};


// you can also make them into a function
// but they have to return a student
Student c();

int main() {

  Student a("Mahmud", 20, 3.5);
  Car b("Mercedes", "C class", 2020);

  std::cout << a.name << " " << a.age << " " << a.gpa << '\n';
  

  Student d = c();
  std::cout << d.name << " " << d.age << " " << d.gpa << '\n';
  

  return 0;
}

Student c() {
  std::cout << "You entered a function\n";

  Student a("Alex", 20, 3.5);
  std::cout << "You're exiting a function\n";
  return  a;
}