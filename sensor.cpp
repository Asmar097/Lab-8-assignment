#include <ros/ros.h>
#include <sensor_msgs/Range.h>

int main(int argc , char** argv){

ros::init(argc,argv,"ultrasonic");
ros::NodeHandle nh;
ros::publisher range_pub = nh.addvertise<sensor_msgs::Range>("measurements_topic",100);

ros:: Rate lopp_rate(5);
sensor_msgs::Range msg;

msg.header.frame_id = "/base_link";

msg.min_range = 0;
msg.max_range = 100 ; 
msg.field_of_view = 0.5;
msg.radiation_type = sensor_msgs::ULTRASOUND;

int distance = 0 ; 


}