/**********************************************************************
   File    task_1.cpp
   Author  abe taiki (19w)
   Environment    ROS_inigo
   OS       Ubuntu 14.04
   StartDay 2019/4/11
**********************************************************************/


/**********************************************************************
   Include Libraries
**********************************************************************/
#include <opencv/cv.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>


/**********************************************************************
   Declare variables
**********************************************************************/


/**********************************************************************
   Globle
**********************************************************************/



/**********************************************************************
   Proto_type_Declare functions
**********************************************************************/



/**********************************************************************
   Main
**********************************************************************/
int main(int argc, char** argv){


  /* imageというcv::Mat型の変数を作る */


  /* sample.pngを読み込む(pathは各自の環境に合わせてください) */


  /* 生データを表示してみよう */


  /* グレースケール変換をしてみよう */


  /* 二値化をしてみよう */


  /* エッジ検出をしてみよう */


  /* 画像の大きさを取得してみよう(行と列) */


  /* ちょっと応用　hsv変換をしてから緑色抽出*/


  cv::waitKey(0);
  return 0;
}
