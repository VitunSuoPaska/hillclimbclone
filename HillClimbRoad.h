#ifndef __HILLCLIMB_ROAD_H__
#define __HILLCLIMB_ROAD_H__

#include <vector>
#include "HillClimbUtility.h"


namespace hillclimb {
    class HillClimbRoad{
        public:
       
             
        int X_ROAD_START;
        int Y_ROAD_START;   
        
        int MAX_PART_COUNT;
 
    
        int DEFAULT_ROAD_LENGTH;
            
        int width;
        int height;
        
        HillClimbRoad(int, int);
        
        double calculateNewPartY();
        double calculateNewPartX( double prevPartX);
        
        std::vector<Coordinates> getPartCoords();
        
        int getPartCount();
        
        void addPart(double, double);

        std::vector<Coordinates> partCoords;
        
        void move(double x);
        
        private:
        
    };
}
#endif // __HILLCLIMB_LAYER_H__

     /*move(x);

     reset();
   private
 
       void generatePartsAhead();
       deletePartsBehind();
 }
*/
