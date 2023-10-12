

#include "huaweicloud/ocr/v1/model/RecognizeAcceptanceBillResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeAcceptanceBillResponse::RecognizeAcceptanceBillResponse()
{
    resultIsSet_ = false;
}

RecognizeAcceptanceBillResponse::~RecognizeAcceptanceBillResponse() = default;

void RecognizeAcceptanceBillResponse::validate()
{
}

web::json::value RecognizeAcceptanceBillResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeAcceptanceBillResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            AcceptanceBillResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


AcceptanceBillResult RecognizeAcceptanceBillResponse::getResult() const
{
    return result_;
}

void RecognizeAcceptanceBillResponse::setResult(const AcceptanceBillResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeAcceptanceBillResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeAcceptanceBillResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


