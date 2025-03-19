/******************************************************************************
* \file      ArchitectureTms320.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Tms320 architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURETMS320_H
#define ARCHITECTURETMS320_H        20250318L


#define ARCHITECTURE_TMS320             ((ARCHITECTURE_SYSTEMZ)+1)
#define ARCHITECTURE_TMS320_NAME        "TMS320"

#if defined(_TMS320C2XX) || defined(__TMS320C2000__) || defined(_TMS320C5X) || \
    defined(__TMS320C55X__) || defined(_TMS320C6X) || defined(__TMS320C6X__)

    #define ARCHITECTURE                ARCHITECTURE_TMS320
    #define ARCHITECTURE_NAME           ARCHITECTURE_TMS320_NAME

#endif


#endif /* ARCHITECTURETMS320_H */
