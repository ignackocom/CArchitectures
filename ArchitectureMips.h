/******************************************************************************
* \file      ArchitectureMips.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Mips architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREMIPS_H
#define ARCHITECTUREMIPS_H      20250318L


#define ARCHITECTURE_MIPS               ((ARCHITECTURE_MCS251)+1)
#define ARCHITECTURE_MIPS_NAME          "MIPS"

#if defined(__mips__) || defined(mips) || defined(__mips) || defined(__MIPS__)

    #define ARCHITECTURE                ARCHITECTURE_MIPS
    #define ARCHITECTURE_NAME           ARCHITECTURE_MIPS_NAME

#endif


#endif /* ARCHITECTUREMIPS_H */
