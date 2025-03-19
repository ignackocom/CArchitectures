/******************************************************************************
* \file      ArchitectureSystemZ.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     SystemZ architecture definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef ARCHITECTURESYSTEMZ_H
#define ARCHITECTURESYSTEMZ_H       20250318L


#define ARCHITECTURE_SYSTEMZ            ((ARCHITECTURE_SUPERH)+1)
#define ARCHITECTURE_SYSTEMZ_NAME       "SystemZ"

#if defined(__370__) || defined(__THW_370__) || defined(__s390__) || \
    defined(__s390x__) || defined(__zarch__) || defined(__SYSC_ZARCH__)

    #define ARCHITECTURE                ARCHITECTURE_SYSTEMZ
    #define ARCHITECTURE_NAME           ARCHITECTURE_SYSTEMZ_NAME

#endif


#endif /* ARCHITECTURESYSTEMZ_H */
