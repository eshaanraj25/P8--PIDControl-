# Reflection on the Project Solution

## Individual Effects of P, I and D

The final values of PID are `(0.1, 0.005, 2.5)`

### P Controller
The P Controller tries to steer and keep the car towards the center line. In terms of cross track error, the P Controller tries to maintain the value to zero. A very high value of P Constant, results in oscillatory behavior. A lower value reduces those oscillations. Accompanying video: [videos/PController.mp4](./videos/PController.mp4)

### D Controller
The D Controller tries to reduce the oscillations/overshooting produced by the P Controller. A low value of D Constant, makes it difficult for car to make sharp turns. A higher value helps those sharp turns. Accompanying video: [videos/PDController.mp4](./videos/PDController.mp4)

### I Controller
The I Controller tries to reduce the offset/bias error that is present in a PID controlled system. As such, there is not much bias error present in the simulator. A higher value of I Constant does not enable the car to drive safely on the road. A very low value slightly helps while making sharp turns. Accompanying video: [videos/PIDController.mp4](./videos/PIDController.mp4)


## Choosing Final Hyperparameters
The final hyperparameters were tuned manually. 
First the P Constant was set, when there were comparatively reduced number of oscillations. 
After the oscillations started reducing, the D Constant was set. 
The final PD Controller were sufficient to complete the track. 
However, at some sharp turns the car turned very close to the corner.
By adjusting the values of I, the car takes sharp turns towards the center of the road.
The final PID parameters are `(0.1, 0.005, 2.5)`.