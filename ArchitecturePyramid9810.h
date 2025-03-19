/******************************************************************************
* \file      ArchitecturePyramid9810.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Pyramid 9810 architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREPYRAMID9810_H
#define ARCHITECTUREPYRAMID9810_H       20250318L


#define ARCHITECTURE_PYRAMID9810        ((ARCHITECTURE_POWERPC)+1)
#define ARCHITECTURE_PYRAMID9810_NAME   "Pyramid 9810"

#if defined(pyr)

    #define ARCHITECTURE                ARCHITECTURE_PYRAMID9810
    #define ARCHITECTURE_NAME           ARCHITECTURE_PYRAMID9810_NAME

#endif


#endif /* ARCHITECTUREPYRAMID9810_H */
