import rospy
from std_msgs.msg import String
def Callback(str):
    rospy.loginfo("I heard --> %s", str.data)

def listener():
    rospy.init_node('listener', anonymous=True)
    rospy.Subscriber("chatter", String, Callback)
    rospy.spin()

if __name__ == '__main__':
    listener()