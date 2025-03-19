/******************************************************************************
* \file      ArchitectureIntelx8616.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Intel x86 16bit architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREINTELX8616_H  
#define ARCHITECTUREINTELX8616_H        20250318L


#define ARCHITECTURE_INTELX86_16        ((ARCHITECTURE_INTELX85)+1)
#define ARCHITECTURE_INTELX86_16_NAME   "Intel x86 16bit"

#if defined(_M_I86)

    /* standard 16 bit */
    #define ARCHITECTURE                ARCHITECTURE_INTELX86_16
    #define ARCHITECTURE_NAME           ARCHITECTURE_INTELX86_16_NAME

#endif

#if defined(_M_IX86) && !defined(__386__) && !defined(_M_I386)

    /* watcomc 16 bit */
    #define ARCHITECTURE                ARCHITECTURE_INTELX86_16
    #define ARCHITECTURE_NAME           ARCHITECTURE_INTELX86_16_NAME

#endif


#endif /* ARCHITECTUREINTELX8616_H */
