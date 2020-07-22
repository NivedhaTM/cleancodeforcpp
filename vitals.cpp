
#include <iostream>
using namespace std;
 
// Base class
class Vitals{
   public:
      void setValue(float value) {
         vitalValue = value;
      }
   
      bool isVitalOk() ;
   
   protected:
      float vitalValue;

};
 
// Derived classes
class BPM: public Vitals{
   public:
      bool isVitalOk() { 
        return !( vitalValue   < 70 || vitalValue  > 150);
      }
};

class SPO2: public Vitals{
   public:
 bool isVitalOk() { 
        return !(vitalValue  < 80);
      }
};

class RespRate: public Vitals{
   public:
      bool isVitalOk() { 
        return !(vitalValue  < 30 || vitalValue  > 60);
      }
};
 
int main(void) {
   BPM bpm;
   SPO2 spo2;
   RespRate respRate;
 
   bpm.setValue(80);
   spo2.setValue(80);
   respRate.setValue(80);

   bool  isVitalsOK =  bpm.isVitalOk() && spo2.isVitalOk() && respRate.isVitalOk() ;
   cout << "Is Vitals OK: " << isVitalsOK  << endl; 

   return 0;
}
