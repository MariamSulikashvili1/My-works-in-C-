
#include <iostream>
using namespace std;

//კლასი კონსტრუქტორით

// declare a class
class  Room {
  private:
    double length;

  public:
    //  constructor to initialize variable
    Room() {
      length = 5.5;
      cout << "Creating a Room." << endl;
      cout << "Length = " << length << endl;
    }
};

int main() {
  Room Room;
  return 0;
}

//კლასი ატრიბუტებით

// create a class
class Room {

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}

//კლასი მეთოდით

// Creating a class
class ClassRoom {       // This is the class
  public:             // This is an Access specifier
   void Mymethod() {  // This is the method
   cout<<"Hey, what's up?";
}
};

// creating an object of the class
int main(){
    ClassRoom myobject; // we create an object myobject
    myobject.Mymethod(); // calling the method
    return 0;
}