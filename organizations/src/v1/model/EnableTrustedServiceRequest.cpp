

#include "huaweicloud/organizations/v1/model/EnableTrustedServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




EnableTrustedServiceRequest::EnableTrustedServiceRequest()
{
    bodyIsSet_ = false;
}

EnableTrustedServiceRequest::~EnableTrustedServiceRequest() = default;

void EnableTrustedServiceRequest::validate()
{
}

web::json::value EnableTrustedServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool EnableTrustedServiceRequest::fromJson(const web::json::value& val)
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


TrustedServiceReqBody EnableTrustedServiceRequest::getBody() const
{
    return body_;
}

void EnableTrustedServiceRequest::setBody(const TrustedServiceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnableTrustedServiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnableTrustedServiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


