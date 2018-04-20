#include <vector>
#include "HillClimbRoad.h"
#include "HillClimbUtility.h"

namespace hillclimb {
     
   double ROAD_LENGHT_FACTOR = 5; 

   HillClimbRoad::HillClimbRoad(int W, int H)
   :width(W), height(H) {}
   
   int HillClimbRoad::getPartCount() {
       return static_cast<int>(this->partCoords.size());
   }
   
   std::vector<Coordinates> HillClimbRoad::getPartCoords(){
       return this->partCoords;
   }
   
   void HillClimbRoad::addPart(double x, double y)
   {
       Coordinates partCoord = {
           .x = x,
           .y = y
       };
       this->partCoords.push_back(partCoord);
               
   }
   
   void HillClimbRoad::move(double x)
   {
       for(auto &coords: this->partCoords)
       {
           coords.x -=x;
       }
   }
}
/*
   function getPartCount

   function getPartCoords

   

   function calculateNewPartX {
       randomize length of the new part using some factor
   }

   function calculateNewPartY {
       randomize y position of the end point of the new part
   }

   function generatePartsAhead {
      generate parts as many as MAX_PART_COUNT - currentPartCount
   }

   deletePartsBehind() {
      delete parts whose x < -DEFAULT_ROAD_LENGTH * ROAD_LENGTH_FACTOR
   }

   move(x) {
       move the x's of parts
       deletePartsBehind
       generatePartsAhead
   }

   reset{
       clear partCoords
       add two horizontal parts
       generatePartsAhead
   }
}*/
