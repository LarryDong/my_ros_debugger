/////////////////////////////////////////////////////
// header files for my C++ ROS debugger
/////////////////////////////////////////////////////


#ifndef MY_ROS_DEBUGGER_H
#define MY_ROS_DEBUGGER_H


#include <ros/ros.h>

#include <Eigen/Eigen>
#include <Eigen/Core>
#include <Eigen/Dense>

#include <iostream>
#include <string>
#include <unordered_map>

// #define DEBUG_INFO



namespace my_ros_utility{


// Check if a Matrix3d has any Nan element
inline bool checkIsNan(const Eigen::Matrix3d& m){
    if(m.array().isNaN().any())
        return true;
    else 
        return false;
}

// 函数：根据颜色名称为输入字符串增加颜色
inline std::string color_cout(const std::string& input, const std::string& color="red") {

    // 获取对应颜色的ANSI代码
    std::string colorCode;
    if (color == "red") {
        colorCode = "\033[31m";
    } else if (color == "green") {
        colorCode = "\033[32m";
    } else if (color == "yellow") {
        colorCode = "\033[33m";
    } else if (color == "blue") {
        colorCode = "\033[34m";
    } else if (color == "purple") {
        colorCode = "\033[35m";
    } else if (color == "cyan") {
        colorCode = "\033[36m";
    } else if (color == "white") {
        colorCode = "\033[37m";
    } else {
        colorCode = "\033[0m";  // 默认颜色
    }
    
    // 用颜色代码包裹输入字符串
    std::string coloredInput = colorCode + input + "\033[0m"; // "\033[0m" 是重置颜色

    std::cout << coloredInput << std::endl;

}


}

#endif
