
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarDriverLicenseConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarDriverLicenseConfidence_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  MyanmarDriverLicenseConfidence
    : public ModelBase
{
public:
    MyanmarDriverLicenseConfidence();
    virtual ~MyanmarDriverLicenseConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MyanmarDriverLicenseConfidence members

    /// <summary>
    /// 缅文驾驶证号置信度。 
    /// </summary>

    float getCardNumber() const;
    bool cardNumberIsSet() const;
    void unsetcardNumber();
    void setCardNumber(float value);

    /// <summary>
    /// 英文驾驶证号置信度。 
    /// </summary>

    float getCardNumberEn() const;
    bool cardNumberEnIsSet() const;
    void unsetcardNumberEn();
    void setCardNumberEn(float value);

    /// <summary>
    /// 缅文名字置信度。 
    /// </summary>

    float getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(float value);

    /// <summary>
    /// 英文名字置信度。 
    /// </summary>

    float getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(float value);

    /// <summary>
    /// 缅文nrc号码置信度。 
    /// </summary>

    float getNrcId() const;
    bool nrcIdIsSet() const;
    void unsetnrcId();
    void setNrcId(float value);

    /// <summary>
    /// 英文nrc号码置信度。 
    /// </summary>

    float getNrcIdEn() const;
    bool nrcIdEnIsSet() const;
    void unsetnrcIdEn();
    void setNrcIdEn(float value);

    /// <summary>
    /// 缅文出生日期置信度。 
    /// </summary>

    float getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(float value);

    /// <summary>
    /// 英文出生日期置信度。 
    /// </summary>

    float getBirthEn() const;
    bool birthEnIsSet() const;
    void unsetbirthEn();
    void setBirthEn(float value);

    /// <summary>
    /// 缅文血型置信度。 
    /// </summary>

    float getBloodGroup() const;
    bool bloodGroupIsSet() const;
    void unsetbloodGroup();
    void setBloodGroup(float value);

    /// <summary>
    /// 英文血型置信度。 
    /// </summary>

    float getBloodGroupEn() const;
    bool bloodGroupEnIsSet() const;
    void unsetbloodGroupEn();
    void setBloodGroupEn(float value);

    /// <summary>
    /// 缅文有效期置信度。 
    /// </summary>

    float getExpiriedDate() const;
    bool expiriedDateIsSet() const;
    void unsetexpiriedDate();
    void setExpiriedDate(float value);

    /// <summary>
    /// 英文有效期置信度。 
    /// </summary>

    float getExpiriedDateEn() const;
    bool expiriedDateEnIsSet() const;
    void unsetexpiriedDateEn();
    void setExpiriedDateEn(float value);


protected:
    float cardNumber_;
    bool cardNumberIsSet_;
    float cardNumberEn_;
    bool cardNumberEnIsSet_;
    float name_;
    bool nameIsSet_;
    float nameEn_;
    bool nameEnIsSet_;
    float nrcId_;
    bool nrcIdIsSet_;
    float nrcIdEn_;
    bool nrcIdEnIsSet_;
    float birth_;
    bool birthIsSet_;
    float birthEn_;
    bool birthEnIsSet_;
    float bloodGroup_;
    bool bloodGroupIsSet_;
    float bloodGroupEn_;
    bool bloodGroupEnIsSet_;
    float expiriedDate_;
    bool expiriedDateIsSet_;
    float expiriedDateEn_;
    bool expiriedDateEnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarDriverLicenseConfidence_H_
