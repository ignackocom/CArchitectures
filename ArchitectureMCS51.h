/******************************************************************************
* \file      ArchitectureMCS51.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     MCS 51 architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREMCS51_H
#define ARCHITECTUREMCS51_H      20250318L


#define ARCHITECTURE_MCS51               ((ARCHITECTURE_LOONGARCH)+1)
#define ARCHITECTURE_MCS51_NAME          "MCS 51"

#if defined(__C51__) || defined(__CX51__)

#define ARCHITECTURE                ARCHITECTURE_MCS51
#define ARCHITECTURE_NAME           ARCHITECTURE_MCS51_NAME

#endif


#endif /* ARCHITECTUREMCS51_H */
