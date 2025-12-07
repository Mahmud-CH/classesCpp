#include <iostream>


// the public, private and protected (more on the protected later)
// things are called access specifiers or access modifiers
class House {


  // the private specifier makes it so that
  // whatever is inside it can only be changed
  // inside of the class that it's in
  private: 
    int rooms { 3 };


  public:

  // this is called a setter
  // this works because we change the rooms inside of the
  // same class even if we call this function outside
  int changeRoomAmount(int rooms) {

    // if the rooms are smaller than one 
    // we defult them to a studio apartment
    if(rooms < 1) {
      rooms = 1;
    }

    return this->rooms = rooms;
  }

  // this is called a getter
  // this makes the rooms accesible to the user so that the
  // user can see how many rooms there are
  int getRoomAmount() {
    return rooms;
  }


};


int main() {

  House a;

  a.changeRoomAmount(1);

  std::cout << a.getRoomAmount() << '\n';

  return 0;
}