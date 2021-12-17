
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ThailandIdcardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ThailandIdcardResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/ThailandIdcardConfidence.h>
#include <vector>

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
class HUAWEICLOUD_OCR_V1_EXPORT  ThailandIdcardResult
    : public ModelBase
{
public:
    ThailandIdcardResult();
    virtual ~ThailandIdcardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ThailandIdcardResult members

    /// <summary>
    /// 标示正面还是反面，取值为front或back。 
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 身份证号。 
    /// </summary>

    std::string getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(const std::string& value);

    /// <summary>
    /// 泰文名字。 
    /// </summary>

    std::string getNameTh() const;
    bool nameThIsSet() const;
    void unsetnameTh();
    void setNameTh(const std::string& value);

    /// <summary>
    /// 英文名字。 
    /// </summary>

    std::string getFirstNameEn() const;
    bool firstNameEnIsSet() const;
    void unsetfirstNameEn();
    void setFirstNameEn(const std::string& value);

    /// <summary>
    /// 英文姓氏。 
    /// </summary>

    std::string getLastNameEn() const;
    bool lastNameEnIsSet() const;
    void unsetlastNameEn();
    void setLastNameEn(const std::string& value);

    /// <summary>
    /// 泰文出生日期。 
    /// </summary>

    std::string getDateOfBirthTh() const;
    bool dateOfBirthThIsSet() const;
    void unsetdateOfBirthTh();
    void setDateOfBirthTh(const std::string& value);

    /// <summary>
    /// 英文出生日期。 
    /// </summary>

    std::string getDateOfBirthEn() const;
    bool dateOfBirthEnIsSet() const;
    void unsetdateOfBirthEn();
    void setDateOfBirthEn(const std::string& value);

    /// <summary>
    /// 宗教。 
    /// </summary>

    std::string getReligionTh() const;
    bool religionThIsSet() const;
    void unsetreligionTh();
    void setReligionTh(const std::string& value);

    /// <summary>
    /// 地址。 
    /// </summary>

    std::string getAddressTh() const;
    bool addressThIsSet() const;
    void unsetaddressTh();
    void setAddressTh(const std::string& value);

    /// <summary>
    /// 泰文签发日期。 
    /// </summary>

    std::string getDateOfIssueTh() const;
    bool dateOfIssueThIsSet() const;
    void unsetdateOfIssueTh();
    void setDateOfIssueTh(const std::string& value);

    /// <summary>
    /// 英文签发日期。 
    /// </summary>

    std::string getDateOfIssueEn() const;
    bool dateOfIssueEnIsSet() const;
    void unsetdateOfIssueEn();
    void setDateOfIssueEn(const std::string& value);

    /// <summary>
    /// 泰文有效期。 
    /// </summary>

    std::string getDateOfExpiryTh() const;
    bool dateOfExpiryThIsSet() const;
    void unsetdateOfExpiryTh();
    void setDateOfExpiryTh(const std::string& value);

    /// <summary>
    /// 英文有效期。 
    /// </summary>

    std::string getDateOfExpiryEn() const;
    bool dateOfExpiryEnIsSet() const;
    void unsetdateOfExpiryEn();
    void setDateOfExpiryEn(const std::string& value);

    /// <summary>
    /// 序列号。 
    /// </summary>

    std::string getSerialNumber() const;
    bool serialNumberIsSet() const;
    void unsetserialNumber();
    void setSerialNumber(const std::string& value);

    /// <summary>
    /// 身份证反面卡号。 
    /// </summary>

    std::string getCardNumber() const;
    bool cardNumberIsSet() const;
    void unsetcardNumber();
    void setCardNumber(const std::string& value);

    /// <summary>
    /// 激光码。 
    /// </summary>

    std::string getLaserNumber() const;
    bool laserNumberIsSet() const;
    void unsetlaserNumber();
    void setLaserNumber(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ThailandIdcardConfidence getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const ThailandIdcardConfidence& value);

    /// <summary>
    /// 头像的base64编码。 当输入参数“return_portrait_image”为“true”时，才返回该参数。 
    /// </summary>

    std::string getPortraitImage() const;
    bool portraitImageIsSet() const;
    void unsetportraitImage();
    void setPortraitImage(const std::string& value);

    /// <summary>
    /// 头像在原图上的位置。 当输入参数“return_portrait_location”为“true”时，才返回该参数。以列表形式显示，包含头像区域四个顶点的二维坐标（x,y），坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向 
    /// </summary>

    std::vector<std::vector<int32_t>>& getPortraitLocation();
    bool portraitLocationIsSet() const;
    void unsetportraitLocation();
    void setPortraitLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 身份证的类型。取值如下所示： - normal：身份证原件 - copy：复印的身份证 当输入参数“return_idcard_type”为“true”时，才返回该参数。 
    /// </summary>

    std::string getIdcardType() const;
    bool idcardTypeIsSet() const;
    void unsetidcardType();
    void setIdcardType(const std::string& value);


protected:
    std::string side_;
    bool sideIsSet_;
    std::string idNumber_;
    bool idNumberIsSet_;
    std::string nameTh_;
    bool nameThIsSet_;
    std::string firstNameEn_;
    bool firstNameEnIsSet_;
    std::string lastNameEn_;
    bool lastNameEnIsSet_;
    std::string dateOfBirthTh_;
    bool dateOfBirthThIsSet_;
    std::string dateOfBirthEn_;
    bool dateOfBirthEnIsSet_;
    std::string religionTh_;
    bool religionThIsSet_;
    std::string addressTh_;
    bool addressThIsSet_;
    std::string dateOfIssueTh_;
    bool dateOfIssueThIsSet_;
    std::string dateOfIssueEn_;
    bool dateOfIssueEnIsSet_;
    std::string dateOfExpiryTh_;
    bool dateOfExpiryThIsSet_;
    std::string dateOfExpiryEn_;
    bool dateOfExpiryEnIsSet_;
    std::string serialNumber_;
    bool serialNumberIsSet_;
    std::string cardNumber_;
    bool cardNumberIsSet_;
    std::string laserNumber_;
    bool laserNumberIsSet_;
    ThailandIdcardConfidence confidence_;
    bool confidenceIsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    std::vector<std::vector<int32_t>> portraitLocation_;
    bool portraitLocationIsSet_;
    std::string idcardType_;
    bool idcardTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ThailandIdcardResult_H_
