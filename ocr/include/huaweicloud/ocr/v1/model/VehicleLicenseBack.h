
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseBack_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseBack_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/ocr/v1/model/VehicleLicenseAlarmConfidence.h>
#include <huaweicloud/ocr/v1/model/VehicleLicenseAlarmResult.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  VehicleLicenseBack
    : public ModelBase
{
public:
    VehicleLicenseBack();
    virtual ~VehicleLicenseBack();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VehicleLicenseBack members

    /// <summary>
    /// 号牌号码。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 档案编码。 
    /// </summary>

    std::string getFileNo() const;
    bool fileNoIsSet() const;
    void unsetfileNo();
    void setFileNo(const std::string& value);

    /// <summary>
    /// 核定载人数。 
    /// </summary>

    std::string getApprovedPassengers() const;
    bool approvedPassengersIsSet() const;
    void unsetapprovedPassengers();
    void setApprovedPassengers(const std::string& value);

    /// <summary>
    /// 总质量。 
    /// </summary>

    std::string getGrossMass() const;
    bool grossMassIsSet() const;
    void unsetgrossMass();
    void setGrossMass(const std::string& value);

    /// <summary>
    /// 整备质量。 
    /// </summary>

    std::string getUnladenMass() const;
    bool unladenMassIsSet() const;
    void unsetunladenMass();
    void setUnladenMass(const std::string& value);

    /// <summary>
    /// 核定载质量。 
    /// </summary>

    std::string getApprovedLoad() const;
    bool approvedLoadIsSet() const;
    void unsetapprovedLoad();
    void setApprovedLoad(const std::string& value);

    /// <summary>
    /// 外廓尺寸。 
    /// </summary>

    std::string getDimension() const;
    bool dimensionIsSet() const;
    void unsetdimension();
    void setDimension(const std::string& value);

    /// <summary>
    /// 准牵引总质量。 
    /// </summary>

    std::string getTractionMass() const;
    bool tractionMassIsSet() const;
    void unsettractionMass();
    void setTractionMass(const std::string& value);

    /// <summary>
    /// 备注。 
    /// </summary>

    std::string getRemarks() const;
    bool remarksIsSet() const;
    void unsetremarks();
    void setRemarks(const std::string& value);

    /// <summary>
    /// 检验记录。 
    /// </summary>

    std::string getInspectionRecord() const;
    bool inspectionRecordIsSet() const;
    void unsetinspectionRecord();
    void setInspectionRecord(const std::string& value);

    /// <summary>
    /// 条码号。           
    /// </summary>

    std::string getCodeNumber() const;
    bool codeNumberIsSet() const;
    void unsetcodeNumber();
    void setCodeNumber(const std::string& value);

    /// <summary>
    /// 能源类型。 
    /// </summary>

    std::string getEnergyType() const;
    bool energyTypeIsSet() const;
    void unsetenergyType();
    void setEnergyType(const std::string& value);

    /// <summary>
    /// 文本框在原图位置。输出左上、右上、右下、左下四个点坐标。  当“return_text_location”设置为“true”时才返回。 
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    VehicleLicenseAlarmResult getAlarmResult() const;
    bool alarmResultIsSet() const;
    void unsetalarmResult();
    void setAlarmResult(const VehicleLicenseAlarmResult& value);

    /// <summary>
    /// 
    /// </summary>

    VehicleLicenseAlarmConfidence getAlarmConfidence() const;
    bool alarmConfidenceIsSet() const;
    void unsetalarmConfidence();
    void setAlarmConfidence(const VehicleLicenseAlarmConfidence& value);


protected:
    std::string number_;
    bool numberIsSet_;
    std::string fileNo_;
    bool fileNoIsSet_;
    std::string approvedPassengers_;
    bool approvedPassengersIsSet_;
    std::string grossMass_;
    bool grossMassIsSet_;
    std::string unladenMass_;
    bool unladenMassIsSet_;
    std::string approvedLoad_;
    bool approvedLoadIsSet_;
    std::string dimension_;
    bool dimensionIsSet_;
    std::string tractionMass_;
    bool tractionMassIsSet_;
    std::string remarks_;
    bool remarksIsSet_;
    std::string inspectionRecord_;
    bool inspectionRecordIsSet_;
    std::string codeNumber_;
    bool codeNumberIsSet_;
    std::string energyType_;
    bool energyTypeIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;
    VehicleLicenseAlarmResult alarmResult_;
    bool alarmResultIsSet_;
    VehicleLicenseAlarmConfidence alarmConfidence_;
    bool alarmConfidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseBack_H_
