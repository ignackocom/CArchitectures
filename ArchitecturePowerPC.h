/******************************************************************************
* \file      ArchitecturePowerPC.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     PowerPC architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREPOWERPC_H
#define ARCHITECTUREPOWERPC_H       20250318L


#define ARCHITECTURE_POWERPC            ((ARCHITECTURE_PNACL)+1)
#define ARCHITECTURE_POWERPC_NAME       "PowerPC"

#if defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || \
    defined(__POWERPC__) || defined(__ppc__) || defined(__ppc64__) || \
    defined(__PPC__) || defined(__PPC64__) || defined(_ARCH_PPC) || \
    defined(_ARCH_PPC64) || defined(_M_PPC) || defined(__ppc)

    #define ARCHITECTURE                ARCHITECTURE_POWERPC
    #define ARCHITECTURE_NAME           ARCHITECTURE_POWERPC_NAME

#endif


#endif /* ARCHITECTUREPOWERPC_H */
