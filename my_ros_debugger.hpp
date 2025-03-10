/////////////////////////////////////////////////////
// header files for my C++ ROS debugger
/////////////////////////////////////////////////////


#ifndef MY_ROS_DEBUGGER_H
#define MY_ROS_DEBUGGER_H


#include <ros/ros.h>

#include <Eigen/Eigen>
#include <Eigen/Core>
#include <Eigen/Dense>

namespace my_ros_utility{


// Check if a Matrix3d has any Nan element
inline bool checkIsNan(const Eigen::Matrix3d& m){
    if(m.array().isNaN().any())
        return true;
    else 
        return false;
}


}

#endif
