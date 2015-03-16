 /*
                _ _     _____   ______      __            
     /\        (_) |   |  __ \ / __ \ \    / /            
    /  \   __ _ _| |_  | |__) | |  | \ \  / /__ _ __ __ _ 
   / /\ \ / _` | | __| |  ___/| |  | |\ \/ / _ \ '__/ _` |
  / ____ \ (_| | | |_  | |    | |__| | \  /  __/ | | (_| |
 /_/    \_\__, |_|\__| |_|     \____/   \/ \___|_|  \__,_|
           __/ |                                          
          |___/                                           
 */


/* PASTE YOUR GRAPHICS ARRAY CODE BELOW
 ===============================*/
#define POVARRAYSIZE 200
int povArray[] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 80 , 212 , 2036 , 734 , 660 , 0 , 0 , 0 , 0 , 4095 , 4095 , 3855 , 3855 , 3855 , 3855 , 3855 , 0 , 892 , 892 , 836 , 836 , 836 , 1023 , 1023 , 0 , 2046 , 2046 , 1542 , 1542 , 1542 , 2046 , 2046 , 0 , 0 , 2022 , 2022 , 1638 , 1638 , 1662 , 1662 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0};


  // SETUP
  // ====================================
void setup() {                


  // SETUP THE POV
  // ===============================
  // Setup the POV.
  povSetup(); 
  
  // Optionally change the column width (default of 6).
  povSetWidth(5); 
  
  // Assign the graphics array to the POV.
  povSetArray(povArray,POVARRAYSIZE); 

  // Display a fade-out animation.
  povFadeOutAnimation(); 
  
  // Turn off all the LEDs.
  povTurnOffAllLeds(); 

  
}


  // MAIN LOOP
  // ====================================
void loop() {
  
  // DISPLAY THE GRAPHICS
  // ===============================
  // If set to false, the POV will display the graphics CONTINUOUSLY.
  
  // If set to true, the POV will display the graphics ONLY if the 
  // BUTTON or HALL are triggered.
  
  povDisplay(true);  

}
