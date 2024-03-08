/***************************************
 *
 *  Run list implementation and structure
 * 
 *	Keeps the records about the history of executed runs
 *
 * 	Author: 	Patryk Zabkiewicz
 * 	Date:		24.12.2015
 * 	Email:		pzabkiewicz@gmail.com
 *
*/

#ifndef RUN_LIST_H
#define RUN_LIST_H

#include "datetime.h"

/* Single record (element) in the list of runs */
typedef struct _elem_run_list {
	int32 id;							/* Unique identifier */
	DATETIME * create_time;				/* Time of occurance */
	DATETIME * start_time;				/* When job has started a run */
	DATETIME * end_time;				/* When job has finished a run */
	USER * user;
	
	struct _elem_run_list * next;		/* Next element in the list */
} elem_run_list;

/* List structure */
typedef struct _run_list {
	elem_run_list * elem;			/* Begin of the list */
	int32 elem_count;				/* Number of elements in list */
} RUN_list;

void * add_run_list_elem();
void * remove_run_list_elem();
elem_run_list * find_run_list_elem();
int compare_run_list_elem(elem_run_list * A, elem_run_list * B);


#endif // RUN_LIST_H
