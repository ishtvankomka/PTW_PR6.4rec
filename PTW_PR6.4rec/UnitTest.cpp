#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Elem.h"
TEST_CASE( "Arguments initialized") {
    Elem* L = NULL;
    Insert1(L, 1);
    Insert1(L, 2);
    Change1(L);

    REQUIRE( L->info == 2);
    REQUIRE( L->link->info == 1);
}
