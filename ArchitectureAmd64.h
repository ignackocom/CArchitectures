/******************************************************************************
* \file      ArchitectureAmd64.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Amd64 architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREAMD64_H
#define ARCHITECTUREAMD64_H     20250318L


#define ARCHITECTURE_AMD64              ((ARCHITECTURE_ALPHA)+1)
#define ARCHITECTURE_AMD64_NAME         "Amd 64"


#if defined(__amd64) || defined(__amd64__) || \
    defined(__x86_64) || defined(__x86_64__) || \
    defined(_M_X64) || defined(_M_AMD64)

    #define ARCHITECTURE                ARCHITECTURE_AMD64
    #define ARCHITECTURE_NAME           ARCHITECTURE_AMD64_NAME

#endif


#endif /* ARCHITECTUREAMD64_H */
