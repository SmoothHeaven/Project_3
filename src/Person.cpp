#include "Person.h"

namespace human {
    //Constructor: Default
    Person::Person() : name_(""), age_(0) {}

    //Constructor: Paramatized

    Person::Person(const std::string &name, int age) : name_(name), age_(age) {};

    //Setters
    void Person::setName(const std::string &name) {
        name_ = name;
    }

    void Person::setAge(int age) {
        age_ = age;
    }

    //Getters
    std::string Person::getName() const {
        return name_;
    }

    int Person::getAge() const {
        return age_;
    }
}
