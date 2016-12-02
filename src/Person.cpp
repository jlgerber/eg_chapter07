//
// Created by Jonathan Gerber on 12/1/16.
//

#include "Person.hpp"
//#include <string>

using std::string;

Person::Person(const string &fn, const string &ln) :
    m_first{fn},
    m_last{ln}
{}

string Person::getFullName() const {
    return string(m_first + " " + m_last);
}

std::string Person::getFirstName() const {
    return m_first;
}

std::string Person::getLastName() const {
    return m_last;
}
