#include "job_list.h"

/* Add job to list */
void * add_job_to_list(JOB_list * list, JOB * j) {
	j->next = list;
	list->jobs_count++;
}

/* Remove job from list */
void * remove_job_from_list(JOB_list * list, JOB * j) {
	
	list->jobs_count--;
}

/* Find the given job in the list */
void * find_job_in_list(JOB_list * list, JOB * j) {
	
}

/* Compare two given jobs */
int compare_jobs(JOB * a, JOB * b) {
	return * a
}
