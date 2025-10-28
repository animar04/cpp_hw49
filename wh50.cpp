#include <iostream>
class Matrix {
    int n;
    int** data;
public:
    Matrix(int size) {
        n = size;
        data = new int*[n];
        for(int i=0;i<n;i++) data[i] = new int[n];}
    ~Matrix() {
        for(int i=0;i<n;i++) delete[] data[i];
        delete[] data;}
    void input() {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                std::cin >> data[i][j];}
    void print() {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) std::cout << data[i][j] << " ";
            std::cout << "\n";}}
    void rotate90() {
        int** temp = new int*[n];
        for(int i=0;i<n;i++) temp[i] = new int[n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                temp[j][n-1-i] = data[i][j];
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) data[i][j] = temp[i][j];
            delete[] temp[i];
        }
        delete[] temp;}
};
int main() {
    int size;
    std::cin >> size;
    Matrix m(size);
    m.input();
    m.print();
    m.rotate90();
    m.print();}

