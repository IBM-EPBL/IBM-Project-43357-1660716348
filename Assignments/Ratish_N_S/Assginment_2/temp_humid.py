import random, time, winsound

while True:
    temp =random.randint (1,100)
    humid =random.randint(1,100)
    if humid<50:
    	if temp > 60:
       		print("Alert temparature is high !!")
    	else:
        		print("Temparature is Normal")
        		break
    else:
    	print("Humidity is normal")
    time.sleep(1)