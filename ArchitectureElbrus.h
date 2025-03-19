/******************************************************************************
* \file      ArchitectureElbrus.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Elbrus architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREELBRUS_H  
#define ARCHITECTUREELBRUS_H        20250318L


#define ARCHITECTURE_ELBRUS             ((ARCHITECTURE_CONVEX)+1)
#define ARCHITECTURE_ELBRUS_NAME        "Elbrus"

#if defined(__e2k__)

    #define ARCHITECTURE                ARCHITECTURE_ELBRUS
    #define ARCHITECTURE_NAME           ARCHITECTURE_ELBRUS_NAME

#endif


#endif /* ARCHITECTUREELBRUS_H */
