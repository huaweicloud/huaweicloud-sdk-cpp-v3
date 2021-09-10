
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  VehicleLicenseResult
    : public ModelBase
{
public:
    VehicleLicenseResult();
    virtual ~VehicleLicenseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VehicleLicenseResult members

    /// <summary>
    /// 号牌号码。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 车辆类型。 
    /// </summary>

    std::string getVehicleType() const;
    bool vehicleTypeIsSet() const;
    void unsetvehicleType();
    void setVehicleType(const std::string& value);

    /// <summary>
    /// 所有人。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 住址。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 使用性质。 
    /// </summary>

    std::string getUseCharacter() const;
    bool useCharacterIsSet() const;
    void unsetuseCharacter();
    void setUseCharacter(const std::string& value);

    /// <summary>
    /// 品牌型号。 
    /// </summary>

    std::string getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const std::string& value);

    /// <summary>
    /// 发动机号码。 
    /// </summary>

    std::string getEngineNo() const;
    bool engineNoIsSet() const;
    void unsetengineNo();
    void setEngineNo(const std::string& value);

    /// <summary>
    /// 车辆识别代号。 
    /// </summary>

    std::string getVin() const;
    bool vinIsSet() const;
    void unsetvin();
    void setVin(const std::string& value);

    /// <summary>
    /// 注册日期。 
    /// </summary>

    std::string getRegisterDate() const;
    bool registerDateIsSet() const;
    void unsetregisterDate();
    void setRegisterDate(const std::string& value);

    /// <summary>
    /// 发证日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 发证机关。 
    /// </summary>

    std::string getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(const std::string& value);

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


protected:
    std::string number_;
    bool numberIsSet_;
    std::string vehicleType_;
    bool vehicleTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string useCharacter_;
    bool useCharacterIsSet_;
    std::string model_;
    bool modelIsSet_;
    std::string engineNo_;
    bool engineNoIsSet_;
    std::string vin_;
    bool vinIsSet_;
    std::string registerDate_;
    bool registerDateIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseResult_H_
