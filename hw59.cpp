#include <iostream>
#include <string>
class Animal {
protected:
    std::string name;
    std::string color;
    std::string size;
    std::string habitat;  
    std::string food;     
    int legs;
    std::string sound;
public:
    Animal(std::string n, std::string c, std::string s,
           std::string h, std::string f, int l, std::string snd)
        : name(n), color(c), size(s), habitat(h), food(f), legs(l), sound(snd) {}
void showInfo() const {
    std::cout << "Name: " << name << std::endl
              << "Color: " << color << std::endl
              << "Size: " << size << std::endl
              << "Habitat: " << habitat << std::endl
              << "Food: " << food << std::endl
              << "Legs: " << legs << std::endl
              << "Sound: " << sound << std::endl << std::endl;
}
};
class Dolphin : public Animal {
    double swimSpeed;
    bool isSmart;
    std::string species;
    double weight;
    double length;
    bool trained;
public:
    Dolphin(std::string n, std::string c, std::string s,
            std::string h, std::string f, int l, std::string snd,
            double spd, bool sm, std::string sp, double w, double len, bool tr)
        : Animal(n, c, s, h, f, l, snd),
          swimSpeed(spd), isSmart(sm), species(sp), weight(w), length(len), trained(tr) {}
};
class Horse : public Animal {
    double speed;
    std::string breed;
    double height;
    double weight;
    bool isDomestic;
    std::string colorPattern;
public:
    Horse(std::string n, std::string c, std::string s, std::string h, std::string f,
          int l, std::string snd, double spd, std::string br, double ht,
          double w, bool dom, std::string pattern)
        : Animal(n, c, s, h, f, l, snd),
          speed(spd), breed(br), height(ht), weight(w), isDomestic(dom), colorPattern(pattern) {}
};
class Rabbit : public Animal {
    double jumpHeight;
    double weight;
    bool isPet;
    std::string breed;
    std::string furType;
    int age;
public:
    Rabbit(std::string n, std::string c, std::string s, std::string h, std::string f,
           int l, std::string snd, double jh, double w, bool pet,
           std::string br, std::string fur, int a)
        : Animal(n, c, s, h, f, l, snd),
          jumpHeight(jh), weight(w), isPet(pet), breed(br), furType(fur), age(a) {}
};
class Elephant : public Animal {
    double tuskLength;
    double weight;
    double height;
    std::string region;
    bool wild;
    int age;
public:
    Elephant(std::string n, std::string c, std::string s, std::string h, std::string f,
             int l, std::string snd, double tusk, double w, double ht,
             std::string reg, bool wl, int a)
        : Animal(n, c, s, h, f, l, snd),
          tuskLength(tusk), weight(w), height(ht), region(reg), wild(wl), age(a) {}
};
class Cat : public Animal {
    std::string breed;
    bool isDomestic;
    double weight;
    std::string furColor;
    int age;
    bool lovesMilk;
public:
    Cat(std::string n, std::string c, std::string s, std::string h, std::string f,
        int l, std::string snd, std::string br, bool dom, double w,
        std::string fur, int a, bool milk)
        : Animal(n, c, s, h, f, l, snd),
          breed(br), isDomestic(dom), weight(w), furColor(fur), age(a), lovesMilk(milk) {}
};
class Tiger : public Animal {
    double speed;
    std::string region;
    double weight;
    double length;
    bool isWild;
    int age;
public:
    Tiger(std::string n, std::string c, std::string s, std::string h, std::string f,
          int l, std::string snd, double spd, std::string reg,
          double w, double len, bool wl, int a)
        : Animal(n, c, s, h, f, l, snd),
          speed(spd), region(reg), weight(w), length(len), isWild(wl), age(a) {}
};
int main() {
    Dolphin dolphin("Dolphin", "Gray", "Medium", "Ocean", "Fish", 0, "Click",
                    50.0, true, "Bottlenose", 200.0, 2.5, true);
    Horse horse("Horse", "Brown", "Large", "Farm", "Grass", 4, "Neigh",
                60.0, "Arabian", 1.6, 500.0, true, "Spotted");
    Rabbit rabbit("Rabbit", "White", "Small", "Garden", "Carrot", 4, "Squeak",
                  0.5, 2.0, true, "Angora", "Soft", 3);
    Elephant elephant("Elephant", "Gray", "Huge", "Savannah", "Plants", 4, "Trumpet",
                      2.0, 5000.0, 3.0, "Africa", true, 25);
    Cat cat("Cat", "White", "Small", "Home", "Fish", 4, "Meow",
            "Persian", true, 4.5, "White", 3, true);
    Tiger tiger("Tiger", "Orange", "Large", "Jungle", "Meat", 4, "Roar",
                80.0, "Asia", 220.0, 3.0, true, 5);

    dolphin.showInfo();
    horse.showInfo();
    rabbit.showInfo();
    elephant.showInfo();
    cat.showInfo();
    tiger.showInfo();
    return 0;
}
