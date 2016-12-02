#include <iostream>
#include "person.hpp"

using namespace std;

int main() {
    auto frank = Person{"Frank", "Fredickson"};
    cout << "My Name is " << frank.getFullName()
                          <<endl;

    return 0;
}