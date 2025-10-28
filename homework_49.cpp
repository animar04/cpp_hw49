#include <iostream>
#include <string>
class Car {
private:
    std::string brand;
    std::string number;
public:
    Car(std::string b, std::string n) {
        brand = b;   
        number = n;}
    void showInfo() {
        std::cout << "Brand: " << brand << ", Number: " << number << std::endl;}
};
class Parking {
private:
    std::string location;
    Car* car1;
    Car* car2;  
public:
    Parking(std::string loc) {
        location = loc;
        car1 = nullptr;
        car2 = nullptr;}
    void addCar(Car* c) {
        if (car1 == nullptr) car1 = c;
        else if (car2 == nullptr) car2 = c;
        else std::cout << "Parking is full!" << std::endl;}
    void showParkingInfo() {
        std::cout << "Parking location: " << location << std::endl;
        if (car1) car1->showInfo();
        if (car2) car2->showInfo();
        if (!car1 && !car2) std::cout << "No cars" << std::endl;}
};
int main() {
    Car c1("BMW", "55 AA 555");
    Car c2("BYD", "11 BB 111");
    Parking p("Mergelyan Institution");
    p.addCar(&c1);
    p.addCar(&c2);
    p.showParkingInfo();
    return 0;}
