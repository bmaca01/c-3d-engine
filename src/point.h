#ifndef POINT_H
#define POINT_H

#include "vector.h"

struct Point {
    float x;
    float y;
    float z;
};

struct Point P_new();

void set_p(struct Point *p, float x, float y, float z);

void mov_point(struct Point *op1, struct Point *op2);
void add_vector_to_point(struct Vector *op1, struct Point *op2);
void sub_vector_from_point(struct Vector *op1, struct Point *op2);
void sub_point_from_point(struct Vector *dst, struct Point *op1, struct Point *op2);
void draw_point(struct Point *pp);
#endif
