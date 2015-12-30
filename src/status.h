/*
 *
 *  Status class
 *
 *  Holds the record of status history
 *
 * 	Author: 	Patryk Zabkiewicz
 * 	Date:		24.12.2015
 * 	Email:		pzabkiewicz@gmail.com
 *
*/

#ifndef STATUS_H
#define STATUS_H

#include "typedefs.h"
#include "datetime.h"

/* 
	Status history record for a job 
*/
typedef struct status_ {
  	int32 id;			   		/* Identifier */
  	DATETIME * add_date;   		/* Date of creation of the status */
	JOB_STATUS status_code;		/* Code of the status marked in history */
} STATUS;

#endif // STATUS_H
