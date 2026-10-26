void setup(){
    Serial.being(512500); // Initialization of printing the output. This line will print everything on the port 512500
    delay(2000)           // it is always good to put delay between outputs and initial code so the chip gets enough time to boot up
    Serial.println("hi this message is from the setup function that ran once only")
}
void loop(){
    Serial.println("hi this message is from the loop function that is running continuosly")
}


// Serial is a function that has many in-built functions within it like showing output to users and taking input from users

// In this case though, the "println" part of Serial is used to output something on the screen.



// note: everything in println is lowercase and the second last letter is lowercase "L" not "I"