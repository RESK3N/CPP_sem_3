#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Room {
public:
    int roomNumber;
    string type;
    bool isOccupied;

    Room(int number, string type) : roomNumber(number), type(type), isOccupied(false) {}
};

class Hotel {
    vector<Room> rooms;

public:
    Hotel() {
        for (int i = 101; i <= 110; i++)
            rooms.emplace_back(i, (i % 2 == 0) ? "Deluxe" : "Standard");
    }

    void showRooms() {
        cout << "\nRoom Details:\n";
        for (const auto &room : rooms) {
            cout << "Room " << room.roomNumber << " (" << room.type << ") - "
                 << (room.isOccupied ? "Occupied" : "Available") << endl;
        }
    }

    void bookRoom(int roomNumber) {
        for (auto &room : rooms) {
            if (room.roomNumber == roomNumber) {
                if (room.isOccupied) {
                    cout << "Room " << roomNumber << " is already occupied.\n";
                } else {
                    room.isOccupied = true;
                    cout << "Room " << roomNumber << " booked successfully!\n";
                }
                return;
            }
        }
        cout << "Invalid room number.\n";
    }

    void vacateRoom(int roomNumber) {
        for (auto &room : rooms) {
            if (room.roomNumber == roomNumber) {
                if (!room.isOccupied) {
                    cout << "Room " << roomNumber << " is already vacant.\n";
                } else {
                    room.isOccupied = false;
                    cout << "Room " << roomNumber << " vacated successfully!\n";
                }
                return;
            }
        }
        cout << "Invalid room number.\n";
    }
};

int main() {
    Hotel hotel;
    int choice, roomNumber;

    while (true) {
        cout << "\nHotel Management System\n1. Show Rooms\n2. Book Room\n3. Vacate Room\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.showRooms();
                break;
            case 2:
                cout << "Enter room number to book: ";
                cin >> roomNumber;
                hotel.bookRoom(roomNumber);
                break;
            case 3:
                cout << "Enter room number to vacate: ";
                cin >> roomNumber;
                hotel.vacateRoom(roomNumber);
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}
