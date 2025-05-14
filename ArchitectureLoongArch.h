/******************************************************************************
* \file      ArchitectureLoongArch.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     LoongArch architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURELOONGARCH_H
#define ARCHITECTURELOONGARCH_H     20250318L


#define ARCHITECTURE_LOONGARCH          ((ARCHITECTURE_INTELX86_32)+1)
#define ARCHITECTURE_LOONGARCH_NAME     "LoongArch"

#if defined(__loongarch__)

    #define ARCHITECTURE                ARCHITECTURE_LOONGARCH
    #define ARCHITECTURE_NAME           ARCHITECTURE_LOONGARCH_NAME

#endif


#endif /* ARCHITECTURELOONGARCH_H */
