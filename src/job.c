#include "job.h"

JOB * new_job() {
	JOB * njob = NULL;
	njob = malloc(sizeof(JOB));

	return njob;
}

