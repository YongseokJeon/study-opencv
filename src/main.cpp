#include <iostream>
#include <vector>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

void basic_example(void);
void mat_example(void);

int main(int argc, char** argv)
{
  std::cout << "Hello, world!" << std::endl;

  // basic_example();
  mat_example();

  return 0;
}

void basic_example(void)
{
  std::string image_path = "./resource/sprigatito.jpeg";
  Mat img = imread(image_path, IMREAD_COLOR);
  if (img.empty())
  {
      std::cout << "Could not read the image: " << image_path << std::endl;
      return;
  }
  imshow("Display window", img);
  int k = waitKey(0);  // Wait for a keystroke in the window
  if (k == 's')
  {
      imwrite("sprigatito.png", img);
  }
}

void mat_example(void)
{
  Mat matrix1(2, 2, CV_8UC3, Scalar(0, 0, 255));
  std::cout << "matrix1 = " << std::endl << " " << matrix1 << std::endl;
  
  int sz[3] = {2, 2, 2};
  Mat matrix2(2, sz, CV_8UC(1), Scalar::all(1));
  // Print is support only for 2-D matrix
  // std::cout << "matrix2 = " << std::endl << " " << matrix2 << std::endl; 

  matrix1.create(4, 4, CV_8UC2);
  std::cout << "matrix1 = " << std::endl << " " << matrix1 << std::endl;
}