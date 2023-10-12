
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleCertificateResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleCertificateResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  VehicleCertificateResult
    : public ModelBase
{
public:
    VehicleCertificateResult();
    virtual ~VehicleCertificateResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VehicleCertificateResult members

    /// <summary>
    /// 合格证编号。 
    /// </summary>

    std::string getCertificateNumber() const;
    bool certificateNumberIsSet() const;
    void unsetcertificateNumber();
    void setCertificateNumber(const std::string& value);

    /// <summary>
    /// 发证日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 车辆制造企业名称。 
    /// </summary>

    std::string getManufactureName() const;
    bool manufactureNameIsSet() const;
    void unsetmanufactureName();
    void setManufactureName(const std::string& value);

    /// <summary>
    /// 车辆品牌。 
    /// </summary>

    std::string getVehicleBrand() const;
    bool vehicleBrandIsSet() const;
    void unsetvehicleBrand();
    void setVehicleBrand(const std::string& value);

    /// <summary>
    /// 车辆名称。 
    /// </summary>

    std::string getVehicleName() const;
    bool vehicleNameIsSet() const;
    void unsetvehicleName();
    void setVehicleName(const std::string& value);

    /// <summary>
    /// 车辆型号。 
    /// </summary>

    std::string getVehicleModel() const;
    bool vehicleModelIsSet() const;
    void unsetvehicleModel();
    void setVehicleModel(const std::string& value);

    /// <summary>
    /// 车架号。 
    /// </summary>

    std::string getVin() const;
    bool vinIsSet() const;
    void unsetvin();
    void setVin(const std::string& value);

    /// <summary>
    /// 车身颜色。 
    /// </summary>

    std::string getVehicleColor() const;
    bool vehicleColorIsSet() const;
    void unsetvehicleColor();
    void setVehicleColor(const std::string& value);

    /// <summary>
    /// 底盘型号。 
    /// </summary>

    std::string getChassisModel() const;
    bool chassisModelIsSet() const;
    void unsetchassisModel();
    void setChassisModel(const std::string& value);

    /// <summary>
    /// 底盘ID。 
    /// </summary>

    std::string getChassisId() const;
    bool chassisIdIsSet() const;
    void unsetchassisId();
    void setChassisId(const std::string& value);

    /// <summary>
    /// 底盘合格证编号。 
    /// </summary>

    std::string getChassisCertificateNumber() const;
    bool chassisCertificateNumberIsSet() const;
    void unsetchassisCertificateNumber();
    void setChassisCertificateNumber(const std::string& value);

    /// <summary>
    /// 发动机型号。 
    /// </summary>

    std::string getEngineModel() const;
    bool engineModelIsSet() const;
    void unsetengineModel();
    void setEngineModel(const std::string& value);

    /// <summary>
    /// 发动机号。 
    /// </summary>

    std::string getEngineNumber() const;
    bool engineNumberIsSet() const;
    void unsetengineNumber();
    void setEngineNumber(const std::string& value);

    /// <summary>
    /// 燃料种类。 
    /// </summary>

    std::string getFuelType() const;
    bool fuelTypeIsSet() const;
    void unsetfuelType();
    void setFuelType(const std::string& value);

    /// <summary>
    /// 排量。 
    /// </summary>

    std::string getDisplacement() const;
    bool displacementIsSet() const;
    void unsetdisplacement();
    void setDisplacement(const std::string& value);

    /// <summary>
    /// 功率。 
    /// </summary>

    std::string getPower() const;
    bool powerIsSet() const;
    void unsetpower();
    void setPower(const std::string& value);

    /// <summary>
    /// 排放标准。 
    /// </summary>

    std::string getEmissionStandard() const;
    bool emissionStandardIsSet() const;
    void unsetemissionStandard();
    void setEmissionStandard(const std::string& value);

    /// <summary>
    /// 油耗。 
    /// </summary>

    std::string getFuelConsumption() const;
    bool fuelConsumptionIsSet() const;
    void unsetfuelConsumption();
    void setFuelConsumption(const std::string& value);

    /// <summary>
    /// 外廓尺寸-长。 
    /// </summary>

    std::string getOverallDimensionLength() const;
    bool overallDimensionLengthIsSet() const;
    void unsetoverallDimensionLength();
    void setOverallDimensionLength(const std::string& value);

    /// <summary>
    /// 外廓尺寸-宽。 
    /// </summary>

    std::string getOverallDimensionWidth() const;
    bool overallDimensionWidthIsSet() const;
    void unsetoverallDimensionWidth();
    void setOverallDimensionWidth(const std::string& value);

    /// <summary>
    /// 外廓尺寸-高。 
    /// </summary>

    std::string getOverallDimensionHeight() const;
    bool overallDimensionHeightIsSet() const;
    void unsetoverallDimensionHeight();
    void setOverallDimensionHeight(const std::string& value);

    /// <summary>
    /// 货厢内部尺寸-长。 
    /// </summary>

    std::string getContainerDimensionLength() const;
    bool containerDimensionLengthIsSet() const;
    void unsetcontainerDimensionLength();
    void setContainerDimensionLength(const std::string& value);

    /// <summary>
    /// 货厢内部尺寸-宽。 
    /// </summary>

    std::string getContainerDimensionWidth() const;
    bool containerDimensionWidthIsSet() const;
    void unsetcontainerDimensionWidth();
    void setContainerDimensionWidth(const std::string& value);

    /// <summary>
    /// 货厢内部尺寸-高。 
    /// </summary>

    std::string getContainerDimensionHeight() const;
    bool containerDimensionHeightIsSet() const;
    void unsetcontainerDimensionHeight();
    void setContainerDimensionHeight(const std::string& value);

    /// <summary>
    /// 钢板弹簧片数。 
    /// </summary>

    std::string getSpringQuantity() const;
    bool springQuantityIsSet() const;
    void unsetspringQuantity();
    void setSpringQuantity(const std::string& value);

    /// <summary>
    /// 轮胎数。 
    /// </summary>

    std::string getTireQuantity() const;
    bool tireQuantityIsSet() const;
    void unsettireQuantity();
    void setTireQuantity(const std::string& value);

    /// <summary>
    /// 轮胎规格。 
    /// </summary>

    std::string getTireSize() const;
    bool tireSizeIsSet() const;
    void unsettireSize();
    void setTireSize(const std::string& value);

    /// <summary>
    /// 轮距-前。 
    /// </summary>

    std::string getFrontWheelTrack() const;
    bool frontWheelTrackIsSet() const;
    void unsetfrontWheelTrack();
    void setFrontWheelTrack(const std::string& value);

    /// <summary>
    /// 轮距-后。 
    /// </summary>

    std::string getRearWheelTrack() const;
    bool rearWheelTrackIsSet() const;
    void unsetrearWheelTrack();
    void setRearWheelTrack(const std::string& value);

    /// <summary>
    /// 轴距。 
    /// </summary>

    std::string getWheelbase() const;
    bool wheelbaseIsSet() const;
    void unsetwheelbase();
    void setWheelbase(const std::string& value);

    /// <summary>
    /// 轴荷。 
    /// </summary>

    std::string getAxleLoad() const;
    bool axleLoadIsSet() const;
    void unsetaxleLoad();
    void setAxleLoad(const std::string& value);

    /// <summary>
    /// 轴数。 
    /// </summary>

    std::string getAxleQuantity() const;
    bool axleQuantityIsSet() const;
    void unsetaxleQuantity();
    void setAxleQuantity(const std::string& value);

    /// <summary>
    /// 转向形式。 
    /// </summary>

    std::string getSteeringForm() const;
    bool steeringFormIsSet() const;
    void unsetsteeringForm();
    void setSteeringForm(const std::string& value);

    /// <summary>
    /// 总质量。 
    /// </summary>

    std::string getTotalWeight() const;
    bool totalWeightIsSet() const;
    void unsettotalWeight();
    void setTotalWeight(const std::string& value);

    /// <summary>
    /// 整备质量。 
    /// </summary>

    std::string getEquipmentWeight() const;
    bool equipmentWeightIsSet() const;
    void unsetequipmentWeight();
    void setEquipmentWeight(const std::string& value);

    /// <summary>
    /// 额定载质量。 
    /// </summary>

    std::string getMaximumLadenMass() const;
    bool maximumLadenMassIsSet() const;
    void unsetmaximumLadenMass();
    void setMaximumLadenMass(const std::string& value);

    /// <summary>
    /// 载质量利用系数。 
    /// </summary>

    std::string getMassUtilizationCoefficient() const;
    bool massUtilizationCoefficientIsSet() const;
    void unsetmassUtilizationCoefficient();
    void setMassUtilizationCoefficient(const std::string& value);

    /// <summary>
    /// 准牵引总质量。 
    /// </summary>

    std::string getTractionWeight() const;
    bool tractionWeightIsSet() const;
    void unsettractionWeight();
    void setTractionWeight(const std::string& value);

    /// <summary>
    /// 半挂车鞍座最大允许总质量。 
    /// </summary>

    std::string getMaximumLoadMass() const;
    bool maximumLoadMassIsSet() const;
    void unsetmaximumLoadMass();
    void setMaximumLoadMass(const std::string& value);

    /// <summary>
    /// 驾驶室准乘人数。 
    /// </summary>

    std::string getCabPassengerCapacity() const;
    bool cabPassengerCapacityIsSet() const;
    void unsetcabPassengerCapacity();
    void setCabPassengerCapacity(const std::string& value);

    /// <summary>
    /// 额定载客。 
    /// </summary>

    std::string getPassengerCapacity() const;
    bool passengerCapacityIsSet() const;
    void unsetpassengerCapacity();
    void setPassengerCapacity(const std::string& value);

    /// <summary>
    /// 最高设计车速。 
    /// </summary>

    std::string getMaxDesignSpeed() const;
    bool maxDesignSpeedIsSet() const;
    void unsetmaxDesignSpeed();
    void setMaxDesignSpeed(const std::string& value);

    /// <summary>
    /// 车辆制造日期。 
    /// </summary>

    std::string getManufactureDate() const;
    bool manufactureDateIsSet() const;
    void unsetmanufactureDate();
    void setManufactureDate(const std::string& value);

    /// <summary>
    /// 字段的置信度，取值范围0~1。 置信度越大，本次识别的字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于字段的准确率。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);

    /// <summary>
    /// 对应所有在原图上识别到的字段位置信息，包含所有文字区域四个顶点的二维坐标（x,y）。采用图像坐标系，坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);


protected:
    std::string certificateNumber_;
    bool certificateNumberIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string manufactureName_;
    bool manufactureNameIsSet_;
    std::string vehicleBrand_;
    bool vehicleBrandIsSet_;
    std::string vehicleName_;
    bool vehicleNameIsSet_;
    std::string vehicleModel_;
    bool vehicleModelIsSet_;
    std::string vin_;
    bool vinIsSet_;
    std::string vehicleColor_;
    bool vehicleColorIsSet_;
    std::string chassisModel_;
    bool chassisModelIsSet_;
    std::string chassisId_;
    bool chassisIdIsSet_;
    std::string chassisCertificateNumber_;
    bool chassisCertificateNumberIsSet_;
    std::string engineModel_;
    bool engineModelIsSet_;
    std::string engineNumber_;
    bool engineNumberIsSet_;
    std::string fuelType_;
    bool fuelTypeIsSet_;
    std::string displacement_;
    bool displacementIsSet_;
    std::string power_;
    bool powerIsSet_;
    std::string emissionStandard_;
    bool emissionStandardIsSet_;
    std::string fuelConsumption_;
    bool fuelConsumptionIsSet_;
    std::string overallDimensionLength_;
    bool overallDimensionLengthIsSet_;
    std::string overallDimensionWidth_;
    bool overallDimensionWidthIsSet_;
    std::string overallDimensionHeight_;
    bool overallDimensionHeightIsSet_;
    std::string containerDimensionLength_;
    bool containerDimensionLengthIsSet_;
    std::string containerDimensionWidth_;
    bool containerDimensionWidthIsSet_;
    std::string containerDimensionHeight_;
    bool containerDimensionHeightIsSet_;
    std::string springQuantity_;
    bool springQuantityIsSet_;
    std::string tireQuantity_;
    bool tireQuantityIsSet_;
    std::string tireSize_;
    bool tireSizeIsSet_;
    std::string frontWheelTrack_;
    bool frontWheelTrackIsSet_;
    std::string rearWheelTrack_;
    bool rearWheelTrackIsSet_;
    std::string wheelbase_;
    bool wheelbaseIsSet_;
    std::string axleLoad_;
    bool axleLoadIsSet_;
    std::string axleQuantity_;
    bool axleQuantityIsSet_;
    std::string steeringForm_;
    bool steeringFormIsSet_;
    std::string totalWeight_;
    bool totalWeightIsSet_;
    std::string equipmentWeight_;
    bool equipmentWeightIsSet_;
    std::string maximumLadenMass_;
    bool maximumLadenMassIsSet_;
    std::string massUtilizationCoefficient_;
    bool massUtilizationCoefficientIsSet_;
    std::string tractionWeight_;
    bool tractionWeightIsSet_;
    std::string maximumLoadMass_;
    bool maximumLoadMassIsSet_;
    std::string cabPassengerCapacity_;
    bool cabPassengerCapacityIsSet_;
    std::string passengerCapacity_;
    bool passengerCapacityIsSet_;
    std::string maxDesignSpeed_;
    bool maxDesignSpeedIsSet_;
    std::string manufactureDate_;
    bool manufactureDateIsSet_;
    Object confidence_;
    bool confidenceIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleCertificateResult_H_
