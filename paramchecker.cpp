#include "paramchecker.h"

    VitalData::VitalData(float bpmValue, float spo2Value, float respRateValue){
       bpm = bpmValue;
       spo2 = spo2Value;
       respRate = respRateValue; 
    }
//     void setBpm(float bpmValue) {
//       bpm = bpmValue;
//     }
//     void setSpo2(float spo2Value) {
//       spo2 = spo2Value;
//     }
//     void setRespRate(float respRateValue) {
//       respRate = respRateValue;
//     }
    bool VitalData::isBpmOk() {
      return !( bpm < 70 || bpm > 150);
    }
    bool VitalData::isSpo2Ok() {
      return  !(spo2 < 80);
    }
    bool VitalData::isRespRateOk() {
      return !(respRate < 30 || respRate > 60);
    }
  
    bool VitalData::isVitalsOk() {
        return (isBpmOk() && isSpo2Ok() && isRespRateOk());
    }





