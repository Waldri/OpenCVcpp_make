#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace std;

int main(){
    cout << "ola" << endl;

    cv::Mat image;
    image = cv::imread("./yoda.jpg", cv::IMREAD_ANYCOLOR);
    cv::imshow("TESTE", image);
    cv::waitKey(0);
    return 0;
}