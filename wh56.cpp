//N56
#include <iostream>
#include <string>
class Car {
private:
    std::string model;
    int price;
public:
    Car() {}
    Car(std::string m, int p) {
        model = m;
        price = p;}
    void input() {
        std::cout << "Enter model: ";
        std::cin >> model;
        std::cout << "Enter price: ";
        std::cin >> price;}
    void display() const {
        std::cout << "Model: " << model << ", Price: " << price << "\n";
    }
};
int main() {
    int rows, cols;
    std::cout << "rows: ";
    std::cin >> rows;
    std::cout << "cols: ";
    std::cin >> cols;
    Car** matrix = new Car*[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new Car[cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "\nEnter car at position (" << i << "," << j << "):\n";
            matrix[i][j].input();
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "[" << i << "," << j << "] ";
            matrix[i][j].display();
        }
    }
    for (int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;
    return 0;
}
