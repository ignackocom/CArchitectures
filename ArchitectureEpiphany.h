/******************************************************************************
* \file      ArchitectureEpiphany.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Epiphany architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREEPIPHANY_H
#define ARCHITECTUREEPIPHANY_H      20250318L


#define ARCHITECTURE_EPIPHANY           ((ARCHITECTURE_ELBRUS)+1)
#define ARCHITECTURE_EPIPHANY_NAME      "Epiphany"

#if defined(__epiphany__)

    #define ARCHITECTURE                ARCHITECTURE_EPIPHANY
    #define ARCHITECTURE_NAME           ARCHITECTURE_EPIPHANY_NAME

#endif


#endif /* ARCHITECTUREEPIPHANY_H */
