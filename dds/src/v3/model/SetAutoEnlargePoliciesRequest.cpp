

#include "huaweicloud/dds/v3/model/SetAutoEnlargePoliciesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SetAutoEnlargePoliciesRequest::SetAutoEnlargePoliciesRequest()
{
    bodyIsSet_ = false;
}

SetAutoEnlargePoliciesRequest::~SetAutoEnlargePoliciesRequest() = default;

void SetAutoEnlargePoliciesRequest::validate()
{
}

web::json::value SetAutoEnlargePoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetAutoEnlargePoliciesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetAutoEnlargePoliciesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SetAutoEnlargePoliciesRequestBody SetAutoEnlargePoliciesRequest::getBody() const
{
    return body_;
}

void SetAutoEnlargePoliciesRequest::setBody(const SetAutoEnlargePoliciesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAutoEnlargePoliciesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAutoEnlargePoliciesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


