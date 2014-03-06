#include <opencv.hpp>
using namespace cv;
int main()
{
	IplImage* img = cvLoadImage("lena.jpg");
	cvNamedWindow("Hello OpenCV",CV_WINDOW_AUTOSIZE );
	cvShowImage("Hello OpenCV", img );
	cvWaitKey(0);
	cvReleaseImage( &img );
	cvDestroyWindow("Hello OpenCV");
}