#ifndef FUNCTION_H
#define FUNCTION_H

#include "basic_function.h"

int deleteOneRecord(struct record_list * list, int register_id);

int modifyOneRecord(struct record_list * list, struct patient pa, struct doctor * doc, struct treatment tm, int register_id);

int searchByDepartment(struct record_list * list, const char department[20]);

int searchByDoctor(struct record_list * list, int worker_id);

int searchByPatient(struct record_list * list, const char name[20], int age);

int printRecordDuringTime(struct record_list * list, int start_m, int start_d, int end_m, int end_d);

#endif