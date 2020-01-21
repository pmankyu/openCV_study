#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void camera_in()
{
	VideoCapture cap(2);

	if (!cap.isOpened()) {
		cerr << "Camera open failed!" << endl;
		return;
	}

	cout << "Frame width: " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
	cout << "Frame height: " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << endl;

	Mat frame, inversed;
	while (true) {
		cap >> frame;
		if (frame.empty())
			break;

		inversed = ~frame;

		imshow("frame", frame);
		imshow("inversed", inversed);

		if (waitKey(10) == 27) // ESC key
			break;
	}

	destroyAllWindows();
}

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