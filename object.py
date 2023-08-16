from imageai.Detection import ObjectDetection
import os
import cv2,os
import csv
import numpy as np
import shutil
import camera

cam = cv2.VideoCapture(0)

execution_path = os.getcwd()
detector = ObjectDetection()
detector.setModelTypeAsYOLOv3()
detector.setModelPath( os.path.join(execution_path , "yolov3.pt"))
detector.loadModel()

harcascadePath = "haarcascade_frontalface_default.xml"
detector1=cv2.CascadeClassifier(harcascadePath)

sampleNum=0
while(True):
        ret, img = cam.read()
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        faces = detector1.detectMultiScale(gray, 1.3, 5)
        for (x,y,w,h) in faces:
            cv2.rectangle(img,(x,y),(x+w,y+h),(255,255,255),2)         
            sampleNum=sampleNum+1          
            cv2.imwrite("EDW"+str(sampleNum) + ".jpg", gray[y:y+h,x:x+w])
            cv2.imshow('frame',img)
        if cv2.waitKey(100) & 0xFF == ord('e'):
            break
        elif sampleNum>10:
            break
cam.release()
cv2.destroyAllWindows() 
