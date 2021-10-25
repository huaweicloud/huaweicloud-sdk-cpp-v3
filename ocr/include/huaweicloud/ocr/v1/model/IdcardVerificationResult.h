
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
/// 校验信息。仅在输入参数return_verification为true时返回该字段。
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
    /// 身份证号合法。校验规则为：将身份证号前17位数字分别乘以7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2，再求和，求和结果对11取模，取模结果作为数组[1,0,X,9,8,7,6,5,4,3,2]的下标，从里面取出一位结果，例如取模结果为0，则从数组里取出来的结果是1，最后判断从数组里面取出来的结果是否和身份证号最后一位是否一致。如果一致，代表身份证号合法，返回true，否则代表身份证号不合法，返回false。  当身份证图片是背面时，默认是false。 
    /// </summary>

    bool isValidNumber() const;
    bool validNumberIsSet() const;
    void unsetvalidNumber();
    void setValidNumber(bool value);

    /// <summary>
    /// 身份证号与出生日期一致。出生日期和身份证号的第7位和第14位之间表示的出生日期是否一致。一致返回true，否则返回false。  当身份证图片是背面时，默认是false。 
    /// </summary>

    bool isValidBirth() const;
    bool validBirthIsSet() const;
    void unsetvalidBirth();
    void setValidBirth(bool value);

    /// <summary>
    /// 身份证号与性别一致。性别和身份证号的第17位表示的性别信息是否一致。身份证号的第17位如果为奇数表示男性，偶数表示女性。一致返回true，否则返回false。  当身份证图片是背面时，默认是false。 
    /// </summary>

    bool isValidSex() const;
    bool validSexIsSet() const;
    void unsetvalidSex();
    void setValidSex(bool value);

    /// <summary>
    /// 当前日期在有效期内。当前日期在身份证有效期内返回true，否则返回false。  当身份证图片是正面时，默认是false。 
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
