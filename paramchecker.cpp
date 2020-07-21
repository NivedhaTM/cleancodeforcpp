
    void setBpm(float bpmValue) {
      bpm= bpmValue;
    }
    float getBpm() {
      return bpm;
    }
    void setSpo2(float spo2Value) {
      spo2= spo2Value;
    }
    float getSpo2() {
      return spo2;
    }
    void setRespRate(float respRateValue) {
      respRate = respRateValue;
    }
    float getRespRate() {
      return respRate;
    }
    bool isBpmOk() {
      return !( bpm < 70 || bpm > 150);
    }
    bool isSpo2Ok() {
      return  !(spo2 < 80);
    }
    bool isRespRateOk() {
      return !(respRate < 30 || respRate > 60);
    }
  
    bool isVitalsOk() {
        return (isBpmOk() && isSpo2Ok() && isRespRateOk());
    }





