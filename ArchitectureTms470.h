/******************************************************************************
* \file      ArchitectureTms470.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Tms470 architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURETMS470_H
#define ARCHITECTURETMS470_H        20250318L


#define ARCHITECTURE_TMS470             ((ARCHITECTURE_TMS320)+1)
#define ARCHITECTURE_TMS470_NAME        "TMS470"

#if defined(__TMS470__)

    #define ARCHITECTURE                ARCHITECTURE_TMS470
    #define ARCHITECTURE_NAME           ARCHITECTURE_TMS470_NAME

#endif


#endif /* ARCHITECTURETMS470_H */
