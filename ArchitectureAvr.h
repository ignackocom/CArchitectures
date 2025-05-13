/******************************************************************************
* \file      ArchitectureAvr.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Avr architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREAVR_H
#define ARCHITECTUREAVR_H       20250318L


#define ARCHITECTURE_AVR                ((ARCHITECTURE_ARM64)+1)
#define ARCHITECTURE_AVR_NAME           "Avr"

#if defined(__AVR_ARCH__)

    #define ARCHITECTURE                ARCHITECTURE_AVR
    #define ARCHITECTURE_NAME           ARCHITECTURE_AVR_NAME

#endif


#endif /* ARCHITECTUREAVR_H */
