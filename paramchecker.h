
class VitalData{
  private:
    float bpm, spo2, respRate ;

  public:
    VitalData(float bpm, float spo2, float respRate);
    bool isBpmOk() ;
    bool isSpo2Ok();
    bool isRespRateOk() ;
    bool isVitalsOk() ;
};
