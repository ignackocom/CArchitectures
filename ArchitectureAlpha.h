/******************************************************************************
* \file      ArchitectureAlpha.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Alpha architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREALPHA_H
#define ARCHITECTUREALPHA_H     20250318L


#define ARCHITECTURE_ALPHA              ((ARCHITECTURE_6502)+1)
#define ARCHITECTURE_ALPHA_NAME         "Alpha"

#if defined(__alpha) || defined(__alpha__) || defined(_M_ALPHA)

    #define ARCHITECTURE                ARCHITECTURE_ALPHA
    #define ARCHITECTURE_NAME           ARCHITECTURE_ALPHA_NAME

#endif


#endif /* ARCHITECTUREALPHA_H */
