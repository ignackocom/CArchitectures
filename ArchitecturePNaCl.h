/******************************************************************************
* \file      ArchitecturePNaCl.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     PNaCl architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREPNACL_H
#define ARCHITECTUREPNACL_H     20250318L


#define ARCHITECTURE_PNACL              ((ARCHITECTURE_NECSXAURORA)+1)
#define ARCHITECTURE_PNACL_NAME         "PNaCl"

#if defined(__pnacl__)

    #define ARCHITECTURE                ARCHITECTURE_PNACL
    #define ARCHITECTURE_NAME           ARCHITECTURE_PNACL_NAME

#endif


#endif /* ARCHITECTUREPNACL_H */
