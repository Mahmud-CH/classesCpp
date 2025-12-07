#include <iostream>
//for std::fixed and std::setprecision()
#include <iomanip>

class Jobs {
  public:
    std::string name{""};
    std::string surname{""};
    int age{};
    double wage;

  void greeting() {
    std::cout << name << " Says: Hello There\n";
  }
};

class Doctor : public Jobs {
  private:
    std::string jobType { "Doctor" };

  public:

  std::string getJobType() {
    return jobType;
  }
};

class SoftwareManeger : public Jobs {
  private:
    std::string jobType { "Software Maneger" };

  public:

  std::string getJobType() {
    return jobType;
  }

  SoftwareManeger(std::string name, std::string surname, int age, double wage) {
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->wage = wage;
  };
};

// we could have also done this to assign the
// name, surname, age and wage attribute
#ifdef OTHER_OPTION

  class Jobs {
    public:
      std::string name{""};
      std::string surname{""};
      int age{};
      double wage;

    void greeting() {
      std::cout << name << " Says: Hello There\n";
    }

    std::string getJobType() {
      return jobType;
    }

    Jobs(std::string name, std::string surname, int age, int wage) : name{name}, surname{surname}, age{age}, wage{wage} {};

  };

  class SoftwareManeger : public Jobs {
    private:
      std::string jobType { "Software Maneger" };

    public:

    // the reason we can't just use the Jobs constructure is because 
    // SoftwareManeger only inherits the veriables of Jobs
    // not the constructure
    SoftwareManeger(std::string name, std::string surname, int age, double wage) : Jobs(name, surname, age, wage) {};

  };  


  // the difference here is that we would have had
  // to put the constructure on every other class
  // we had
#endif


int main() {

  Doctor doctorMelisa;

  doctorMelisa.name = "Melisa";
  doctorMelisa.surname = "dumbledore";
  doctorMelisa.age = 32;

  // std::cout can only print up to six numbers
  // so you have to use std::fixed and std::setprecision()
  // to force it to print the 1 at the end
  doctorMelisa.wage = 69420.31;

  std::cout << doctorMelisa.name << " " << doctorMelisa.surname << " ,age: " << doctorMelisa.age << '\n';
  std::cout << doctorMelisa.getJobType() << " ,wage ";

  // if only c/c++ new that a number could house more than just six digits.
  std::cout << std::fixed << std::setprecision(2) << doctorMelisa.wage << std::endl;
  doctorMelisa.greeting();

  // I just have to make the names extremly long
  // I can't help myself
  SoftwareManeger softwareManegerBarf("Barf", "Simpson", 28, 666.666);

  std::cout << '\n' << softwareManegerBarf.name << " " << softwareManegerBarf.surname << " ,age: "  << softwareManegerBarf.age << '\n';

  std::cout << softwareManegerBarf.getJobType() << " ,wage: ";

  // once you set the precision once it makes it the defult precision 
  // you have to use a ostringstream
  // I can't be bothered to figure it out right now (It's late I want to go to bed)
  std::cout << std::fixed << std::setprecision(3) << softwareManegerBarf.wage << '\n';

  softwareManegerBarf.greeting();

  

  return 0;

}
