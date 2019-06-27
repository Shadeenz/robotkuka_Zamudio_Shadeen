/*
 * File:          robotkuka_Zamudio_Shadeen.c
 * Date:
 * Description:
 * Author:
 * Modifications:
 */

/*
 * You may need to add include files like <webots/distance_sensor.h> or
 * <webots/differential_wheels.h>, etc.
 */
#include <webots/robot.h>
#include <webots/motor.h>
#include <webots/keyboard.h>

/*
 * You may want to add macros here.
 */
#define TIME_STEP 64

/*
 * This is the main program.
 * The arguments of the main function can be specified by the
 * "controllerArgs" field of the Robot node
 */
int main(int argc, char **argv)
{
  /* necessary to initialize webots stuff */
  wb_robot_init();
  
  wb_keyboard_enable(TIME_STEP);


  /*
   * You should declare here WbDeviceTag variables for storing
   * robot devices like this:
   *  WbDeviceTag my_sensor = wb_robot_get_device("my_sensor");
   *  WbDeviceTag my_actuator = wb_robot_get_device("my_actuator");
   */
    WbDeviceTag servo1= wb_robot_get_device("servo_1");
    wb_motor_set_position(servo1, INFINITY);
    
    WbDeviceTag servo2= wb_robot_get_device("servo_2");
    wb_motor_set_position(servo2, INFINITY);
    
    WbDeviceTag servo3= wb_robot_get_device("servo_3");
    wb_motor_set_position(servo3, INFINITY);
    
    WbDeviceTag servo4= wb_robot_get_device("servo_4");
    wb_motor_set_position(servo4, INFINITY);
    
    WbDeviceTag servo5= wb_robot_get_device("servo_5");
    wb_motor_set_position(servo5, INFINITY);
  /* main loop
   * Perform simulation steps of TIME_STEP milliseconds
   * and leave the loop when the simulation is over
   */
  while (wb_robot_step(TIME_STEP) != -1) {
    wb_motor_set_velocity(servo1, -0.1);
    wb_motor_set_velocity(servo2,  0.5;
    wb_motor_set_velocity(servo3,  0.5);
    wb_motor_set_velocity(servo4, -0.5);
    wb_motor_set_velocity(servo5,   5);

    /*
     * Read the sensors :
     * Enter here functions to read sensor data, like:
     *  double val = wb_distance_sensor_get_value(my_sensor);
     */

    /* Process sensor data here */

    /*
     * Enter here functions to send actuator commands, like:
     * wb_differential_wheels_set_speed(100.0,100.0);
     */
  }

  /* Enter your cleanup code here */

  /* This is necessary to cleanup webots resources */
  wb_robot_cleanup();

  return 0;
}
