#include <iostream>
#include <string>

using namespace std;

class Room {
public:
    string roomName;
    double length;
    double width;

    Room() {
        cout << "=====================================" << endl;
        cout << "       System: Object Initialized    " << endl;
        cout << "=====================================" << endl;
        roomName = "Unknown";
        length = 0.0;
        width = 0.0;
    }
    void getInput() {
        cout << "Enter the name of the room: ";
        cin >> roomName;
        cout << "Enter the length of the room: ";
        cin >> length;
        cout << "Enter the width of the room: ";
        cin >> width;
    }


    double calculateArea() {
        return length * width;
    }


    void displayDetails() {
        cout << "\n--- Room Information ---" << endl;
        cout << "Room Label: " << roomName << endl;
        cout << "Dimensions: " << length << " x " << width << endl;
        cout << "Total Area: " << calculateArea() << " sq. units" << endl;
    }

    ~Room() {
        cout << "=====================================" << endl;
        cout << "       System: Object Destroyed      " << endl;
        cout << "=====================================" << endl;
    }
};

int main() {

    Room myRoom;

    myRoom.getInput();
    myRoom.displayDetails();

    return 0;
}