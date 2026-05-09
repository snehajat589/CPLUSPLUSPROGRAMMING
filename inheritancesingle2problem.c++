#include <iostream>
using namespace std;

// Base Class
class Vehicle {
protected:
    string vehicleNumber;
    string modelName;

public:
    void getVehicleData() {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;

        cin.ignore();

        cout << "Enter Model Name: ";
        getline(cin, modelName);
    }

    void displayVehicleData() {
        cout << "\nVehicle Number: " << vehicleNumber << endl;
        cout << "Model Name: " << modelName << endl;
    }
};

// Derived Class
class Car : public Vehicle {
private:
    string fuelType;
    float mileage;

public:
    void getCarData() {
        cout << "Enter Fuel Type: ";
        cin >> fuelType;

        cout << "Enter Mileage (km/l): ";
        cin >> mileage;
    }

    void displayCarInfo() {
        displayVehicleData();

        cout << "Fuel Type: " << fuelType << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
    }
};

// Main Function
int main() {
    Car c;

    c.getVehicleData();
    c.getCarData();

    cout << "\n----- Car Information -----\n";
    c.displayCarInfo();

    return 0;
}