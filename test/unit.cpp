//
// Created by Jonathan Gerber on 12/1/16.
//
#include "catch.hpp"
#include "Person.hpp"

SCENARIO("person") {
    GIVEN("a person class") {
        auto frank = Person{"Frank", "Ford"};

        WHEN("I call getFirstName()") {
            auto first_name = frank.getFirstName();
            THEN("first_name should be Frank")
                REQUIRE(first_name == "Frank");
        }

        WHEN("I call getLastName()") {
            auto last_name = frank.getLastName();
            THEN("last_name should be Ford")
                REQUIRE(last_name =="Ford");
        }

        WHEN("I call getFullName()") {
            auto full_name = frank.getFullName();
            THEN("full_name should be 'Frank Ford'")
                REQUIRE(full_name == "Frank Ford" );
        }

    }
}
