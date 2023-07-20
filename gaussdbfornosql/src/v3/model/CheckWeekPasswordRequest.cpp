

#include "huaweicloud/gaussdbfornosql/v3/model/CheckWeekPasswordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CheckWeekPasswordRequest::CheckWeekPasswordRequest()
{
    bodyIsSet_ = false;
}

CheckWeekPasswordRequest::~CheckWeekPasswordRequest() = default;

void CheckWeekPasswordRequest::validate()
{
}

web::json::value CheckWeekPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CheckWeekPasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CheckWeekPasswordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CheckWeekPasswordRequestBody CheckWeekPasswordRequest::getBody() const
{
    return body_;
}

void CheckWeekPasswordRequest::setBody(const CheckWeekPasswordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckWeekPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckWeekPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


