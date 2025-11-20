#include <iostream>
#include <string>
class Engine {
public:
    std::string type;
    int horsepower;
    Engine(const std::string& t, int hp)
        : type(t), horsepower(hp) {}
    void showInfo() const {
        std::cout << "Engine type: " << type
                  << ", horsepower: " << horsepower << "\n";
    }};
class Car {
protected:
    std::string brand;
    Engine engine; 
public:
    Car(const std::string& b, const Engine& e)
        : brand(b), engine(e) {} //   brand = b; engine = e;
    void info() const {
        std::cout << "Car brand: " << brand << "\n";
        engine.showInfo();//composition 
    }};
class SportsCar : public Car {
public:
    SportsCar(const std::string& b, const Engine& e)
        : Car(b, e) {}
    void info() const {
        std::cout << "SportsCar: " << brand << "\n";
        engine.showInfo();
    }};
class Coupe : public Car {
public:
    Coupe(const std::string& b, const Engine& e)
        : Car(b, e) {}

    void info() const {
        std::cout << "Coupe: " << brand << "\n";
        engine.showInfo();
    }};
class ElectricCar : public Car {
public:
    ElectricCar(const std::string& b, const Engine& e)
        : Car(b, e) {}
    void info() const {
        std::cout << "ElectricCar: " << brand << "\n";
        engine.showInfo();
    }};
int main() {
    Engine e1("V8", 500);
    Engine e2("V6", 350);
    Engine e3("Electric", 200);
    SportsCar sc("Ferrari", e1);
    Coupe cp("BMW", e2);
    ElectricCar ec("Tesla", e3);
    sc.info();
    cp.info();
    ec.info();
    return 0;}
