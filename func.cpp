#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int image_view(){
    Mat img;
    img = imread("./images/lena.jpg");

    if(img.empty()){
        cerr << "Image load failed!" << endl;
        return -1;
    }

    namedWindow("image");
    imshow("image",img);

    waitKey();
    return 0;
}