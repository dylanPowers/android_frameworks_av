/* ------------------------------------------------------------------
 * Copyright (C) 1998-2009 PacketVideo
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 * -------------------------------------------------------------------
 */
/*

 Pathname: ps_hybrid_filter_bank_allocation.h

------------------------------------------------------------------------------
 REVISION HISTORY

 Who:                   Date:
 Description:

------------------------------------------------------------------------------
 INCLUDE DESCRIPTION

 Header file for ps_hybrid_filter_bank_allocation

------------------------------------------------------------------------------
*/

/*----------------------------------------------------------------------------
; CONTINUE ONLY IF NOT ALREADY DEFINED
----------------------------------------------------------------------------*/
#ifndef PS_HYBRID_FILTER_BANK_ALLOCATION_H
#define PS_HYBRID_FILTER_BANK_ALLOCATION_H

/*----------------------------------------------------------------------------
; INCLUDES
----------------------------------------------------------------------------*/
#include    "pv_audio_type_defs.h"
#include    "s_hybrid.h"

/*----------------------------------------------------------------------------
; MACROS
; Define module specific macros here
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; DEFINES
; Include all pre-processor statements here.
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; EXTERNAL VARIABLES REFERENCES
; Declare variables used in this module but defined elsewhere
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; SIMPLE TYPEDEF'S
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; ENUMERATED TYPEDEF'S
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; STRUCTURES TYPEDEF'S
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
; GLOBAL FUNCTION DEFINITIONS
; Function Prototype declaration
----------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C"
{
#endif

    Int32 ps_hybrid_filter_bank_allocation(HYBRID **phHybrid,
    Int32 noBands,
    const Int32 *pResolution,
    Int32 **pPtr);

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
; END
----------------------------------------------------------------------------*/
#endif  /* PS_HYBRID_FILTER_BANK_ALLOCATION_H */
