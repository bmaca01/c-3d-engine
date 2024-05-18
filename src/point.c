/***
 * implementation of point.h header
*/
#include <stdio.h>
#include "point.h"

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

void set_p(struct Point *p, float x, float y, float z) {

    p->x = x;
    p->y = y;
    p->z = z;
    return;
}

void mov_point(struct Point *src, struct Point *dst) {
/*  copy [src] to [dst]
    op2 <= op1
*/

    set_p(dst, src->x, src->y, src->z);
}

void add_vector_to_point(struct Vector *op1, struct Point *op2) {
    /*  op2 <= op2 + op1 */

    op2->x += op1->x;
    op2->y += op1->y;
    op2->z += op1->z;
    return;
}

void sub_vector_from_point(struct Vector *op1, struct Point *op2) {
/*  op2 <= op2 - op1 */

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