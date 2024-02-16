#include "Person.h"
#include <iostream>

int main() {

    human::Person personOne("John Doe", 45);

    std::cout << "Name: " << personOne.getName() << ", Age: " <<personOne.getAge() << std::endl;

    personOne.setAge(22);
    personOne.setName("Valora");

    std::cout << "Name: " << personOne.getName() << ", Age: " <<personOne.getAge() << std::endl;

    return 0;
}
