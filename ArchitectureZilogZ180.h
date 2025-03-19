/******************************************************************************
* \file      ArchitectureZilogZ180.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Zilog Z180 8bit architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREZILOGZ180_H
#define ARCHITECTUREZILOGZ180_H     20250318L


#define ARCHITECTURE_ZILOGZ180          ((ARCHITECTURE_ZILOGZ80)+1)
#define ARCHITECTURE_ZILOGZ180_NAME     "Zilog Z180"

#if defined(__Z180)

    #define ARCHITECTURE                ARCHITECTURE_ZILOGZ180
    #define ARCHITECTURE_NAME           ARCHITECTURE_ZILOGZ180_NAME

#endif


#endif /* ARCHITECTUREZILOGZ180_H */
