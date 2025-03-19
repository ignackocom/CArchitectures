/******************************************************************************
* \file      CArchitecture.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     CPU architecture constant definitions
* \details
*
* \see       https://github.com/cpredef/predef
*            and other resources
******************************************************************************/

#ifndef CARCHITECTURE_H
#define CARCHITECTURE_H		20250318L


/* All includes. */
#include "ArchitectureAlpha.h"
#include "ArchitectureAmd64.h"
#include "ArchitectureArm.h"
#include "ArchitectureArm64.h"
#include "ArchitectureAvr.h"

#include "ArchitectureBlackfin.h"

#include "ArchitectureConvex.h"

#include "ArchitectureElbrus.h"
#include "ArchitectureEpiphany.h"

#include "ArchitectureHpPaRisc.h"

#include "ArchitectureIA32.h"
#include "ArchitectureIA64.h"
#include "ArchitectureIntelx80.h"
#include "ArchitectureIntelx85.h"
#include "ArchitectureIntelx8616.h"
#include "ArchitectureIntelx8632.h"

#include "ArchitectureLoongArch.h"

#include "ArchitectureMips.h"
#include "ArchitectureMotorola68k.h"

#include "ArchitectureNecSxAurora.h"

#include "ArchitecturePNaCl.h"
#include "ArchitecturePowerPC.h"
#include "ArchitecturePyramid9810.h"

#include "ArchitectureRiscV.h"
#include "ArchitectureRs6000.h"

#include "ArchitectureSparc.h"
#include "ArchitectureSuperH.h"
#include "ArchitectureSystemZ.h"

#include "ArchitectureTms320.h"
#include "ArchitectureTms470.h"

#include "ArchitectureZilogZ80.h"
#include "ArchitectureZilogZ180.h"


#ifndef ARCHITECTURE
/* Unknown architecture. */
#define ARCHITECTURE            0
#endif /* ARCHITECTURE */

#ifndef ARCHITECTURE_NAME
/* Unknown architecture. */
#define ARCHITECTURE_NAME       "unknown"
#endif /* ARCHITECTURE_NAME */


/******************************************************************************
* Example of use
*
* #if ARCHITECTURE == 0
*	#error "Unknown architecture"
* #endif
* 
* #if ARCHITECTURE == ARCHITECTURE_ZILOGZ80
* ...
* Zilog Z80 code
* ...
* #elif  ARCHITECTURE == ARCHITECTURE_ZILOGZ180
* ...
* Zilog Z180 code
* ...
* #else
* ...
* other code
* ...
* #endif
* 
*/


#endif /* CARCHITECTURE_H */
