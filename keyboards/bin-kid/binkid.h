#ifndef BINKID_H
#define BINKID_H

#include "quantum.h"

#define BIN_KID( \
	k00, k01, \
	k10, k11, \
) \
{ \
	{ k00, k01 }, \
	{ k10, k11 }
}

#define KEYMAP BIN_KID

#endif
