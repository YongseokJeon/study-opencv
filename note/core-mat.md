# Core - Mat

OpenCV는 이미지 처리를 위한 라이브러리이므로 이미지를 다루는 인터페이스가 존재함

OpenCV가 오래된 라이브러리기 때문에 (시작이 2001년경) 초기에는 lplImage 라는 C 기반의 인터페이스를 사용했는데 
어느 C 인터페이스가 그렇듯 메모리 관리를 유저가 해야하는 문제점이 있었음

OpenCV 2.0 이 되면서 C++ interface를 추가해서 이를 wrapping 해서 사용하는 방식을 취함

이게 바로 `Mat` 이라는 클래스로 자동으로 메모리 관리를 해줌

# Reference

- https://docs.opencv.org/4.6.0/d3/d63/classcv_1_1Mat.html
- https://docs.opencv.org/4.6.0/d6/d6d/tutorial_mat_the_basic_image_container.html