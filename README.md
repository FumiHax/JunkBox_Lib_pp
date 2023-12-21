# JunkBox_Lib++
C++ Static Library for VC++

## DownLoad
```
git clone https://github.com/JunkBox-Library/JunkBox_Libpp.git JubkBox_Lib++
```

## Needed External Tool/SDK
### Visual Studio Comminity (C++, MFC)
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

### Zlib
* **zlib-1.2.11-binaries-win32-release.zip**
* **zlib-1.2.11-binaries-x64-release.zip**
* **zlib-1.2.11-headers.zip**
   * https://freeswitch.org/bamboo/browse/SP-ZW-1/artifact/shared/zlib-windows-binaries-zip/
   * unzip the three zip files to create a folder named **zlib-1.2.11**

### Location of the folders (default)
* jpeg-9e
* JunkBox_Lib++
* openjpeg-v2.5.0-windows-x64
* openjpeg-v2.5.0-windows-x86
* zlib-1.2.11

## Compile
* double click **JunkBox_Lib++_2022.vcxproj**
* build targets

