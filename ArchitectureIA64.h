/******************************************************************************
* \file      ArchitectureIA64.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Intel IA-64 itanium architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREIA64_H
#define ARCHITECTUREIA64_H      20250318L


#define ARCHITECTURE_INTELIA64          ((ARCHITECTURE_IA32)+1)
#define ARCHITECTURE_INTELIA64_NAME     "Intel Itanium IA-64"

#if defined(__ia64__) || defined(_IA64) || defined(__IA64__) || \
    defined(__ia64) || defined(_M_IA64) || defined(__itanium__)

    #define ARCHITECTURE                ARCHITECTURE_INTELIA64
    #define ARCHITECTURE_NAME           ARCHITECTURE_INTELIA64_NAME

#endif


#endif /* ARCHITECTUREIA64_H */
