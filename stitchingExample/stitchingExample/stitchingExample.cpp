// stitchingExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <vector>
#include "Stitcher.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>


int main()
{
	// Read the images
	cv::Mat img1 = cv::imread("../images/img1.jpeg", -1);
	cv::Mat img2 = cv::imread("../images/img2.jpeg" -1);
	if (img1.empty() || img2.empty())
	{
		std::cout << "Image not found or read. " << std::endl;
		Sleep(5000);
		return 0;
	}

	// Create a vector of images
	std::vector<cv::Mat> imagesVector;
	imagesVector.push_back(img1);
	imagesVector.push_back(img2);

	// Create the stitcher
	CustomStitcher* stitcher = new CustomStitcher(imagesVector);

	cv::imshow("Image 1", img1);
	cv::waitKey(1000);

    return 0;
}

