#include<StandardCplusplus.h>
#include <vector>
#include <math.h>
#include <Servo.h>

struct Channel {
  double min_val;
  double max_val;
  int channel_num;
};

void Channel_init(Channel & channel, int in_min_val, int in_max_val, int in_channel_num) {
  //
}

//Scales input from receiver to values useful to motors and servos
int scale_input(const Channel & c, int value) {
  
}

//Initializes the 5 channels with the proper minimum/maximum values and channel number
void initialize_channels(std::vector<Channel> & c, const int* min_max_array) {
  
}

void calculate_average(const std::vector<int> & vec) {
  
}

//Minimum and maximum values for each channel.  Format: channel 1 - min value, channel 1 - max value, 
//channel 2 - min value, channel 2 - max value, etc.
const std::vector<int> min_max_values = {0, 0, 0, 0, 0 , 0, 0, 0, 0, 0};

//Pins will change according to our wiring harness
//Channel input pins here

//Other sensor input pins here

//Values read in by receiver

int ch1Val = 0, ch2Val = 0, ch3Val = 0, ch4Val = 0;
//Output pins here
Servo servo_1, servo_2;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
