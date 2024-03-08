#include "job.h"

JOB * new_job() {
	JOB * njob = NULL;
	njob = malloc(sizeof(JOB));

	return njob;
}

JOB * copy_job(JOB * old_job) {
	
	/* Allocate new job */
	JOB * new_job = malloc(sizeof(JOB));
	
	/* Copy over all of the data */
	new_job.id = old_job.id;
	
	return new_job;
}

void * destroy_job(JOB * old_job) {
	
}
