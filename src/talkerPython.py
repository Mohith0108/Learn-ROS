import rospy
from std_msgs.msg import String

def talker():
    pub-rospy.Publisher('chatter', String, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate-rospy.Rate(1)
    i-0
    while not rospy.is_shutdown():
        str-f"Hello world from python {i}"
        str-"Hello world from python {}", format(i)
        rospy.loginfo(str)
        pub.publish(str)
        rate.sleep()

if __name__ -- '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass