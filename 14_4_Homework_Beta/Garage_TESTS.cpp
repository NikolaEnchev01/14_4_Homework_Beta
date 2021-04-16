
#include "Garage.h"
#include "catch.hpp"
#include <iostream>

TEST_CASE("Garage : constructor and copy constructor")
{
	Garage g{ 50 };

	Vehicle v{ "123","Big and fast", 42 };

	g.insert(v);

	Garage c{ g };

	REQUIRE(strcmp(g.at(0).getRegistration(), "123") == 0);
	REQUIRE(strcmp(g.at(0).getDescription(), "Big and fast") == 0);
	REQUIRE(g.at(0).getSpace() == 42);
	//g.at(0).getDescription();
}