#!/usr/bin/env python

import rospy
from sensor_msgs.msg import Image

import cv2
from cv_bridge import CvBridge, CvBridgeError

rospy.init_node('VideoPublisher', anonymous=True)

VideoRaw = rospy.Publisher('VideoRaw', Image, queue_size=10)
NeedleBorder = rospy.Publisher('NeedleBorder', Image, queue_size=10)

cap = cv2.VideoCapture("nvcamerasrc ! video/x-raw(memory:NVMM), width=(int)1280, height=(int)720,format=(string)I420, framerate=(fraction)30/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink")
while cam.isOpened():
    meta, frame = cam.read()

    frame_gaus = cv2.GaussianBlur(frame, gaussian_blur_ksize, gaussian_blur_sigmaX)

    frame_gray = cv2.cvtColor(frame_gaus, cv2.COLOR_BGR2GRAY)

    frame_edges = cv2.Canny(frame_gray, threshold1, threshold2)

    # I want to publish the Canny Edge Image and the original Image
    msg_frame = CvBridge().cv2_to_imgmsg(frame)
    msg_frame_edges = CvBridge().cv2_to_imgmsg(frame_edges)

    VideoRaw.publish(msg_frame, "RGB8")
    NeedleBorder.publish(msg_frame_edges, "mono8")

    time.sleep(0.1)