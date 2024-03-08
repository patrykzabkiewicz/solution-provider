#ifndef CHANGESET_H
#define CHANGESET_H

#include "typedefs.h"

enum CHANGETYPE {
	
}

typedef struct _changeset {
	int32 id;
	CHANGETYPE type;
	uint8 * changeset_hash;
} CHANGESET;


CHANGESET * chngset;

#endif // CHANGESET_H