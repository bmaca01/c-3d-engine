#ifndef VECTOR_H
#define VECTOR_H

#define PI 3.1415926535
#define RECIPROCAL_180 1 / 180.0

struct Vector {
    float x;
    float y;
    float z;
};

struct Vector V_new();
void set_v(struct Vector *v, float x, float y, float z);

void add_vector_to_vector(struct Vector *op1, struct Vector *op2);
void sub_vector_from_vector(struct Vector *op1, struct Vector *op2);

void v_rotate_xy(struct Vector *v, float theta);
void v_rotate_yz(struct Vector *v, float theta);
void v_rotate_xz(struct Vector *v, float theta);
void v_scale(struct Vector *v, float s0, float s1, float s2);
#endif