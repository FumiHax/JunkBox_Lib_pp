# JunkBox_Lib++
C++ Static Library for VC++

if you want to use it on Linux, please use C++Lib in JunkBox_Lib

## DownLoad
```
git clone https://github.com/JunkBox-Library/JunkBox_Libpp.git JubkBox_Lib++
```

## Needed External Tool
### Visual Studio Comminity 2022 (C++, MFC)
* MFC is needed for **JunkBox_Win_Lib** later.
   * https://visualstudio.microsoft.com/en-us/vs/community/

## Recommended External Libraries
* of course, you can use another libraries (requires JunkBox_Lib++_2022.vcxproj configuration change)
### OpenJpeg
* x64: **openjpeg-v2.5.0-windows-x64.zip**
  * https://github.com/uclouvain/openjpeg/releases/
* x86: **openjpeg-v2.5.0-windows-x86.zip**
  * https://github.com/uclouvain/openjpeg/releases/

### Jpeg
* **jpegsr9e.zip** (source code)
  * https://www.ijg.org/files
  * [how to compile](https://github.com/JunkBox-Library/JunkBox_Libpp/wiki/libjpeg)
  * binary is ...

### Zlib
* **zlib-1.3.tar.gz** (source code)
   * https://www.zlib.net/
   * compile using cmake-gui and VS Community
   * binary is ...

### Location of the folders (default)
* jpeg-9e
* JunkBox_Lib++
* openjpeg-v2.5.0-windows-x64
* openjpeg-v2.5.0-windows-x86
* zlib-1.3
  
## Compile
* double click **JunkBox_Lib++_2022.vcxproj**
* build targets

### Lib Pragma for VC++
#### OpenJpeg (GraphLib/Jpeg2KTool.h)
* < v2.0
  * Release: **OpenJPEG.lib**
  * Debug: **OpenJPEGd.lib**
* \>=2.0
  * **openjp2.lib**
#### Jpeg (GraphLib/JpegTool.h)
* **libjpeg.lib**
#### Zlib (ExtendLib/xLib/gz_tool.h)
* Release: **zlib.lib**
* Debug: **zlibd.lib**
#### OpenCV (GraphLib/OpenCVTool.h)
* Release: **opencv_core242.libb**, **opencv_imgproc242.lib**, **opencv_objdetect242.lib**
* Debug: **opencv_core242d.libb**, **opencv_imgproc242d.lib**, **opencv_objdetect242d.lib**

## Documents
* [Wiki](https://polaris.star-dust.jp/pukiwiki/?JunkBox_Lib%2B%2B)
* [Doxygen](https://polaris.star-dust.jp/doxygen/JunkBox_Lib%2B%2B/)
    
