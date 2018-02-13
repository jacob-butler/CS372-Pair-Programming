#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "calculator.hpp"

TEST_CASE( "String processing", "[calculator]" ) 
{
	REQUIRE( sum("") == 0 );
}