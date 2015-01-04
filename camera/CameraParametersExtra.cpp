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

#include <camera/CameraParameters.h>
#include "CameraParametersExtra.h"

namespace android {
const char CameraParametersExtra::KEY_SUPPORTED_ISO_MODES[] = "iso-values";
const char CameraParametersExtra::KEY_FACE_DETECTION[] = "face-detection";
const char CameraParametersExtra::KEY_SUPPORTED_FACE_DETECTION[] = "face-detection-values";
const char CameraParametersExtra::FACE_DETECTION_OFF[] = "off";
const char CameraParametersExtra::FACE_DETECTION_ON[] = "on";
const char CameraParametersExtra::KEY_ZSL[] = "zsl";
const char CameraParametersExtra::KEY_SUPPORTED_ZSL_MODES[] = "zsl-values";
const char CameraParametersExtra::ZSL_OFF[] = "off";
const char CameraParametersExtra::ZSL_ON[] = "on";
const char CameraParametersExtra::KEY_ISO_MODE[] = "iso";
const char CameraParametersExtra::KEY_CAMERA_MODE[] = "camera-mode";
const char CameraParametersExtra::KEY_SAMSUNG_CAMERA_MODE[] = "cam_mode";
const char CameraParametersExtra::ISO_AUTO[] = "auto";
const char CameraParametersExtra::ISO_HJR[] = "ISO_HJR";
const char CameraParametersExtra::ISO_50[] = "ISO50";
const char CameraParametersExtra::ISO_100[] = "ISO100";
const char CameraParametersExtra::ISO_200[] = "ISO200";
const char CameraParametersExtra::ISO_400[] = "ISO400";
const char CameraParametersExtra::ISO_800[] = "ISO800";
const char CameraParametersExtra::ISO_1600[] = "ISO1600";
const char CameraParametersExtra::ISO_3200[] = "ISO3200";
const char CameraParametersExtra::ISO_6400[] = "ISO6400";
int CameraParametersExtra::getInt64(const char *key) const { return -1; };
}; //namespace android
