#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>
#include <windows.h>
#include<iostream>

using namespace std;
using namespace cv;
 
int _tmain(int argc, _TCHAR* argv[])
	{
	IplImage* src = cvLoadImage("skytree3.jpg", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR);

	IplImage* dst = cvLoadImage("blur_skytree.jpg", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR);

	IplImage* mask = cvLoadImage("image.jpg", CV_LOAD_IMAGE_GRAYSCALE);


	cvCopy(src, dst, mask);
	cvNamedWindow ("composite image", CV_WINDOW_AUTOSIZE);
	cvShowImage ("composite image", dst);
	cvWaitKey (0);
	cvDestroyWindow ("composite image");
	cvSaveImage("dst.jpg",dst);
	cvReleaseImage(&src);
	cvReleaseImage(&dst);
	cvReleaseImage(&mask);

}