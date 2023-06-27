#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    Person(const std::string& name) : name(name) {}

    virtual void introduce() const {
        std::cout << "My name is " << name << std::endl;
    }
};

class Father : public Person {
public:
    Father(const std::string& name) : Person(name) {}

    void introduce() const override {
        std::cout << "I am a father. ";
        Person::introduce();
    }
};

class Mother : public Person {
public:
    Mother(const std::string& name) : Person(name) {}

    void introduce() const override {
        std::cout << "I am a mother. ";
        Person::introduce();
    }
};

class Son : public Person {
public:
    Son(const std::string& name) : Person(name) {}

    void introduce() const override {
        std::cout << "I am a son. ";
        Person::introduce();
    }
};

int main() {
    Father father("Sasha");
    Mother mother("Olena");
    Son Son("Ivan");

    father.introduce();
    mother.introduce();
    Son.introduce();

    return 0;
}