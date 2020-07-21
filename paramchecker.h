
class VitalData{
  private:
    float bpm, spo2, respRate ;
    bool isBpmOk() ;
    bool isSpo2Ok();
    bool isRespRateOk() ;

  public:
    VitalData(float bpm, float spo2, float respRate);
    bool isVitalsOk() ;
};
