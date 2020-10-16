#ifndef TPSLEDS_H
#define TPSLEDS_H

#define MNAME "tpsleds"
#define M_LIC "GPL v2"
#define M_AUT "Dvorkin Dmitry dvorkin@tibbo.com"
#define M_NAM "Tibbo TPSLeds module"
#define M_ORG "Tibbo Tech."
#define M_CPR "(C) 2020"

#define TPS_MAX_LEDS 5

#include "tpsleds_syshdrs.h"
#include "tpsleds_defs.h"

#include "tpsleds_procfs.h"

// gpio1_27 - data
#define DV_BLED_DT 59
// gpio1_25 - front
#define DV_BLED_FT 57

void tps_leds_set( unsigned char _mask);

#endif // TPSLEDS_H
