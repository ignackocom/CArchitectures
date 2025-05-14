/******************************************************************************
* \file      ArchitectureIntelx8632.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*			 https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Intel x86 32bit architecture definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTUREINTELX8632_H
#define ARCHITECTUREINTELX8632_H        20250318L


#define ARCHITECTURE_INTELX86_32        ((ARCHITECTURE_INTELX86_16)+1)
#define ARCHITECTURE_INTELX86_32_NAME   "Intel x86 32bit"

#if defined(i386) || defined(__i386) || defined(__i386__) || \
    defined(__i486__) || defined(__i586__) || defined(__i686__) || \
    defined(_M_IX86) || defined(__X86__)  || defined(_X86_) || \
    defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) || \
    defined(__386)

    #if defined(_M_IX86)

        #if defined(__WATCOMC__)

            #if defined(__386__) || defined(_M_I386)

                /* watcomc 32bit */
                #define ARCHITECTURE            ARCHITECTURE_INTELX86_32
                #define ARCHITECTURE_NAME       ARCHITECTURE_INTELX86_32_NAME

            #endif

        #else
        
            /* standard 32bit */
            #define ARCHITECTURE            ARCHITECTURE_INTELX86_32
            #define ARCHITECTURE_NAME       ARCHITECTURE_INTELX86_32_NAME

        #endif

    #else 

        /* standard 32bit */
        #define ARCHITECTURE            ARCHITECTURE_INTELX86_32
        #define ARCHITECTURE_NAME       ARCHITECTURE_INTELX86_32_NAME

    #endif

#endif


#endif /* ARCHITECTUREINTELX8632_H */
