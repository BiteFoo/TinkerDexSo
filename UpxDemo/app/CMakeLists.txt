# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds it for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             # Associated headers in the same location as their source
             # file are automatically included.
             src/main/cpp/native-lib.cpp
             src/main/cpp/array_c.cpp)

#添加外部库引用，方便调用函数
include_directories(D:\\Android\\upx\\jni)
#添加so库文件

add_library(
            #文件名字
            demo1
            #共享库文件
             SHARED
             #IMPORTED表示不编译
             IMPORTED
             )
#设置属性
set_target_properties(
                #需要load的so的名字
                 demo1
                 #设置属性
                  PROPERTIES
                  #load 的路径
                  IMPORTED_LOCATION
                #还需要增加目录索引
                ${CMAKE_CURRENT_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libdemo1.so
)
# Searches for a specified prebuilt library and stores the path as a
# variable. Because system libraries are included in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

#*************
add_library(
            #文件名字
            demo2
            #共享库文件
             SHARED
             #IMPORTED表示不编译
             IMPORTED
             )
 #设置属性
set_target_properties(
                             #需要load的so的名字
                              demo2
                              #设置属性
                               PROPERTIES
                               #load 的路径
                               IMPORTED_LOCATION
                             #还需要增加目录索引
                             ${CMAKE_CURRENT_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libdemo2.so
             )



#****************


find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in the
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       native-lib
                       #需要被load的so名字,压缩后的so，不能被加载起来？
                      #demo2
                      #没有被压缩的So可以被加载起来
                        demo1
                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )
