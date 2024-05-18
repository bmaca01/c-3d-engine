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