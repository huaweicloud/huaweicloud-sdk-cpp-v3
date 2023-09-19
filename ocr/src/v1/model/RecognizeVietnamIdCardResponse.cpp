

#include "huaweicloud/ocr/v1/model/RecognizeVietnamIdCardResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVietnamIdCardResponse::RecognizeVietnamIdCardResponse()
{
    resultIsSet_ = false;
}

RecognizeVietnamIdCardResponse::~RecognizeVietnamIdCardResponse() = default;

void RecognizeVietnamIdCardResponse::validate()
{
}

web::json::value RecognizeVietnamIdCardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeVietnamIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            VietnamIdCardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

VietnamIdCardResult RecognizeVietnamIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeVietnamIdCardResponse::setResult(const VietnamIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeVietnamIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeVietnamIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


