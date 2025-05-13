/******************************************************************************
* \file      ArchitectureRs6000.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Rs6000 architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURERS6000_H
#define ARCHITECTURERS6000_H        20250318L


#define ARCHITECTURE_RS6000             ((ARCHITECTURE_RISCV)+1)
#define ARCHITECTURE_RS6000_NAME        "RS/6000"

#if defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || \
    defined(_ARCH_PWR) || defined(_ARCH_PWR2) || defined(_ARCH_PWR3) || \
    defined(_ARCH_PWR4)

    #define ARCHITECTURE                ARCHITECTURE_RS6000
    #define ARCHITECTURE_NAME           ARCHITECTURE_RS6000_NAME

#endif


#endif /* ARCHITECTURERS6000_H */
