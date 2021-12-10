
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_IdcardVerificationResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_IdcardVerificationResult_H_

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
/// 校验信息。仅在输入参数return_verification为true时，返回该字段，该字段包含valid_number、valid_birth、valid_sex和valid_date的校验信息。
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  IdcardVerificationResult
    : public ModelBase
{
public:
    IdcardVerificationResult();
    virtual ~IdcardVerificationResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// IdcardVerificationResult members

    /// <summary>
    /// 身份证号规则校验是否通过。“true”表示身份证号规则校验通过，“false”表示身份证号规则校验不通过。当身份证图片是国徽面时，默认是false。仅在输入参数return_verification为true时，返回该字段。 
    /// </summary>

    bool isValidNumber() const;
    bool validNumberIsSet() const;
    void unsetvalidNumber();
    void setValidNumber(bool value);

    /// <summary>
    /// 出生日期与身份证号所表示的出生日期是否一致。“true”表示一致，“false”表示不一致。当身份证图片是国徽面，或者身份证号规则校验不通过时，默认是false。仅在输入参数return_verification为true时，返回该字段。 
    /// </summary>

    bool isValidBirth() const;
    bool validBirthIsSet() const;
    void unsetvalidBirth();
    void setValidBirth(bool value);

    /// <summary>
    /// 性别与身份证号所表示的性别信息是否一致。“true”表示一致，“false”表示不一致。当身份证图片是国徽面，或者身份证号规则校验不通过时，默认是false。仅在输入参数return_verification为true时，返回该字段。 
    /// </summary>

    bool isValidSex() const;
    bool validSexIsSet() const;
    void unsetvalidSex();
    void setValidSex(bool value);

    /// <summary>
    /// 当前日期是否在有效期内。“true”表示当前日期在有效期内，“false”表示当前日期不在有效期内。当身份证图片是人像面时，默认是false。仅在输入参数return_verification为true时，返回该字段。 
    /// </summary>

    bool isValidDate() const;
    bool validDateIsSet() const;
    void unsetvalidDate();
    void setValidDate(bool value);


protected:
    bool validNumber_;
    bool validNumberIsSet_;
    bool validBirth_;
    bool validBirthIsSet_;
    bool validSex_;
    bool validSexIsSet_;
    bool validDate_;
    bool validDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_IdcardVerificationResult_H_
