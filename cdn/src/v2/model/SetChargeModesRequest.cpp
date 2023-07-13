

#include "huaweicloud/cdn/v2/model/SetChargeModesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SetChargeModesRequest::SetChargeModesRequest()
{
    bodyIsSet_ = false;
}

SetChargeModesRequest::~SetChargeModesRequest() = default;

void SetChargeModesRequest::validate()
{
}

web::json::value SetChargeModesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool SetChargeModesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetChargeModesBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

SetChargeModesBody SetChargeModesRequest::getBody() const
{
    return body_;
}

void SetChargeModesRequest::setBody(const SetChargeModesBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetChargeModesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetChargeModesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


