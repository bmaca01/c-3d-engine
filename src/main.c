#include <stdio.h>
#include <math.h>

#include "point.h"

int main() {
    struct Point p1 = P_new();
    struct Point p2 = P_new();
    struct Vector v1 = V_new();
    struct Vector v2 = V_new();

    set_p(&p1, 1, 2, 1);
    set_p(&p2, 0, 4, 4);
    set_v(&v1, 2, 0, 0);

    draw_point(&p1);
    draw_point(&p2);

    sub_point_from_point(&v2, &p2, &p1);
    add_vector_to_vector(&v2, &v1);

    add_vector_to_point(&v1, &p1);
    draw_point(&p1);

    sub_vector_from_point(&v2, &p2);
    draw_point(&p2);

    return 0;
}

void draw_point(struct Point *pp) {
    printf("(%f, %f, %f)\n", pp->x, pp->y, pp->z);
    return;
}

struct Point P_new() {
    struct Point p;
    p.x = 0.0;
    p.y = 0.0;
    p.z = 0.0;
    return p;
}

struct Vector V_new() {
    struct Vector v;
    v.x = 0.0;
    v.y = 0.0;
    v.z = 0.0;
    return v;
}

void set_p(struct Point *p, float x, float y, float z) {
    p->x = x;
    p->y = y;
    p->z = z;
    return;
}

void set_v(struct Vector *v, float x, float y, float z) {
    v->x = x;
    v->y = y;
    v->z = z;
    return;
}

void mov_point(struct Point *src, struct Point *dst) {
/*  copy [src] to [dst]
    op2 <= op1
*/
    set_p(dst, src->x, src->y, src->z);
}

void add_vector_to_point(struct Vector *op1, struct Point *op2) {
/*  
    op2 <= op2 + op1
*/
    op2->x += op1->x;
    op2->y += op1->y;
    op2->z += op1->z;
    return;
}

void sub_vector_from_point(struct Vector *op1, struct Point *op2) {
/*  
    op2 <= op2 - op1
*/
    op2->x -= op1->x;
    op2->y -= op1->y;
    op2->z -= op1->z;
    return;
}

void sub_point_from_point(struct Vector *dst, struct Point *op1, struct Point *op2) {
/*  dst <= op2 - op1
    in the form dst <- op2 - op1 
    to be consistent with the form of other functions
*/

    dst->x = op2->x - op1->x;
    dst->y = op2->y - op1->y;
    dst->z = op2->z - op1->z;
    return;
}

void add_vector_to_vector(struct Vector *op1, struct Vector *op2) {
    op2->x += op1->x;
    op2->y += op1->y;
    op2->z += op1->z;
    return;
}

void sub_vector_from_vector(struct Vector *op1, struct Vector *op2) {
    op2->x -= op1->x;
    op2->y -= op1->y;
    op2->z -= op1->z;
    return;
}

float deg_to_rad(float deg) {
    return deg * RECIPROCAL_180 * PI;
}

void v_rotate_xy(struct Vector *v, float theta) {

}

void v_rotate_yz(struct Vector *v, float theta) {

}

void v_rotate_xz(struct Vector *v, float theta) {

}

void v_scale(struct Vector *v, float s0, float s1, float s2) {

}
