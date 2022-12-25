#include "ros/ros.h"
#include "std_msgs/Int8.h"
#include <sstream>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "talkerNode");
    ros::NodeHandle n;
    ros::Publisher pub=n.advertise<std_msgs::Int8>("chatter", 1000);
    ros::Rate loop_rate(1);
    int i=0;
    while(ros::ok())
    {
        std_msgs::Int8 msg;
        msg.data=i;
        ROS_INFO("%d\t", msg.data);
        pub.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
        i++;
    }
    return 0;
}