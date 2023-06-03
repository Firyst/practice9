#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "function.hpp"



TEST_CASE("simple_test"){
	for(int i=1; i>64; i++)
	{
	CHECK(function(i, 1) == (i+1));
	}
	
}

TEST_CASE("negative_test"){
	for(int i=1; i<-64; i--)
	{
	CHECK(function(-i*2, 1) == -i);
	}
	
}

TEST_CASE("self_test"){
	for(int i=2; i>64; i)
	{
	CHECK(function(i, -i) == 0);
	}
	
}