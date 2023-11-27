#include <math.h>

char robot_move(int xs[], int ys[], int num_points, int area_radius, int xt, int yt){
    double s;
    for (int i = 0; i<num_points; i++){
        s = sqrt((xs[i] - xt)*(xs[i] - xt) + (ys[i]-yt)*(ys[i]-yt));
        if (s<=area_radius){
            return 1;
            break;
        }
    }
    return 0;
}