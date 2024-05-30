

#include "huaweicloud/organizations/v1/model/DisableTrustedServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DisableTrustedServiceRequest::DisableTrustedServiceRequest()
{
    bodyIsSet_ = false;
}

DisableTrustedServiceRequest::~DisableTrustedServiceRequest() = default;

void DisableTrustedServiceRequest::validate()
{
}

web::json::value DisableTrustedServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DisableTrustedServiceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TrustedServiceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


TrustedServiceReqBody DisableTrustedServiceRequest::getBody() const
{
    return body_;
}

void DisableTrustedServiceRequest::setBody(const TrustedServiceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisableTrustedServiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisableTrustedServiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


