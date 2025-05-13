/******************************************************************************
* \file      ArchitectureHpPaRisc.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     HP/PA RISC architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREHPPARISC_H  
#define ARCHITECTUREHPPARISC_H      20250318L


#define ARCHITECTURE_HPPARISC           ((ARCHITECTURE_EPIPHANY)+1)
#define ARCHITECTURE_HPPARISC_NAME      "HP/PA Risc"

#if defined(__hppa) || defined(__hppa__) || defined(__HPPA__)

    #define ARCHITECTURE                ARCHITECTURE_HPPARISC
    #define ARCHITECTURE_NAME           ARCHITECTURE_HPPARISC_NAME

#endif


#endif /* ARCHITECTUREHPPARISC_H */
