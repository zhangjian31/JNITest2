package com.jeryzhang.common.jnttest2;

public class StringUtil {
    static {
        System.loadLibrary("StringUtil");
    }

    public native String getStr();
}
