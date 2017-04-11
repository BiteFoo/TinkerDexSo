package com.demo.my;

import android.content.Context;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import com.tencent.tinker.lib.library.TinkerLoadLibrary;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
//        load();
    }
/**
 * demo4经过 upx3.93压缩，使用ollvm混淆过
 *
 * */
//    public void load()
//    {
//        TinkerLoadLibrary.installNavitveLibraryABI(mContext, "armeabi");
//        System.loadLibrary("demo4");
////        System.loadLibrary("demo4");
//        stringFromJNI2();
//    }
//    public native void stringFromJNI2();
}
