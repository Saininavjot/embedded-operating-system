from adxl345 import ADXL345
 
adxl345 = ADXL345()
while True:
        axes = adxl345.getAxes(True)
        print "Accelerometer on address 0x%x:" % (adxl345.address)
        print "   x = %.3fG" % ( axes['x'] )
        print "   y = %.3fG" % ( axes['y'] )
        print "   z = %.3fG" % ( axes['z'] )

