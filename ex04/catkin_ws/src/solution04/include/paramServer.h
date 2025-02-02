#ifndef SOLUTION04_INCLUDE_PARAMSERVER_H
#define SOLUTION04_INCLUDE_PARAMSERVER_H

#include "utils.h"

class ParamServer {
   public:
    ParamServer();
    ~ParamServer();

   protected:
    ros::NodeHandle nh_;

    // vehicle frame to camera frame
    Eigen::Matrix3d C_c_v_;
    Eigen::Vector3d rho_v_c_v_;

    // stero camera intrinsics
    double b_;
    double cu_;
    double cv_;
    double fu_;
    double fv_;

    // covariance
    Eigen::Vector3d v_var_;
    Eigen::Vector3d w_var_;
    Eigen::Vector4d y_var_;

    // landmarks
    Eigen::Matrix<double, 20, 3> worldFrameLandmarks_;

    // self-defined parameters
    float vizSpeed_;
    int stateBegin_;
    int stateEnd_;
    bool useSlidingWindow_;
    int slidingWindowSize_;
    int numThreads_;
};

#endif  // SOLUTION04_INCLUDE_PARAMSERVER_H