/******************************************************************************
* \file      ArchitectureMCS251.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     MCS 251 architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREMCS251_H
#define ARCHITECTUREMCS251_H      20250318L


#define ARCHITECTURE_MCS251               ((ARCHITECTURE_MCS51)+1)
#define ARCHITECTURE_MCS251_NAME          "MCS 251"

#if defined(__C251__)

#define ARCHITECTURE                ARCHITECTURE_MCS251
#define ARCHITECTURE_NAME           ARCHITECTURE_MCS251_NAME

#endif


#endif /* ARCHITECTUREMCS251_H */
