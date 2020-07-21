
class VitalData{
  private:
    float bpm, spo2, respRate ;

  public:
    void setBpm(float bpmValue) ;
    float getBpm() ;
    void setSpo2(float spo2Value) ;
    float getSpo2() ;
    void setRespRate(float respRateValue) ;
    float getRespRate() ;
    bool isBpmOk() ;
    bool isSpo2Ok();
    bool isRespRateOk() ;
    bool isVitalsOk() ;
};
