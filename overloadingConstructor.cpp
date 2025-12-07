#include <iostream>

class Numbers {

  public:
    int num1{};
    int num2{};

  Numbers() {
    std::cout << "No Numbers\n";
  }

  Numbers(int num1) : num1{num1}{
    std::cout << "1)Number: " << num1 << '\n';
  } 
  
  Numbers(int num1, int num2) : num1{num1}, num2{num2} {
    std::cout << "1)Number: " << num1 << '\n';
    std::cout << "1)Number: " << num2 << '\n';
  }
  
};


int main() {

  // when you want to call a constructor without
  // any parameters you do this
  Numbers a;
  // you don't type a() beacause the compiler will
  // see it as a function

  Numbers b(1);
  Numbers c(2, 3);

  return 0;
}