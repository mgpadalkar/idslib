# idslib

This library aims to implement basic features from `cv::VideoCapture`, for most basic use cases it can be dropped into the place of OpenCV's corresponding class.

In its current state, the library implements a most of the basic `get` properties and the simple `retrieve` and `grab` pipeline.


# Installation

Ensure to include `IDSVideoCapture.h` in your include path and also compile `IDSVideoCapture.cpp`.

# Compile

```g++ -std=c++11 main.cpp IDSVideoCapture.cpp -o IDSVideoCapture `pkg-config --cflags --libs opencv` -lueye_api```

Tested with IDS Software Suite 4.92 (Linux 64 bit) on Ubuntu 16.04
