/* 
This software was developed at the National Institute of Standards and
Technology by employees of the Federal Government in the course of their
official duties. Pursuant to title 17 Section 105 of the United States
Code this software is not subject to copyright protection and is in the
public domain. NIST RCS intelligent mobility software is an experimental
system. NIST assumes no responsibility whatsoever for its use by other
parties, and makes no guarantees, expressed or implied, about its
quality, reliability, or any other characteristic. We would appreciate
acknowledgement if the software is used. This software can be
redistributed and/or modified freely provided that any derivative works
bear some notice that they are derived from it, and any modified
versions bear some notice that they have been modified.
*/ 

// Prevent Multiple Inclusion
#ifndef CANESTA_STS_HH
#define CANESTA_STS_HH

// Include Files
#include "rcs.hh" 	// Common RCS definitions
#include "nmlOffsets.hh" //CANESTA_BASE
#include "LadarData.hh"

#define CanestaSts_name  "CanestaSts"

// Define the integer type ids.
typedef enum {
  CANESTA_STATUS_TYPE = CANESTA_STS_BASE,
} CANESTAStsIdEnum;

// Define the NML Message Classes

// Status Class
class CANESTA_STATUS : public RCS_STAT_MSG
{
public:
  // Normal Constructor
  CANESTA_STATUS();
  
  // CMS Update Function
  void update(CMS *);
  
  /* determine whether the CANESTA result is working or not.*/
  time_tracker tt;
  float range_offset;

  struct LadarOptionalInfo opt;
};

//! Standard NML format routine
int CanestaSts_format(NMLTYPE type, void *buf, CMS *cms);
//! standard NML type lookup routine
const char *CanestaSts_symbol_lookup(long type);

#endif 	// MYNAM_HH
