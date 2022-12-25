#include "ros/ros.h"
#include "std_msgs/Int8.h"

void Callback(const std_msgs::Int8::ConstPtr& msg)
{
    ROS_INFO("I heard --> [%d]", msg->data);
}

int main(int argc, char **argv)
{
    ros::init (argc, argv, "listenerNode");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("chatter", 10, Callback);
    ros::spin();
    return 0;
}