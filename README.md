# TinkerDexSo
关于使用tinker框架做热更新

jni目录：
主要是做MyUpxDemo的so原码，测试使用tinker进行so和dex文件的热更新操作
MyUpxDemo:测试tinker的热更新，包括so和dex文件的热更新
UpxDemo：测试使用upx压缩之后，对于so的性能影响，
主要是在指定的C/C++原码夏增加 void _init(void){}，使用readelf -d xx.so 找到INIT段即可
JNIDemo:
测试使用as2.2.3开发jni
