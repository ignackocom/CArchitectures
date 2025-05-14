/******************************************************************************
* \file      ArchitectureBlackfin.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Blackfin architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREBLACKFIN_H
#define ARCHITECTUREBLACKFIN_H      20250318L


#define ARCHITECTURE_BLACKFIN           ((ARCHITECTURE_AVR)+1)
#define ARCHITECTURE_BLACKFIN_NAME      "Blackfin"

#if defined(__bfin) || defined(__BFIN__) || defined(__ADSPBLACKFIN__)

    #define ARCHITECTURE                ARCHITECTURE_BLACKFIN
    #define ARCHITECTURE_NAME           ARCHITECTURE_BLACKFIN_NAME

#endif


#endif /* ARCHITECTUREBLACKFIN_H */
