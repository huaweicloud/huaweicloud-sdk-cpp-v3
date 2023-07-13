
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_IdDocumentItem_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_IdDocumentItem_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  IdDocumentItem
    : public ModelBase
{
public:
    IdDocumentItem();
    virtual ~IdDocumentItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// IdDocumentItem members

    /// <summary>
    /// 证件签发国家或地区代码，命名遵循ISO-3166 3位代码。当前支持国家列表见表1。 
    /// </summary>

    std::string getCountryRegion() const;
    bool countryRegionIsSet() const;
    void unsetcountryRegion();
    void setCountryRegion(const std::string& value);

    /// <summary>
    /// 证件类型，可选值如下： - PP: passport，国际护照。 - DL: driving license，驾驶证。 - ID: identification card，各国颁发的身份证类型证件，比如身份证、选民卡、社保卡等。 
    /// </summary>

    std::string getIdType() const;
    bool idTypeIsSet() const;
    void unsetidType();
    void setIdType(const std::string& value);

    /// <summary>
    /// 证件正面或反面,可选值： - front: 正面，一般是包含人像的那面 - back: 背面 对于只有一面的卡证，返回front 
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 名 
    /// </summary>

    std::string getFirstName() const;
    bool firstNameIsSet() const;
    void unsetfirstName();
    void setFirstName(const std::string& value);

    /// <summary>
    /// 姓氏 
    /// </summary>

    std::string getLastName() const;
    bool lastNameIsSet() const;
    void unsetlastName();
    void setLastName(const std::string& value);

    /// <summary>
    /// 性别，可选值： M:男性 F:女性 X:中性 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 持有人国籍 
    /// </summary>

    std::string getNationality() const;
    bool nationalityIsSet() const;
    void unsetnationality();
    void setNationality(const std::string& value);

    /// <summary>
    /// 生日，格式为yyyy-mm-dd 
    /// </summary>

    std::string getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(const std::string& value);

    /// <summary>
    /// 签发日期，yyyy-mm-dd 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 有效日期，yyyy-mm-dd 
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// 证件号码 
    /// </summary>

    std::string getDocumentNumber() const;
    bool documentNumberIsSet() const;
    void unsetdocumentNumber();
    void setDocumentNumber(const std::string& value);

    /// <summary>
    /// 持有人通讯地址 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 签发机关 
    /// </summary>

    std::string getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(const std::string& value);

    /// <summary>
    /// 可选返回，证件头像图像base64编码 
    /// </summary>

    std::string getPortraitImage() const;
    bool portraitImageIsSet() const;
    void unsetportraitImage();
    void setPortraitImage(const std::string& value);

    /// <summary>
    /// 字段置信度，为0~1之间的小数，值越大，表明识别结果越可靠 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string countryRegion_;
    bool countryRegionIsSet_;
    std::string idType_;
    bool idTypeIsSet_;
    std::string side_;
    bool sideIsSet_;
    std::string firstName_;
    bool firstNameIsSet_;
    std::string lastName_;
    bool lastNameIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string nationality_;
    bool nationalityIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string documentNumber_;
    bool documentNumberIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_IdDocumentItem_H_
