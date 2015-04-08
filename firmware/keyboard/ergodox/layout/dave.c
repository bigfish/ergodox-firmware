/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * My QWERTY layout, at the moment.  I imagine this will evolve over time.
 * Once I'm done with the Arensito layout, it may disappear altogether.
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"


// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   caps     , F1      , F2     , F3     , F4     , F5 , F6   , 
   esc   , quote   , comma  , period , p      , y  , home , 
   lpupo1l1 , a       , o      , e      , u      , i  , 
   lpupo2l2 , semicol , q      , j      , k      , x  , tab  , 
   guiL     , arrowL  , arrowU , arrowD , arrowR , 
                                                               bs     , del  , 
                                                               nop    , nop  , home , 
                                                               shL2kcap, ctrlL, altL  , 
// right hand ..... ......... ......... ......... ......... ......... .........
            F7       , F8     , F9     , F10    , F11     , F12   , dash     , 
            pageU    , f      , g      , c      , r       , l     , bs    , 
                       d,     h      , t      , n      , s       , dash  , 
            pageD ,    b      , m      , w      , v       , z     , shR2kcap , 
                                arrowL   , arrowD , arrowU , arrowR , guiR    , 
   lpupo3l3,    enter,
   tab,      nop,      nop,
   enter,    bs,    space  ),

// ............................................................................


    MATRIX_LAYER(  // layer 1 : symbols
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  nop,   nop,   nop,   nop,   nop,   nop,   nop,
  nop,   nop,   nop,   nop,   nop,   nop,   nop,
  transp,   nop,   nop,   nop,   nop,   nop,
  transp,   nop,   nop,   nop,   nop,   nop,   nop,
  transp,   nop,   nop,   nop,   nop,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            nop,   nop,   nop,    nop,    nop,    nop,   nop,
            nop,   tilde,    braceL,    braceR,   caret,     dollar,   bkslash,
                      plus,     parenL ,   parenR,   equal,     semicol,      colon,
            nop,   slash,    brktL,     brktR,    at,        exclam,   transp,
                                transp,   transp,   transp,    transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................
// ............................................................................

    MATRIX_LAYER(  // layer 3 : symbols & number pad
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  nop,   nop,   nop,   nop,   nop,   nop,   nop,
  nop,   nop,   nop,   nop,   nop,   nop,   nop,
  transp,   nop,   nop,   nop,   nop,   nop,
  transp,   nop,   nop,   nop,   nop,   nop,   nop,
  transp,   nop,   nop,   nop,   nop,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            nop,   nop,   nop,    nop,    nop, nop,   nop,
            nop,   pound,        1,        2,        3,     percent,   grave,
                      amp,        4,        5,        6,     0,      pipe,
            nop,   asterisk,        7,        8,        9,    question,   nop,
                                nop,   nop,   nop,    nop,   nop,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................
};

