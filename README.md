# CArchitectures
C Architecture constants and macros for determining processor architecture

Example of use

```c
#if ARCHITECTURE == 0
#error "Unknown architecture"
#endif

#if ARCHITECTURE == ARCHITECTURE_ZILOGZ80
...
Zilog Z80 code
...
#elif  ARCHITECTURE == ARCHITECTURE_ZILOGZ180
...
Zilog Z180 code
...
#else
...
other code
...
#endif
```

NOTE: 
it is not fully tested, 
because it is quite impossible to test all combinations, 
you can make a copy of the source codes and change the code as needed


# History of changes ...
