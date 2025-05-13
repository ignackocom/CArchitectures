/******************************************************************************
* \file      ArchitectureMotorola68k.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Motorola 68k architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREMOTOROLA68K_H  
#define ARCHITECTUREMOTOROLA68K_H       20250318L


#define ARCHITECTURE_MOTOROLA68K        ((ARCHITECTURE_MIPS)+1)
#define ARCHITECTURE_MOTOROLA68K_NAME   "Motorola 68k"

#if defined(__m68k__) || defined(M68000) || defined(__MC68K__)

    #define ARCHITECTURE                ARCHITECTURE_MOTOROLA68K
    #define ARCHITECTURE_NAME           ARCHITECTURE_MOTOROLA68K_NAME

#endif


#endif /* ARCHITECTUREMOTOROLA68K_H */
