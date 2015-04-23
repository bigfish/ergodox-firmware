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
   esc     , F1      , F2     , F3     , F4     , F5 , F6   , 
   tab   , quote   , comma  , period , p      , y  , nop , 
   ctrlL, a       , o      , e      , u      , i  , 
   lpupo2l2, semicol , q      , j      , k      , x  , guiL , 
   lpupo3l3, nop  , nop , nop , altL  ,

                                                               home     , end  , 
                                                               nop    , nop  , nop , 
                                                               shL2kcap, lpupo1l1 , lpupo3l3, 
// right hand ..... ......... ......... ......... ......... ......... .........
            F7       , F8     , F9     , F10    , F11     , F12   , nop     , 
            nop    , f      , g      , c      , r       , l     , esc      , 
                       d,     h      , t      , n      , s       , dash  , 
            enter ,    b      , m      , w      , v       , z     , lpupo1l1 , 
                                bs   , nop, nop , nop , nop , 
   pageU,    pageD,
   nop,      nop,      nop,
   del,    enter,    space  ),

// ............................................................................


    MATRIX_LAYER(  // layer 1 : symbols
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  nop,   nop,   nop,   nop,   nop,   nop,   nop,
  transp,   pound, at, percent,   grave,   nop,   nop,
  transp,   amp,   pipe, exclam,   question,   nop,
  transp,   nop,   nop,   nop,   nop,   nop,   nop,
  transp,   nop,   nop,   nop,   del,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            nop,   nop,   nop,    nop,    nop,    nop,   nop,
            nop,   tilde,    braceL,    braceR,   caret,     dollar,   bkslash,
                    plus,    parenL,   parenR,   equal,     semicol,      colon,
            bs,    slash,    brktL,     brktR,    at,        exclam,   at,
                                bs,   transp,   transp,    transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................
// ............................................................................


    MATRIX_LAYER(  // layer 2 : number pad
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,      ins,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   lpo2l2,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpo1l1,   transp,   transp,    transp,    transp, transp,   transp,
            transp,   asterisk,      1,        2,        3,     period,   transp,
                      plus,        4,        5,        6,     0,   dash,
            transp,   slash,        7,        8,        9,    comma,   transp,
                                transp,   transp,   transp,    transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,        transp  ),
// ............................................................................
//
    MATRIX_LAYER(  // layer 3 : navigation
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,      ins,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpo1l1,   transp,   transp,    transp,    transp, transp,   transp,
            transp,   transp,        transp,        transp,        transp,     transp,   transp,
                      transp,        arrowL,        arrowD,        arrowU,     arrowR,   transp,
            transp,   transp,        home,        pageD,        pageU,    end,   transp,
                                transp,   transp,   transp,    transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,        transp  ),
};

