/******************************************************************************
* \file      ArchitectureNecSxAurora.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     NEC SX-Aurora TSUBASA architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURENECSXAURORA_H
#define ARCHITECTURENECSXAURORA_H       20250318L


#define ARCHITECTURE_NECSXAURORA        ((ARCHITECTURE_MOTOROLA68K)+1)
#define ARCHITECTURE_NECSXAURORA_NAME   "NEC SX-Aurora TSUBASA"

#if defined(__ve) || defined(__ve__) || defined(__NEC__)

    #define ARCHITECTURE                ARCHITECTURE_NECSXAURORA
    #define ARCHITECTURE_NAME           ARCHITECTURE_NECSXAURORA_NAME

#endif


#endif /* ARCHITECTURENECSXAURORA_H */
