/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include <frc/WPILib.h>

class OI {
 private:
  std::shared_ptr<frc::Joystick> driverJoystick;
  std::shared_ptr<frc::JoystickButton> collect;
  std::shared_ptr<frc::JoystickButton> score;
 public:
    OI();
    std::shared_ptr<frc::Joystick> getJoystick();
    static std::shared_ptr<frc::Joystick> buttonBoard;
};
