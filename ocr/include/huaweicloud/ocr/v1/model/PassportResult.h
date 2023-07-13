
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_PassportResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_PassportResult_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  PassportResult
    : public ModelBase
{
public:
    PassportResult();
    virtual ~PassportResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PassportResult members

    /// <summary>
    /// 护照类型（P:普通因私护照、W:外交护照、G:公务护照）（英文）。 
    /// </summary>

    std::string getPassportType() const;
    bool passportTypeIsSet() const;
    void unsetpassportType();
    void setPassportType(const std::string& value);

    /// <summary>
    /// 护照签发国的国家码（英文）。 
    /// </summary>

    std::string getCountryCode() const;
    bool countryCodeIsSet() const;
    void unsetcountryCode();
    void setCountryCode(const std::string& value);

    /// <summary>
    /// 护照号码（英文）。 
    /// </summary>

    std::string getPassportNumber() const;
    bool passportNumberIsSet() const;
    void unsetpassportNumber();
    void setPassportNumber(const std::string& value);

    /// <summary>
    /// 护照持有人国籍（英文）。 
    /// </summary>

    std::string getNationality() const;
    bool nationalityIsSet() const;
    void unsetnationality();
    void setNationality(const std::string& value);

    /// <summary>
    /// 姓（英文）。 
    /// </summary>

    std::string getSurname() const;
    bool surnameIsSet() const;
    void unsetsurname();
    void setSurname(const std::string& value);

    /// <summary>
    /// 名字（英文）。 
    /// </summary>

    std::string getGivenName() const;
    bool givenNameIsSet() const;
    void unsetgivenName();
    void setGivenName(const std::string& value);

    /// <summary>
    /// 性别（英文）。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 出生日期（英文）。 
    /// </summary>

    std::string getDateOfBirth() const;
    bool dateOfBirthIsSet() const;
    void unsetdateOfBirth();
    void setDateOfBirth(const std::string& value);

    /// <summary>
    /// 护照有效期（英文）。 
    /// </summary>

    std::string getDateOfExpiry() const;
    bool dateOfExpiryIsSet() const;
    void unsetdateOfExpiry();
    void setDateOfExpiry(const std::string& value);

    /// <summary>
    /// 护照签发日期（英文）。 
    /// </summary>

    std::string getDateOfIssue() const;
    bool dateOfIssueIsSet() const;
    void unsetdateOfIssue();
    void setDateOfIssue(const std::string& value);

    /// <summary>
    /// 出生地（英文）。 
    /// </summary>

    std::string getPlaceOfBirth() const;
    bool placeOfBirthIsSet() const;
    void unsetplaceOfBirth();
    void setPlaceOfBirth(const std::string& value);

    /// <summary>
    /// 签发地（英文）。 
    /// </summary>

    std::string getPlaceOfIssue() const;
    bool placeOfIssueIsSet() const;
    void unsetplaceOfIssue();
    void setPlaceOfIssue(const std::string& value);

    /// <summary>
    /// 签发机构（英文），其中对中国的英文简写统一输出为P.R.China。 
    /// </summary>

    std::string getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);

    /// <summary>
    /// 默认为空。对于部分常见国家的护照OCR服务，extra_info内会包含护照上由本地官方语言描述的字段信息及其他信息。 如中国护照，里面会包含汉字表达的姓名、出生地等信息。 
    /// </summary>

    Object getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const Object& value);


protected:
    std::string passportType_;
    bool passportTypeIsSet_;
    std::string countryCode_;
    bool countryCodeIsSet_;
    std::string passportNumber_;
    bool passportNumberIsSet_;
    std::string nationality_;
    bool nationalityIsSet_;
    std::string surname_;
    bool surnameIsSet_;
    std::string givenName_;
    bool givenNameIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string dateOfBirth_;
    bool dateOfBirthIsSet_;
    std::string dateOfExpiry_;
    bool dateOfExpiryIsSet_;
    std::string dateOfIssue_;
    bool dateOfIssueIsSet_;
    std::string placeOfBirth_;
    bool placeOfBirthIsSet_;
    std::string placeOfIssue_;
    bool placeOfIssueIsSet_;
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
    Object confidence_;
    bool confidenceIsSet_;
    Object extraInfo_;
    bool extraInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_PassportResult_H_
