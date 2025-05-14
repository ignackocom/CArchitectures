/******************************************************************************
* \file      Architecture6502.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     6502 architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURE6502_H
#define ARCHITECTURE6502_H     20250318L


#define ARCHITECTURE_6502              1
#define ARCHITECTURE_6502_NAME         "6502"

#if defined(__CC65__)

#define ARCHITECTURE                ARCHITECTURE_6502
#define ARCHITECTURE_NAME           ARCHITECTURE_6502_NAME

#endif


#endif /* ARCHITECTURE6502_H */
