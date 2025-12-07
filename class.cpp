#include <iostream>

class Student {
  public:
    std::string name {""};
    int age {};
    double gpa {};

    //this is called a method
    void help() {
      std::cout << "HELP ME!!\n";
    }
};




int main() {

  Student student1;
  Student student2;

  student1.name = "Mike";
  student2.name = "Maria";


  std::cout << student1.name << '\n';
  std::cout << student2.name << '\n';
  student1.help();


  return 0;
}