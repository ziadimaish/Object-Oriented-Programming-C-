#include <iostream>
using namespace std;

class Animal {
private:
    string name;
    string sound;

public:
    Animal() {
        cout << "Hello! I still don't know who I am!" << endl;
    }

    Animal(string _name, string _sound) {
        name = _name;
        sound = _sound;
        cout << "Hello! I am a(n) " << name
            << ". " << sound << "!" << endl;
    }

    Animal(const Animal& other) {
        name = other.name;
        sound = other.sound;
        cout << "Hello! I am a clone of a(n) " << name
            << ". " << sound << "!" << endl;
    }

    ~Animal() {
        cout << "It's me, " << name << "! I am dying! "
            << sound << "!" << endl;
    }

    void make_noise() { cout << sound << "!" << endl; }
    void set_name(string _name) { name = _name; }
    void set_sound(string _sound) { sound = _sound; }
};

int main() {

    return 0;
}

int main() {
    Animal a1();
    Animal a2("Cat","Meow");
    

    return 0;
}