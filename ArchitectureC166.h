/******************************************************************************
* \file      ArchitectureC166.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     C166 16bit architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREC166_H
#define ARCHITECTUREC166_H      20250318L


#define ARCHITECTURE_C166           ((ARCHITECTURE_BLACKFIN)+1)
#define ARCHITECTURE_C166_NAME      "C166"

#if defined(__C166__)

#define ARCHITECTURE                ARCHITECTURE_C166
#define ARCHITECTURE_NAME           ARCHITECTURE_C166_NAME

#endif


#endif /* ARCHITECTUREC166_H */
