/******************************************************************************
* \file      ArchitectureRiscV.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     RISC-V architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURERISCV_H
#define ARCHITECTURERISCV_H     20250318L


#define ARCHITECTURE_RISCV              ((ARCHITECTURE_PYRAMID9810)+1)
#define ARCHITECTURE_RISCV_NAME         "RISC-V"

#if defined(__riscv) || defined(__riscv_xlen)

    #define ARCHITECTURE                ARCHITECTURE_RISCV
    #define ARCHITECTURE_NAME           ARCHITECTURE_RISCV_NAME

#endif


#endif /* ARCHITECTURERISCV_H */
