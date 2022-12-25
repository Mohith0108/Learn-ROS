#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "talkerNode");
    ros::NodeHandle n;
    ros::Publisher pub=n.advertise<std_msgs::String>("chatter", 1000);
    ros::Rate loop_rate(1);
    int i=0;
    while(ros::ok())
    {
        std_msgs::String msg;
        std::stringstream s;
        s<<"Hello --> "<<i;
        msg.data=s.str();
        ROS_INFO("I published %s\n", msg.data.c_str());
        pub.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
        i++;
    }
    return 0;
}