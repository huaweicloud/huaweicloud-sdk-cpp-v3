
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_DriverLicenseBack_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_DriverLicenseBack_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  DriverLicenseBack
    : public ModelBase
{
public:
    DriverLicenseBack();
    virtual ~DriverLicenseBack();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DriverLicenseBack members

    /// <summary>
    /// 驾驶证类型。 normal：纸质驾驶证 electronic：电子驾驶证 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 驾驶证号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 发证机关。 
    /// </summary>

    std::string getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(const std::string& value);

    /// <summary>
    /// 住址。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 档案编号。 &gt; 说明：当驾驶证类型为纸质驾驶证时才返回。 
    /// </summary>

    std::string getFileNumber() const;
    bool fileNumberIsSet() const;
    void unsetfileNumber();
    void setFileNumber(const std::string& value);

    /// <summary>
    /// 记录。 
    /// </summary>

    std::string getRecord() const;
    bool recordIsSet() const;
    void unsetrecord();
    void setRecord(const std::string& value);

    /// <summary>
    /// 对应所有在原图上识别到的字段位置信息，包含所有文字区域四个顶点的二维坐标（x,y）。采用图像坐标系，坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string fileNumber_;
    bool fileNumberIsSet_;
    std::string record_;
    bool recordIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_DriverLicenseBack_H_
