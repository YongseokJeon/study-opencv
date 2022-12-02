# Build OpenCV

test build option

```shell
cmake -Bout -DCMAKE_BUILD_TYPE=Debug -DOPENCV_EXTRA_MODULES_PATH=opencv_contrib/modules/dnn_superres -DBUILD_ZLIB=OFF opencv
```

## Build error

### Error #1

```
[  0%] Built target opencv_highgui_plugins
Consolidate compiler generated dependencies of target libopenjp2
[  2%] Built target libopenjp2
Consolidate compiler generated dependencies of target carotene_objs
[  5%] Built target carotene_objs
Consolidate compiler generated dependencies of target tegra_hal
[  5%] Built target tegra_hal
[  5%] Built target opencv_videoio_plugins
Consolidate compiler generated dependencies of target ittnotify
[  6%] Built target ittnotify
Consolidate compiler generated dependencies of target zlib
[  8%] Built target zlib
Consolidate compiler generated dependencies of target opencv_core
[ 14%] Built target opencv_core
Consolidate compiler generated dependencies of target opencv_imgproc
[ 18%] Built target opencv_imgproc
Consolidate compiler generated dependencies of target libjpeg-turbo
[ 21%] Built target libjpeg-turbo
Consolidate compiler generated dependencies of target libtiff
[ 24%] Built target libtiff
Consolidate compiler generated dependencies of target libwebp
[ 32%] Built target libwebp
Consolidate compiler generated dependencies of target libpng
[ 33%] Built target libpng
Consolidate compiler generated dependencies of target opencv_imgcodecs
make[2]: *** No rule to make target `zlib', needed by `lib/libopencv_imgcodecs.4.6.0.dylib'.  Stop.
make[1]: *** [modules/imgcodecs/CMakeFiles/opencv_imgcodecs.dir/all] Error 2
make: *** [all] Error 2
```

비슷한 이슈가 존재함
[(링크)](https://github.com/opencv/opencv/issues/21389)

시스템 zlib을 쓰도록 수정

cmake configure에 `-DBUILD_ZLIB=OFF` 추가

### Error #2

ffmpeg 관련 빌드 이슈

역시나 동일한 이슈 존재 [(링크)](https://github.com/opencv/opencv/issues/22418)

해결 방법이 나와있는데, 이를 적용한 브랜치를 사용하려면 포크가 필요해보임

### Error #3

예제 빌드 시 OpenEXR 오류

필요 없을 것 같으니 configure 단계에서 꺼주고 빌드하도록 함

## 포기한 것

cmake 안에서 빌드해서 모든 걸 다 하고 싶었지만... configure 관련해서 쉽지 않은 것으로 보임

나중에는 pre-built library 로 사용하면 어떨까?

# Command

``` 
cmake -Bout -DCMAKE_BUILD_TYPE=Debug -DOPENCV_EXTRA_MODULES_PATH=opencv_contrib/modules/dnn_superres -DBUILD_ZLIB=OFF -DBUILD_OPENEXR=OFF -DBUILD_SHARED_LIBS=OFF -DBUILD_TESTS=OFF -DBUILD_DOCS=OFF -DBUILD_EXAMPLES=OFF -DBUILD_PERF_TESTS=OFF -DBUILD_opencv_gapi=OFF -DCMAKE_CXX_STANDARD=14 -DCMAKE_INSTALL_PREFIX=install opencv
cmake -Bout -DCMAKE_BUILD_TYPE=Debug -DOPENCV_EXTRA_MODULES_PATH=opencv_contrib/modules/dnn_superres -DBUILD_ZLIB=OFF -DWITH_OPENEXR=OFF -DBUILD_SHARED_LIBS=OFF -DBUILD_TESTS=OFF -DBUILD_DOCS=OFF -DBUILD_EXAMPLES=OFF -DBUILD_PERF_TESTS=OFF -DBUILD_opencv_gapi=OFF -DCMAKE_CXX_STANDARD=14 -DCMAKE_INSTALL_PREFIX=install opencv
```

# Reference

- https://docs.opencv.org/4.6.0/d0/d3d/tutorial_general_install.html
- https://docs.opencv.org/4.6.0/d0/db2/tutorial_macos_install.html
- https://docs.opencv.org/4.6.0/db/d05/tutorial_config_reference.html