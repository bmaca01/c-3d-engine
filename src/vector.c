/***
 * implementation of vector.h header
*/

#include <math.h>
#include "point.h"

struct Vector V_new() {

    struct Vector v;
    v.x = 0.0;
    v.y = 0.0;
    v.z = 0.0;
    return v;
}

void set_v(struct Vector *v, float x, float y, float z) {

    v->x = x;
    v->y = y;
    v->z = z;
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

    float theta_rad = deg_to_rad(theta);
    float cos_theta = cos(theta_rad);
    float sin_theta = sin(theta_rad);

    /* calculate new x and y values after rotation */
    float x_new = v->x * cos_theta - v->y * sin_theta;
    float y_new = v->x * sin_theta + v->y * cos_theta;

    /* assign vector components to new values */
    v->x = x_new;
    v->y = y_new;

    return;
}

void v_rotate_yz(struct Vector *v, float theta) {

    float theta_rad = deg_to_rad(theta);
    float cos_theta = cos(theta_rad);
    float sin_theta = sin(theta_rad);

    /* calculate new y and z values after rotation */
    float y_new = v->y * cos_theta - v->z * sin_theta;
    float z_new = v->y * sin_theta + v->z * cos_theta;

    /* assign vector components to new values */
    v->y = y_new;
    v->z = z_new;

    return;
}

void v_rotate_xz(struct Vector *v, float theta) {

    float theta_rad = deg_to_rad(theta);
    float cos_theta = cos(theta_rad);
    float sin_theta = sin(theta_rad);

    /* calculate new x and z values after rotation */
    float x_new = v->x * cos_theta + v->z * sin_theta;
    float z_new = -(v->y * sin_theta) + v->z * cos_theta;

    /* assign vector components to new values */
    v->x = x_new;
    v->z = z_new;

    return;
}

void v_scale(struct Vector *v, float s0, float s1, float s2) {

    v->x *= s0;
    v->y *= s1;
    v->z *= s2;
    return;
}