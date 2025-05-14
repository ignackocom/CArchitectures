/******************************************************************************
* \file      ArchitectureIntelx85.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Intel x85 8bit architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREINTELX85_H
#define ARCHITECTUREINTELX85_H      20250318L


#define ARCHITECTURE_INTELX85           ((ARCHITECTURE_INTELX80)+1)
#define ARCHITECTURE_INTELX85_NAME      "Intel x85"

#if defined(__8085__)

    #define ARCHITECTURE                ARCHITECTURE_INTELX85
    #define ARCHITECTURE_NAME           ARCHITECTURE_INTELX85_NAME

#endif


#endif /* ARCHITECTUREINTELX85_H */
