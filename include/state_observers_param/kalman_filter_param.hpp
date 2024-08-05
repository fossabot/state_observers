// Copyright 2024 National Council of Research of Italy (CNR) - Intelligent Robotics Lab
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef STATE_OBSERVERS_PARAM__KALMAN_FILTER_PARAM_HPP_
#define STATE_OBSERVERS_PARAM__KALMAN_FILTER_PARAM_HPP_

#include <Eigen/Dense>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"


#include "state_observers_param/state_observer_param.hpp"

namespace state_observer
{

class KalmanFilterParam : public StateObserverParam
{
public:
  KalmanFilterParam();

  virtual ~KalmanFilterParam() {}
  virtual void initialize(const rclcpp_lifecycle::LifecycleNode::SharedPtr & node);

  Eigen::MatrixXd get_R() {return R_;}
  Eigen::MatrixXd get_Q() {return Q_;}
  Eigen::MatrixXd get_P0() {return P0;}

protected:
  Eigen::MatrixXd R_, Q_, P0;
};

}  // namespace state_observer

#endif  // STATE_OBSERVERS_PARAM__KALMAN_FILTER_PARAM_HPP_
