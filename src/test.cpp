#include <iostream>
#include <vector>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

int main(int argc, char** argv)
{
  std::cout << "Hello, world!" << std::endl;

  std::string image_path = "./resource/sprigatito.jpg";
  Mat img = imread(image_path, IMREAD_COLOR);
  if (img.empty())
  {
      std::cout << "Could not read the image: " << image_path << std::endl;
      return 1;
  }
  imshow("Display window", img);
  int k = waitKey(0);  // Wait for a keystroke in the window
  if (k == 's')
  {
      imwrite("starry_night.png", img);
  }

  return 0;
}