/******************************************************************************
* \file      ArchitectureIntelx80.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Intel x80 8bit architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREINTELX80_H
#define ARCHITECTUREINTELX80_H      20250318L


#define ARCHITECTURE_INTELX80           ((ARCHITECTURE_INTELIA64)+1)
#define ARCHITECTURE_INTELX80_NAME      "Intel x80"

#if defined(__8080__)

    #define ARCHITECTURE                ARCHITECTURE_INTELX80
    #define ARCHITECTURE_NAME           ARCHITECTURE_INTELX80_NAME

#endif


#endif /* ARCHITECTUREINTELX80_H */
