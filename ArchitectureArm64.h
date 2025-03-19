/******************************************************************************
* \file      ArchitectureArm64.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Arm64 architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREARM64_H  
#define ARCHITECTUREARM64_H     20250318L


#define ARCHITECTURE_ARM64              ((ARCHITECTURE_ARM)+1)
#define ARCHITECTURE_ARM64_NAME         "Arm 64"

#if defined(__aarch64__) || defined(_M_ARM64)

    #define ARCHITECTURE                ARCHITECTURE_ARM64
    #define ARCHITECTURE_NAME           ARCHITECTURE_ARM64_NAME

#endif


#endif /* ARCHITECTUREARM64_H */
