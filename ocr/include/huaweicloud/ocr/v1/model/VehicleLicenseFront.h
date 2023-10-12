
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseFront_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseFront_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  VehicleLicenseFront
    : public ModelBase
{
public:
    VehicleLicenseFront();
    virtual ~VehicleLicenseFront();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VehicleLicenseFront members

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
    /// 车辆识别代号。
    /// </summary>

    std::string getVin() const;
    bool vinIsSet() const;
    void unsetvin();
    void setVin(const std::string& value);

    /// <summary>
    /// 发动机号码。
    /// </summary>

    std::string getEngineNo() const;
    bool engineNoIsSet() const;
    void unsetengineNo();
    void setEngineNo(const std::string& value);

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
    /// 文本框在原图位置。输出左上、右上、右下、左下四个点坐标。  当“return_text_location”设置为“true”时才返回。
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);


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
    std::string vin_;
    bool vinIsSet_;
    std::string engineNo_;
    bool engineNoIsSet_;
    std::string registerDate_;
    bool registerDateIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_VehicleLicenseFront_H_
