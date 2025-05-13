/******************************************************************************
* \file      ArchitectureZilogZ80.h
* \version   2025.03.18.01
* \author    Peter Potrok
*            ignacko.com@outlook.com
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Zilog Z80 8bit architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREZILOGZ80_H
#define ARCHITECTUREZILOGZ80_H      20250318L


#define ARCHITECTURE_ZILOGZ80           ((ARCHITECTURE_TMS470)+1)
#define ARCHITECTURE_ZILOGZ80_NAME      "Zilog Z80"

#if defined(__Z80)

    #define ARCHITECTURE                ARCHITECTURE_ZILOGZ80
    #define ARCHITECTURE_NAME           ARCHITECTURE_ZILOGZ80_NAME

#endif


#endif /* ARCHITECTUREZILOGZ80_H */
