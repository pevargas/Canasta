///////////////////////////////////////////////////////////////////////////////
// File:   testdeck.h                  Summer 2013
// Author: Patrick Vargas              patrick.vargas@colorado.edu
// Description:
//    Provides a basic testing suit
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
#ifndef TESTDECK_H
#define TESTDECK_H

#include <cstdio>
#include "bicycle.h"

#define TEST( condition ) \
  if ( !condition ) { failed = true; printf("\033[1;31mFAILED (%s:%i): "#condition" \033[0m\n", __FILE__, __LINE__); }
#define DECKINIT failed = false; printf(" %s: ", __PRETTY_FUNCTION__); Deck mydeck;

using namespace std;
using namespace bicycle;
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
namespace testsuit {
  class TestDeck {
  public:
    //
    // Constructors
    //
    TestDeck ();

    //
    // Member Methods
    // 
    bool TestCombine( );
    bool TestDiscard( );
    bool TestDeal( );
    bool TestReset( );
    bool TestShuffle( );

  private:
    //
    // Private Member Data
    //
    bool failed;
  };
}
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
#endif // TESTDECK_H
///////////////////////////////////////////////////////////////////////////////