//
// Created by Jonathan Gerber on 12/1/16.
//

#ifndef CHAPTER07_PERSON_HPP
#define CHAPTER07_PERSON_HPP
#include <string>

class Person {
    std::string m_first;
    std::string m_last;
public:
    Person(const std::string& fn, const std::string& ln);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getFullName() const;
};


#endif //CHAPTER07_PERSON_HPP
