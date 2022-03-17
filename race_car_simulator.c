#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section
struct Race {
int numberOfLaps;
int currentLap;
char firstPlaceDriverName[60];
char firstPlaceRaceCarColor[40];
};

struct RaceCar {
char driverName [60];
char raceCarColor;
int totalLapTime;
};

// Print functions section
int printIntro() {
printf("Welcome to our main event digital race fans! I hope everybody has their snacks because we are about to begin!\n");
};

int printCountDown() {
  printf("Racers Ready! In...\n 5\n 4\n 3\n 2\n 1\n Race!\n");
};

void printFirstPlaceAfterLap(struct Race race){

  race.currentLap;
  race.firstPlaceDriverName;
  race.firstPlaceRaceCarColor;

  int currentLap = 0;
  char* firstPlaceDriverName = "George";
  char* firstPlaceRaceCarColor = "Blue";


  printf("After lap number %d First Place Is: %s in the %s race car!\n", race.currentLap, firstPlaceDriverName, firstPlaceRaceCarColor);

};

void printCongratulation(struct Race race){
    race.currentLap;
  race.firstPlaceDriverName;
  race.firstPlaceRaceCarColor;

  int currentLap = 0;
  char* firstPlaceDriverName = "George";
  char* firstPlaceRaceCarColor = "Blue";

  printf("Let's all congratulate %s in the %s race car for an amazing performance. It truly was a great race and everybody have a goodnight!\n", firstPlaceDriverName, firstPlaceRaceCarColor);
}
// Logic functions section
int calculateTimeToCompleteLap(){

    int speed = (rand() % 3) + 1;
    int acceleration = (rand() % 3) + 1;
    int nerves = (rand() % 3) + 1;
    return speed + acceleration + nerves;

return ((rand() % 10) + 1);
};

void updateRaceCar(struct RaceCar* raceCar){
raceCar->totalLapTime;
};

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2){


 if (raceCar1->totalLapTime <= raceCar2->totalLapTime) {
    } else {
        race->firstPlaceDriverName == raceCar2->driverName;
    }
};

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2)
{
struct Race race = {5, 0, "", ""};

for (int i = 0; i < race.numberOfLaps; i++)
{
  race.currentLap++;
  updateRaceCar(raceCar1);
  updateRaceCar(raceCar2);
  updateFirstPlace(&race, raceCar1, raceCar2);
  printFirstPlaceAfterLap(race);
}

printCongratulation(race);

};

int main() {
	srand(time(0));
    struct RaceCar raceCar1;
    struct RaceCar raceCar2;
    printIntro();
    printCountDown();
    startRace(&raceCar1, &raceCar2);
};
