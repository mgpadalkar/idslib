#include "IDSVideoCapture.h"
#include "opencv2/opencv.hpp"

using namespace cv;

int main(int argc, char* argv[])
{
  IDSVideoCapture cap(0);

  if(!cap.isOpened())  // check if we succeeded
  {
    std::cout << "Unable to open camera\n";
    return -1;
  }

  Mat edges;
  namedWindow("edges", WINDOW_NORMAL);
  for(;;)
  {
    Mat frame;
    cap >> frame; // get a new frame from camera
    cvtColor(frame, edges, CV_BGR2GRAY);
    GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
    Canny(edges, edges, 0, 30, 3);
    imshow("edges", edges);
    if(waitKey(30) >= 0) break;
  }
  // the camera will be deinitialized automatically in VideoCapture destructor

  return(0);
}
