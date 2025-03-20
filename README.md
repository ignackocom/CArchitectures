# CArchitectures
C Architecture constants


Example of use

#if ARCHITECTURE == 0
  #error "Unknown architecture"
#endif

#if ARCHITECTURE == ARCHITECTURE_ZILOGZ80

Zilog Z80 code

#elif  ARCHITECTURE == ARCHITECTURE_ZILOGZ180

Zilog Z180 code

#else

other code

#endif
