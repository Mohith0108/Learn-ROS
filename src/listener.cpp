#include "ros/ros.h"
#include "std_msgs/String.h"

void Callback(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("I heard --> [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
    ros::init (argc, argv, "listenerNode");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("chatter", 1000, Callback);
    ros::spin();
    return 0;
}