#include "yasl-stdi-io.h"

int load_YASL_io(struct YASL_State *S) {
	struct YASL_Object *io = YASL_Table();
	YASL_declglobal(S, "io");
	YASL_pushobject(S, io);
	YASL_setglobal(S, "io");

	return YASL_SUCCESS;
}
