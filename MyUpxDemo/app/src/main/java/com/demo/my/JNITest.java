package com.demo.my;

import android.content.Context;
import android.widget.Toast;

import com.tencent.tinker.lib.library.TinkerLoadLibrary;

/**
 * Created by John.Lu on 2017/4/11.
 */

public class JNITest {
  Context mContext;
    public  JNITest(Context context)
    {
        mContext  = context;
    }
    public void load()
    {
        TinkerLoadLibrary.installNavitveLibraryABI(mContext, "armeabi");
        System.loadLibrary("demo1");
//        System.loadLibrary("demo4");
        Toast.makeText(mContext,"patch2",Toast.LENGTH_SHORT).show();
        stringFromJNI2();
    }
    public native void stringFromJNI2();

}
