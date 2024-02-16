#pragma once

#include <string>

namespace human {
class Person
    {
        private:
            std::string name_;
            int age_;

        public:
        //Constructor: Default
        Person();
        //Constructor: paramatized
        Person(const std::string &name, int age);
        //Setters
        void setName(const std::string &name);
        void setAge(int age);
        //Getters
        std::string getName() const;
        int getAge() const;


    };
}
