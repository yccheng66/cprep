#include <gtest/gtest.h>
#include "ip_test.h"
#include "swap_test.h"

int main(int argc, char ** argv) {
   testing :: InitGoogleTest( &argc , argv ) ;
   return RUN_ALL_TESTS( ) ;
}
