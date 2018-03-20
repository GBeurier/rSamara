#ifndef SAMARA_H
#define SAMARA_H

#include "samara_defines.h"
#include "parameters.h"

#include "utils/juliancalculator.h"

class Samara {

public:
    enum SamaraLogType {SMALL, COMPLETE, ECOTROP};
    SamaraLogType LOG;

    double Altitude;
    double ASScstr;
    double AttenMitch;
    double BundHeight;
    double Ca;
    double CO2Cp;
    double CO2Exp;
    double CO2Slopetr;
    double CoeffAssimSla;
    double CoefficientQ10;
    double CoeffInternodeMass;
    double CoeffInternodeNum;
    double CoeffLeafDeath;
    double CoeffLeafWLRatio;
    double CoeffPanicleMass;
    double CoeffPanSinkPop;
    double CoeffResCapacityInternode;
    double CoeffReserveSink;
    double CoeffRootMassPerVolMax;
    double CoeffTillerDeath;
    double CoeffTransplantingShock;
    double DensityField;
    double DensityNursery;
    double DEVcstr;
    double DurationNursery;
    double EpaisseurProf;
    double EpaisseurSurf;
    double ExcessAssimToRoot;
    double FTSWIrrig;
    double HaunCritTillering;
    double HumFC;
    double HumPF;
    double HumSat;
    double IcTillering;
    double InternodeLengthMax;
    double IrrigAuto;
    double IrrigAutoResume;
    double IrrigAutoStop;
    double IrrigAutoTarget;
    double KcMax;
    double KCritSterCold1;
    double KCritSterCold2;
    double KCritSterFtsw1;
    double KCritSterFtsw2;
    double KCritSterHeat1;
    double KCritSterHeat2;
    double KCritStressCold1;
    double KCritStressCold2;
    double Kdf;
    double KPar;
    double KRespInternode;
    double KRespMaintLeaf;
    double KRespMaintRoot;
    double KRespMaintSheath;
    double KRespPanicle;
    double KTempMaint;
    double Latitude;
    double LeafLengthMax;
    double LifeSavingDrainage;
    double Mulch;
    double PanStructMassMax;
    double PARCritSLA;
    double PercolationMax;
    double PEvap;
    double PFactor;
    double Phyllo;
    double PlantsPerHill;
    double PlotDrainageDAF;
    double PoidsSecGrain;
    double PourcRuiss;
    double PPCrit;
    double PPExp;
    double PPSens;
    double PriorityPan;
    double ProfRacIni;
    double RankLongestLeaf;
    double RelMobiliInternodeMax;
    double RelPhylloPhaseStemElong;
    double RollingBase;
    double RollingSens;
    double RootCstr;
    double RootFrontMax;
    double RootPartitMax;
    double SDJBVP;
    double SDJLevee;
    double SDJMatu1;
    double SDJMatu2;
    double SDJRPR;
    double SeuilPP;
    double SeuilRuiss;
    double SlaMax;
    double SlaMin;
    double StockIniProf;
    double StockIniSurf;
    double TBase;
    double TempSLA;
    double TilAbility;
    double TLim;
    double TOpt1;
    double TOpt2;
    double Transplanting;
    double TransplantingDepth;
    double TxAssimBVP;
    double TxAssimMatu1;
    double TxAssimMatu2;
    double TxConversion;
    double TxResGrain;
    double TxRuSurfGermi;
    double VRacBVP;
    double VRacLevee;
    double VRacMatu1;
    double VRacMatu2;
    double VRacPSP;
    double VRacRPR;
    double WaterLoggingSens;
    double WtRatioLeafSheath;

    //TODO tmp lodging
    //var
    double MatuSDJ = 0;
    double MatuProgress = 0;
    double GrainMoisture = 0;
    double FreshMatPanicleTotPop = 0;
    double StemVigor = 0;
    double LodgingIndex = 0;
    double FreshMatAbovegroundPop = 0;
    double LodgingResistance = 0;
    double LodgingDay = 0;
    double Lodging = 0;

    double StemSurfMean = 0;
    double StemDiaMean = 0;
    double StemDiaBase = 0;
    double LodgingPot = 0;

    //params
    double CoeffLodging;
    double StemPorosity;
    //

    //variables parameters
    double TMax;
    double TMin;
    double TMoy;
    double HMax;
    double HMin;
    double HMoy;
    double Vt;
    double Ins;
    double Rg;
    double ETP;
    double Pluie;

    //variables
    double ApexHeight = 0;
    double ApexHeightGain = 0;
    double Assim = 0;
    double AssimNotUsed = 0;
    double AssimNotUsedCum = 0;
    double AssimPot = 0;
    double AssimSurplus = 0;
    double A_AssimSurplus = 0;
    double A_DemStructLeaf = 0;
    double A_DemStructTot = 0;
    double A_GrowthStructLeaf = 0;
    double A_GrowthStructTot = 0;
    double A_IncreaseResInternodePop = 0;
    double A_ResInternodeMobiliDay = 0;
    double CapaRDE = 0;
    double CapaREvap = 0;
    double CapaRFE = 0;
    double ChangeNurseryStatus = 0;
    double ChangePhase = 0;
    double ChangeSsPhase = 0;
    double CoeffCO2Assim = 0;
    double CoeffCO2Tr = 0;
    double CoeffStressLogging = 0;
    double Conversion = 0;
    double ConversionEff = 0;
    double CounterNursery = 0;
    double Cstr = 0;
    double CstrAssim = 0;
    double CstrCum = 0;
    double CstrMean = 0;
    double CstrPhase2 = 0;
    double CstrPhase3 = 0;
    double CstrPhase4 = 0;
    double CstrPhase5 = 0;
    double CstrPhase6 = 0;
    double CulmsPerHill = 0;
    double CulmsPerHillFin = 0;
    double CulmsPerHillMax = 0;
    double CulmsPerPlant = 0;
    double CulmsPerPlantFin = 0;
    double CulmsPerPlantMax = 0;
    double CulmsPop = 0;
    double CumCarbonUsedPop = 0;
    double CumCstrPhase2 = 0;
    double CumCstrPhase3 = 0;
    double CumCstrPhase4 = 0;
    double CumCstrPhase5 = 0;
    double CumCstrPhase6 = 0;
    double CumDr = 0;
    double CumDrFin = 0;
    double CumEt = 0;
    double CumFTSWPhase2 = 0;
    double CumFTSWPhase3 = 0;
    double CumFTSWPhase4 = 0;
    double CumFTSWPhase5 = 0;
    double CumFTSWPhase6 = 0;
    double CumGrowthPop = 0;
    double CumIcPhase2 = 0;
    double CumIcPhase3 = 0;
    double CumIcPhase4 = 0;
    double CumIcPhase5 = 0;
    double CumIcPhase6 = 0;
    double CumIrrig = 0;
    double CumIrrigFin = 0;
    double CumLr = 0;
    double CumPAR = 0;
    double CumSupplyTot = 0;
    double CumTr = 0;
    double CumWReceived = 0;
    double CumWUse = 0;
    double CumWUseFin = 0;
    double DAF = 0;
    double DayLength = 0;
    double DeadLeafdrywtPop = 0;
    double Decli = 0;
    double DegresDuJour = 0;
    double DegresDuJourCor = 0;
    double DemLeafAreaPlant = 0;
    double DemPanicleFillPop = 0;
    double DemResInternodePop = 0;
    double DemStructInternodePlant = 0;
    double DemStructInternodePop = 0;
    double DemStructLeafPlant = 0;
    double DemStructLeafPop = 0;
    double DemStructPaniclePlant = 0;
    double DemStructPaniclePop = 0;
    double DemStructRootPlant = 0;
    double DemStructRootPop = 0;
    double DemStructSheathPop = 0;
    double DemStructTotPop = 0;
    double Density = 0;
    double Dr = 0;
    double DryMatAboveGroundPop = 0;
    double DryMatAboveGroundPopFin = 0;
    double DryMatAboveGroundTotPop = 0;
    double DryMatPanicleTotPop = 0;
    double DryMatResInternodePop = 0.;
    double DryMatResInternodePopOld = 0;
    double DryMatStructInternodePop = 0;
    double DryMatStructLeafPop = 0;
    double DryMatStructPaniclePop = 0;
    double DryMatStructRootPop = 0;
    double DryMatStructSheathPop = 0;
    double DryMatStemPop = 0;
    double DryMatStructTotPop = 0;
    double DryMatTotPop = 0;
    double DryMatTotPopFin = 0;
    double DryMatVegeTotPop = 0;
    double DurGermFlow = 0;
    double DurGermMat = 0;
    double DurPhase1 = 0;
    double DurPhase2 = 0;
    double DurPhase3 = 0;
    double DurPhase4 = 0;
    double DurPhase5 = 0;
    double DurPhase6 = 0;
    double EauDispo = 0;
    double ETM = 0;
    double ETo = 0;
    double ETR = 0;
    double Evap = 0;
    double EvapPot = 0;
    double FertSpikeNumPop = 0;
    double FloodwaterDepth = 0;
    double FloodwaterGain = 0;
    double FractionPlantHeightSubmer = 0;
    double FractionRootsLogged = 0;
    double FTSW = 0;
    double FtswMoy = 0;
    double FtswPhase2 = 0;
    double FtswPhase3 = 0;
    double FtswPhase4 = 0;
    double FtswPhase5 = 0;
    double FtswPhase6 = 0;
    double GainRootSystSoilSurfPop = 0;
    double GainRootSystVolPop = 0;
    double GrainFillingStatus = 0;
    double GrainFillingStatusFin = 0;
    double GrainYieldPanicle = 0;
    double GrainYieldPop = 0;
    double GrainYieldPopFin = 0;
    double GrowthDryMatPop = 0;
    double GrowthPop = 0;
    double GrowthResInternodePop = 0;
    double GrowthStructDeficit = 0;
    double GrowthStructInternodePop = 0;
    double GrowthStructLeafPop = 0;
    double GrowthStructPaniclePop = 0;
    double GrowthStructRootPop = 0;
    double GrowthStructSheathPop = 0;
    double GrowthStructTotPop = 0;
    double HarvestIndex = 0;
    double HaunGain = 0;
    double HaunIndex = 0;
    double HMoyCalc = 0;
    double Hum = 0;
    double Ic = 0;
    double IcCum = 0;
    double IcMean = 0;
    double IcPhase2 = 0;
    double IcPhase3 = 0;
    double IcPhase4 = 0;
    double IcPhase5 = 0;
    double IcPhase6 = 0;
    double IncreaseResInternodePop = 0;
    double InternodeResStatus = 0;
    double Irrigation = 0;
    double IrrigAutoDay = 0;
    double IrrigTotDay = 0;
    double Kce = 0;
    double KceReal = 0;
    double Kcl = 0;
    double Kcp = 0;
    double KcTot = 0;
    double Kr = 0;
    double KRolling = 0;
    double Lai = 0;
    double LaiDead = 0;
    double LaiFin = 0;
    double LastLeafLength = 0;
    double LastLeafLengthPot = 0;
    double LatRad = 0;
    double LeafDeathPop = 0;
    double LIRkdf = 0;
    double LIRkdfcl = 0;
    double Lr = 0;
    double LTRkdf = 0;
    double LTRkdfcl = 0;
    double MaxLai = 0;
    double MobiliLeafDeath = 0;
    double NumPhase = 0;
    double NumSsPhase = 0;
    double NurseryStatus = 0;
    double PanicleFilDeficit = 0;
    double PanicleFilPop = 0;
    double PanicleNumPlant = 0;
    double PanicleNumPop = 0;
    double PanicleSinkPop = 0;
    double PanStructMass = 0;
    double Par = 0;
    double PARIntercepte = 0;
    double PhaseStemElongation = 0;
    double PlantHeight = 0;
    double PlantLeafNumNew = 0;
    double PlantLeafNumTot = 0;
    double PlantWidth = 0;
    double ProfRu = 0;
    double RayExtra = 0;
    double RelPotLeafLength = 0;
    double ResCapacityInternodePop = 0;
    double ReservePopFin = 0;
    double ResInternodeMobiliDay = 0;
    double ResInternodeMobiliDayPot = 0;
    double RespMaintDebt = 0;
    double RespMaintTot = 0;
    double ResUtil = 0;
    double RgCalc = 0;
    double RgMax = 0;
    double RootFront = 0;
    double RootFrontOld = 0;
    double RootMassPerVol = 0;
    double RootShootRatio = 0;
    double RootSystSoilSurfPop = 0;
    double RootSystSoilSurfPopOld = 0;
    double RootSystVolPop = 0;
    double RootSystVolPopOld = 0;
    double RUE = 0;
    double RUEGreen = 0;
    double RuRac = 0;
    double RuSurf = 0;
    double SDJCorPhase4 = 0;
    double SeuilCstrMortality = 0;
    double SeuilTemp = 0;
    double SeuilTempSsPhase = 0;
    double SimAnthesis50 = 0;
    double SimEmergence = 0;
    double SimEndCycle = 0;
    double SimPanIni = 0;
    double SimStartGermin = 0;
    double SimStartMatu2 = 0;
    double SimStartPSP = 0;
    double Sla = 0;
    double SlaMitch = 0;
    double SlaNew = 0;
    double SommeDegresJourMax = 0;
    double SpikeNumPanicle = 0;
    double SpikeNumPop = 0;
    double SterilityCold = 0;
    double SterilityDrought = 0;
    double SterilityHeat = 0;
    double SterilityTot = 0;
    double SterilityTotFin = 0;
    double StockMacropores = 0;
    double StockRac = 0;
    double StockSurface = 0;
    double StockTotal = 0;
    double StressCold = 0;
    double StRuMax = 0;
    double SumDDPhasePrec = 0;
    double SumDegreDayCor = 0;
    double SumDegresDay = 0;
    double SumPP = 0;
    double SunDistance = 0;
    double SunPosi = 0;
    double SupplyTot = 0;
    double TempLai = 0;
    double TillerDeathPop = 0;
    double TmaxMoy = 0;
    double TminMoy = 0;
    double TMoyCalc = 0;
    double TMoyPrec = 0;
    double Tr = 0;
    double TrEff = 0;
    double TrEffInst = 0;
    double TrPot = 0;
    double ValRDE = 0;
    double ValRFE = 0;
    double ValRSurf = 0;
    double VPDCalc = 0;
    double VitesseRacinaire = 0;
    double VitesseRacinaireDay = 0;
    double VolMacropores = 0;
    double VolRelMacropores = 0;
    double WueEt = 0;
    double WueTot = 0;



    pair <vector <string>, vector < vector <double> > > run_samara_2_1(SamaraParameters * parameters, SamaraLogType log = SMALL);
    pair <vector <string>, vector < vector <double> > > run_samara_2_1_micha(SamaraParameters * parameters, SamaraLogType log = SMALL);
    pair <vector <string>, vector < vector <double> > > run_samara_2_3(SamaraParameters * parameters, SamaraLogType log = SMALL);
    pair <vector <string>, vector < vector <double> > > run_samara_2_3_lodging(SamaraParameters * parameters, SamaraLogType log = SMALL);
    pair <vector <string>, vector < vector <double> > > run_samara_2_3_lodging_test(SamaraParameters * parameters, SamaraLogType log = SMALL);

    void set_meteo_vars(SamaraParameters * parameters, int t, double &TMax, double &TMin, double &TMoy
                        , double &HMax, double &HMin, double &HMoy
                        , double &Vt, double &Ins, double &Rg, double &ETP
                        , double &Pluie, double & TMoyCalc, double & HMoyCalc);
    void init_parameters_2_1(SamaraParameters * params);
    void init_parameters_2_1_micha(SamaraParameters * params);
    void init_parameters_2_3(SamaraParameters * params);
    void init_parcelle(double &VolMacropores, double &HumSat, double &HumFC, double &ResUtil
                       , double &ProfRu, double &EpaisseurSurf, double &EpaisseurProf
                       , double &RuSurf, double &CapaREvap, double &CapaRFE, double &CapaRDE
                       , double &StRuMax, double &StockIniProf, double &StockIniSurf
                       , double &ValRSurf, double &ValRDE, double &ValRFE
                       , double &StockSurface, double &StockTotal, double &Hum
                       , double &LTRkdfcl, double &LIRkdf, double &LTRkdf
                       , double &CounterNursery, double &VolRelMacropores);
    void eval_Par(double t);
    void EToFao(double const &ETP, double const &Alt, double const &RgMax, double const &RgCalc,
                double const &TMin, double const &TMax,
                double const &HMin, double const &HMax, double const &HMoy,
                double const &TMoy, double const &Vt, double &ETo,
                double &TMoyPrec, double &VPDCalc);
    void EToFao_2_3(double const &ETP, double const &Alt, double const &RgMax, double const &RgCalc,
                    double const &TMin, double const &TMax,
                    double const &HMin, double const &HMax, double const &HMoy,
                    double const &TMoy, double const &Vt, double &ETo,
                    double &TMoyPrec, double &VPDCalc);
    void kill_crop();
    void reset_variables_2_1();
    void reset_variables_2_1_micha();
    void reset_variables_2_3();
    void init_culture();
    void init_all_variables_2_1();
    void init_all_variables_2_1_micha();
    void init_all_variables_2_3();
};
#endif // SAMARA_H
