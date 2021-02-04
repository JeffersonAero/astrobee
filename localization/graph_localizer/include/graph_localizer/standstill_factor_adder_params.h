/* Copyright (c) 2017, United States Government, as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 *
 * All rights reserved.
 *
 * The Astrobee platform is licensed under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with the
 * License. You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef GRAPH_LOCALIZER_STANDSTILL_FACTOR_ADDER_PARAMS_H_
#define GRAPH_LOCALIZER_STANDSTILL_FACTOR_ADDER_PARAMS_H_

#include <graph_localizer/factor_adder_params.h>

namespace graph_localizer {
struct StandstillFactorAdderParams : public FactorAdderParams {
  bool add_velocity_prior;
  bool add_pose_between_factor;
  double prior_velocity_stddev;
  double pose_between_factor_translation_stddev;
  double pose_between_factor_rotation_stddev;
};
}  // namespace graph_localizer

#endif  // GRAPH_LOCALIZER_STANDSTILL_FACTOR_ADDER_PARAMS_H_