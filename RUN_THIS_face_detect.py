# This script will detect faces via your webcam.
# Tested with OpenCV4

#imports modules
import os
import cv2
import subprocess
from os import sys
from PIL import Image

#function to kill process
def CloseFile():
        #os.system('TASKKILL /F /IM pythonw.exe')
        os.system('TASKKILL /F /IM python.exe')
        os.system('TASKKILL /F /IM py.exe')

cap = cv2.VideoCapture(0) #gets raw video feed from webcam

# Create the haar cascade from intel ( free)
faceCascade = cv2.CascadeClassifier("haarcascade_frontalface_default.xml")

  
while(True):
        #Capture frame-by-frame
        ret, frame = cap.read()

        # Our operations on the frame come here, this converts rgb to greyscale then to grey code and then to respective numberic values of colours
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

        # Detect faces in the image---> MOST IMP CODE
        faces = faceCascade.detectMultiScale(gray,scaleFactor=1.3,minNeighbors=2,minSize=(30, 30)) # tweak this to get correct output
        x=len(faces)# returned value is faces which is an array
        if(x>0):
                for i in range (0,5):
                        print('***************************************************************************')      
                        print("                          FACE DETECTED                                    ")
                        print('***************************************************************************')
                        for (x, y, w, h) in faces:
                                cv2.rectangle(frame, (x, y), (x+w, y+h), (255, 18, 18), 2) # Draw a rectangle around the faces
                        cv2.imshow('MEW_FACE_UNLOCK',frame)# displays the resulting frame
                        #if cv2.waitKey(30) & 0xFF == 27:
                cap.release()
                cv2.destroyAllWindows()# When everything is done, release the capture to avoid system crash
                print("THANK YOU FOR USING MEW FACE DETECTION, OPENING CORTEX........") 
                subprocess.Popen(["C:\CORTEX\CORTEX.exe"])
                break
        else:
                continue


CloseFile()
quit()
      
        
