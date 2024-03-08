/*
 *
 *  Job list structure
 *
 * 	Author: 	Patryk Zabkiewicz
 * 	Date:		24.12.2015
 * 	Email:		pzabkiewicz@gmail.com
 *
*/

#ifndef JOB_LIST_H
#define JOB_LIST_H

#include "job.h"

/* Job list structure */
typedef struct job_list_ {
	JOB job;
	int32 jobs_count;
} JOB_list;

/* Add job to list */
void * add_job_to_list(JOB_list * list, JOB * j);

/* Remove job from list */
void * remove_job_from_list(JOB_list * list, JOB * j);

/* Find the given job in the list */
void * find_job_in_list(JOB_list * list, JOB * j);

/* Check if the list contains the job */
void * contains_job(JOB_list * list, JOB * j);

/* Compare two given jobs */
int compare_jobs(JOB * a, JOB * b);

#endif // JOB_LIST_H
