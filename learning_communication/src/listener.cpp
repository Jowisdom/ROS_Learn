#include "ros/ros.h"
#include "std_msgs/String.h"
#include "learning_communication/Person.h"

void chatterCallback(const learning_communication::Person::ConstPtr& msg)
{
  ROS_INFO("I heard: [%d] [%d] [%d]", msg->unknow, msg->male, msg-> female);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "listener");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);
    ros::spin();

    return 0;
}