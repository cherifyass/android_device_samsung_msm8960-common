/*
 * Copyright (C) 2014, The OmniRom Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_HARDWARE_CAMERA_PARAMETERS_EXTRA_H
#define ANDROID_HARDWARE_CAMERA_PARAMETERS_EXTRA_H 

namespace android {
  class CameraParametersExtra: public CameraParameters {
  public:
    static const char KEY_SUPPORTED_ISO_MODES[];
    static const char KEY_FACE_DETECTION[];
    static const char KEY_SUPPORTED_FACE_DETECTION[];
    static const char FACE_DETECTION_OFF[];
    static const char FACE_DETECTION_ON[];
    static const char KEY_ZSL[];
    static const char KEY_SUPPORTED_ZSL_MODES[];
    static const char ZSL_OFF[];
    static const char ZSL_ON[];
    static const char KEY_ISO_MODE[];
    static const char KEY_CAMERA_MODE[];
    static const char KEY_SAMSUNG_CAMERA_MODE[];
    static const char ISO_AUTO[];
    static const char ISO_HJR[];
    static const char ISO_50[];
    static const char ISO_100[];
    static const char ISO_200[];
    static const char ISO_400[];
    static const char ISO_800[];
    static const char ISO_1600[];
    static const char ISO_3200[];
    static const char ISO_6400[];
    int getInt64(const char *key) const; \
  };
}; //namespace android
#endif
