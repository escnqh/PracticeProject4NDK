package com.ntanougat.practiceproject4ndk;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import com.ntanougat.practiceproject4ndk.NDKHelper.NDKHelper;

public class MainActivity extends Activity implements View.OnClickListener{

    private TextView result_tv;
    private EditText fnum;
    private EditText snum;
    private Button add_btn;
    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
//        System.loadLibrary("Test4CPP");  //只添加需要使用的SHARE库不然不能识别
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        result_tv = findViewById(R.id.result_tv);
        fnum= findViewById(R.id.firstNum);
        snum= findViewById(R.id.secNum);
        add_btn= findViewById(R.id.add_btn);
        add_btn.setOnClickListener(this);

    }

    @Override
    public void onClick(View view) {
        int a=0;
        int b=0;
        if (fnum.getText()!=null) a=Integer.parseInt(fnum.getText().toString());
        if (snum.getText()!=null) b=Integer.parseInt(snum.getText().toString());
        NDKHelper ndkHelper=new NDKHelper();
        int c=ndkHelper.addNum(a,b);
        result_tv.setText(c+"");
    }
}
