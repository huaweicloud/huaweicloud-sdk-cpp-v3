
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarDriverLicenseResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarDriverLicenseResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ocr/v1/model/MyanmarDriverLicenseConfidence.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  MyanmarDriverLicenseResult
    : public ModelBase
{
public:
    MyanmarDriverLicenseResult();
    virtual ~MyanmarDriverLicenseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MyanmarDriverLicenseResult members

    /// <summary>
    /// 缅文驾驶证号。 
    /// </summary>

    std::string getCardNumber() const;
    bool cardNumberIsSet() const;
    void unsetcardNumber();
    void setCardNumber(const std::string& value);

    /// <summary>
    /// 英文驾驶证号。 
    /// </summary>

    std::string getCardNumberEn() const;
    bool cardNumberEnIsSet() const;
    void unsetcardNumberEn();
    void setCardNumberEn(const std::string& value);

    /// <summary>
    /// 缅文名字。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 英文名字。 
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// 缅文nrc号码。 
    /// </summary>

    std::string getNrcId() const;
    bool nrcIdIsSet() const;
    void unsetnrcId();
    void setNrcId(const std::string& value);

    /// <summary>
    /// 英文nrc号码。 
    /// </summary>

    std::string getNrcIdEn() const;
    bool nrcIdEnIsSet() const;
    void unsetnrcIdEn();
    void setNrcIdEn(const std::string& value);

    /// <summary>
    /// 缅文出生日期。 
    /// </summary>

    std::string getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(const std::string& value);

    /// <summary>
    /// 英文出生日期。 
    /// </summary>

    std::string getBirthEn() const;
    bool birthEnIsSet() const;
    void unsetbirthEn();
    void setBirthEn(const std::string& value);

    /// <summary>
    /// 缅文血型。 
    /// </summary>

    std::string getBloodGroup() const;
    bool bloodGroupIsSet() const;
    void unsetbloodGroup();
    void setBloodGroup(const std::string& value);

    /// <summary>
    /// 英文血型。 
    /// </summary>

    std::string getBloodGroupEn() const;
    bool bloodGroupEnIsSet() const;
    void unsetbloodGroupEn();
    void setBloodGroupEn(const std::string& value);

    /// <summary>
    /// 缅文有效期。 
    /// </summary>

    std::string getExpiriedDate() const;
    bool expiriedDateIsSet() const;
    void unsetexpiriedDate();
    void setExpiriedDate(const std::string& value);

    /// <summary>
    /// 英文有效期。 
    /// </summary>

    std::string getExpiriedDateEn() const;
    bool expiriedDateEnIsSet() const;
    void unsetexpiriedDateEn();
    void setExpiriedDateEn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MyanmarDriverLicenseConfidence getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const MyanmarDriverLicenseConfidence& value);


protected:
    std::string cardNumber_;
    bool cardNumberIsSet_;
    std::string cardNumberEn_;
    bool cardNumberEnIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::string nrcId_;
    bool nrcIdIsSet_;
    std::string nrcIdEn_;
    bool nrcIdEnIsSet_;
    std::string birth_;
    bool birthIsSet_;
    std::string birthEn_;
    bool birthEnIsSet_;
    std::string bloodGroup_;
    bool bloodGroupIsSet_;
    std::string bloodGroupEn_;
    bool bloodGroupEnIsSet_;
    std::string expiriedDate_;
    bool expiriedDateIsSet_;
    std::string expiriedDateEn_;
    bool expiriedDateEnIsSet_;
    MyanmarDriverLicenseConfidence confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarDriverLicenseResult_H_
