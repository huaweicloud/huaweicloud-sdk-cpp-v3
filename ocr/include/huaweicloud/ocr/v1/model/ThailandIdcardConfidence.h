
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ThailandIdcardConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ThailandIdcardConfidence_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_OCR_V1_EXPORT  ThailandIdcardConfidence
    : public ModelBase
{
public:
    ThailandIdcardConfidence();
    virtual ~ThailandIdcardConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThailandIdcardConfidence members

    /// <summary>
    /// 身份证号置信度。 
    /// </summary>

    float getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(float value);

    /// <summary>
    /// 泰文名字置信度。 
    /// </summary>

    float getNameTh() const;
    bool nameThIsSet() const;
    void unsetnameTh();
    void setNameTh(float value);

    /// <summary>
    /// 英文名置信度。 
    /// </summary>

    float getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(float value);

    /// <summary>
    /// 参考编码置信度。 
    /// </summary>

    float getRefNumber() const;
    bool refNumberIsSet() const;
    void unsetrefNumber();
    void setRefNumber(float value);

    /// <summary>
    /// 英文名字置信度。 
    /// </summary>

    float getFirstNameEn() const;
    bool firstNameEnIsSet() const;
    void unsetfirstNameEn();
    void setFirstNameEn(float value);

    /// <summary>
    /// 英文姓氏置信度。 
    /// </summary>

    float getLastNameEn() const;
    bool lastNameEnIsSet() const;
    void unsetlastNameEn();
    void setLastNameEn(float value);

    /// <summary>
    /// 泰文出生日期置信度。 
    /// </summary>

    float getDateOfBirthTh() const;
    bool dateOfBirthThIsSet() const;
    void unsetdateOfBirthTh();
    void setDateOfBirthTh(float value);

    /// <summary>
    /// 英文出生日期置信度。 
    /// </summary>

    float getDateOfBirthEn() const;
    bool dateOfBirthEnIsSet() const;
    void unsetdateOfBirthEn();
    void setDateOfBirthEn(float value);

    /// <summary>
    /// 宗教置信度。 
    /// </summary>

    float getReligionTh() const;
    bool religionThIsSet() const;
    void unsetreligionTh();
    void setReligionTh(float value);

    /// <summary>
    /// 地址置信度。 
    /// </summary>

    float getAddressTh() const;
    bool addressThIsSet() const;
    void unsetaddressTh();
    void setAddressTh(float value);

    /// <summary>
    /// 泰文签发日期置信度。 
    /// </summary>

    float getDateOfIssueTh() const;
    bool dateOfIssueThIsSet() const;
    void unsetdateOfIssueTh();
    void setDateOfIssueTh(float value);

    /// <summary>
    /// 英文签发日期置信度。 
    /// </summary>

    float getDateOfIssueEn() const;
    bool dateOfIssueEnIsSet() const;
    void unsetdateOfIssueEn();
    void setDateOfIssueEn(float value);

    /// <summary>
    /// 泰文有效期置信度。 
    /// </summary>

    float getDateOfExpiryTh() const;
    bool dateOfExpiryThIsSet() const;
    void unsetdateOfExpiryTh();
    void setDateOfExpiryTh(float value);

    /// <summary>
    /// 英文有效期置信度。 
    /// </summary>

    float getDateOfExpiryEn() const;
    bool dateOfExpiryEnIsSet() const;
    void unsetdateOfExpiryEn();
    void setDateOfExpiryEn(float value);

    /// <summary>
    /// 序列号置信度。 
    /// </summary>

    float getSerialNumber() const;
    bool serialNumberIsSet() const;
    void unsetserialNumber();
    void setSerialNumber(float value);

    /// <summary>
    /// 身份证反面卡号置信度。 
    /// </summary>

    float getCardNumber() const;
    bool cardNumberIsSet() const;
    void unsetcardNumber();
    void setCardNumber(float value);

    /// <summary>
    /// 激光码置信度。 
    /// </summary>

    float getLaserNumber() const;
    bool laserNumberIsSet() const;
    void unsetlaserNumber();
    void setLaserNumber(float value);


protected:
    float idNumber_;
    bool idNumberIsSet_;
    float nameTh_;
    bool nameThIsSet_;
    float nameEn_;
    bool nameEnIsSet_;
    float refNumber_;
    bool refNumberIsSet_;
    float firstNameEn_;
    bool firstNameEnIsSet_;
    float lastNameEn_;
    bool lastNameEnIsSet_;
    float dateOfBirthTh_;
    bool dateOfBirthThIsSet_;
    float dateOfBirthEn_;
    bool dateOfBirthEnIsSet_;
    float religionTh_;
    bool religionThIsSet_;
    float addressTh_;
    bool addressThIsSet_;
    float dateOfIssueTh_;
    bool dateOfIssueThIsSet_;
    float dateOfIssueEn_;
    bool dateOfIssueEnIsSet_;
    float dateOfExpiryTh_;
    bool dateOfExpiryThIsSet_;
    float dateOfExpiryEn_;
    bool dateOfExpiryEnIsSet_;
    float serialNumber_;
    bool serialNumberIsSet_;
    float cardNumber_;
    bool cardNumberIsSet_;
    float laserNumber_;
    bool laserNumberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ThailandIdcardConfidence_H_
