/******************************************************************************
* \file      ArchitectureIA32.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     IA-32 architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREIA32_H
#define ARCHITECTUREIA32_H      20250318L


#define ARCHITECTURE_IA32               ((ARCHITECTURE_HPPARISC)+1)
#define ARCHITECTURE_IA32_NAME          "IA-32"

#if defined(__IA32__)

    #define ARCHITECTURE                ARCHITECTURE_IA32
    #define ARCHITECTURE_NAME           ARCHITECTURE_IA32_NAME

#endif


#endif /* ARCHITECTUREIA32_H */
