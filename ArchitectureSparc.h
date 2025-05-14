/******************************************************************************
* \file      ArchitectureSparc.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Sparc architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURESPARC_H
#define ARCHITECTURESPARC_H     20250318L


#define ARCHITECTURE_SPARC              ((ARCHITECTURE_RS6000)+1)
#define ARCHITECTURE_SPARC_NAME         "Sparc"

#if defined(__sparc__) || defined(__sparc)

    #define ARCHITECTURE                ARCHITECTURE_SPARC
    #define ARCHITECTURE_NAME           ARCHITECTURE_SPARC_NAME

#endif


#endif /* ARCHITECTURESPARC_H */
