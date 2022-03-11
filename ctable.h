/*
 * ctable.h
 *
 *  Created on: Sep 29, 2015
 *      Author: garbini
 */

#ifndef CTABLE_H_
#define CTABLE_H_

#endif /* CTABLE_H_ */

#include <stdio.h>
#include "T1.h"

struct table {
    char *e_label;    // entry label label
    int e_type;             // entry type (0-show; 1-edit
    double value;            // value
};

int		ctable(char *TableTitle, struct table *t, int nval);
void	upsub(struct table *a_table);
void    edt1();
void    helpmsg(void);
void	update();
