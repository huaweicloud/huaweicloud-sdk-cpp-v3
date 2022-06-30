

#include "huaweicloud/ocr/v1/model/RecognizeExitEntryPermitResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeExitEntryPermitResponse::RecognizeExitEntryPermitResponse()
{
    resultIsSet_ = false;
}

RecognizeExitEntryPermitResponse::~RecognizeExitEntryPermitResponse() = default;

void RecognizeExitEntryPermitResponse::validate()
{
}

web::json::value RecognizeExitEntryPermitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeExitEntryPermitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


Object RecognizeExitEntryPermitResponse::getResult() const
{
    return result_;
}

void RecognizeExitEntryPermitResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeExitEntryPermitResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeExitEntryPermitResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


