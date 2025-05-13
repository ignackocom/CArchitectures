/******************************************************************************
* \file      ArchitectureConvex.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Convex architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURECONVEX_H  
#define ARCHITECTURECONVEX_H        20250318L


#define ARCHITECTURE_CONVEX             ((ARCHITECTURE_C166)+1)
#define ARCHITECTURE_CONVEX_NAME        "Convex"

#if defined(__convex__)

    #define ARCHITECTURE                ARCHITECTURE_CONVEX
    #define ARCHITECTURE_NAME           ARCHITECTURE_CONVEX_NAME

#endif


#endif /* ARCHITECTURECONVEX_H */
