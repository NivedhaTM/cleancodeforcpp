#include "paramchecker.h"

    VitalData::VitalData(float bpmValue, float spo2Value, float respRateValue){
       bpm = bpmValue;
       spo2 = spo2Value;
       respRate = respRateValue; 
    }

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





