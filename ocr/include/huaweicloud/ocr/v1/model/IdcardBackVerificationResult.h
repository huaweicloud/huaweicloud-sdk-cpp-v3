
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_IdcardBackVerificationResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_IdcardBackVerificationResult_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  IdcardBackVerificationResult
    : public ModelBase
{
public:
    IdcardBackVerificationResult();
    virtual ~IdcardBackVerificationResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdcardBackVerificationResult members

    /// <summary>
    /// 当前日期是否在有效期内。 - true：表示当前日期在有效期内。 - false：表示当前日期不在有效期内。 当识别结果为单页，身份证图片是人像面时，默认是false。输入参数side为double_side时，该字段仅在back字典中存在。 仅在输入参数return_verification为true时，返回该字段。 
    /// </summary>

    bool isValidDate() const;
    bool validDateIsSet() const;
    void unsetvalidDate();
    void setValidDate(bool value);

    /// <summary>
    /// 身份证有效日期是否合法。 - true：表示身份证的有效日期合法 - false：表示身份证有效日期非法 当识别结果为单页，身份证图片是人像面时，默认是false。输入参数side为double_side时，该字段仅在back字典中存在。 仅在输入参数return_verification为true时，返回该字段。 
    /// </summary>

    bool isValidValidityPeriod() const;
    bool validValidityPeriodIsSet() const;
    void unsetvalidValidityPeriod();
    void setValidValidityPeriod(bool value);


protected:
    bool validDate_;
    bool validDateIsSet_;
    bool validValidityPeriod_;
    bool validValidityPeriodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_IdcardBackVerificationResult_H_
