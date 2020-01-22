#include "opencv2/opencv.hpp"
#include "func.h"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    cout << "Hello OpenCV" << CV_VERSION << endl;

    //image_view();
    //camera_in();
    //video_in();
    //drawLines();
    //drawPolys();
    //mouse_event();
    //trackbar_event();
    //time_inverse();
    //perspective_test();
    backproj();
    return 0;
}