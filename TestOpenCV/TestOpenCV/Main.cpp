#include <iostream>

#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;

int main(int argv, char* argc)
{
    cout << "Hello World!\n"; 
	Mat A;	
	A = Mat::zeros(100, 100, CV_8U);
	namedWindow("testWindow", WINDOW_AUTOSIZE);
	imshow("testWindow", A);
	waitKey(0);


	return 0;


}