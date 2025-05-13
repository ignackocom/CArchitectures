/******************************************************************************
* \file      ArchitectueArm.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Arm architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREARM_H  
#define ARCHITECTUREARM_H       20250318L


#define ARCHITECTURE_ARM                ((ARCHITECTURE_AMD64)+1)
#define ARCHITECTURE_ARM_NAME           "Arm"

#if defined(__arm) || defined(__arm__) || \
    defined(__thumb__) || defined(__TARGET_ARCH_ARM) || \
    defined(__TARGET_ARCH_THUMB) || defined(_ARM) || \
    defined(_M_ARM) || defined(_M_ARMT) || defined(__CA__)

    #define ARCHITECTURE                ARCHITECTURE_ARM
    #define ARCHITECTURE_NAME           ARCHITECTURE_ARM_NAME

#endif


#endif /* ARCHITECTUREARM_H */
