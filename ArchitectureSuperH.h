/******************************************************************************
* \file      ArchitectureSuperH.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     SuperH architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURESUPERH_H
#define ARCHITECTURESUPERH_H        20250318L


#define ARCHITECTURE_SUPERH             ((ARCHITECTURE_SPARC)+1)
#define ARCHITECTURE_SUPERH_NAME        "SuperH"

#if defined(__sh__)

    #define ARCHITECTURE                ARCHITECTURE_SUPERH
    #define ARCHITECTURE_NAME           ARCHITECTURE_SUPERH_NAME

#endif


#endif /* ARCHITECTURESUPERH_H */
