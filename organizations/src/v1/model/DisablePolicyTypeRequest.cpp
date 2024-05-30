

#include "huaweicloud/organizations/v1/model/DisablePolicyTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DisablePolicyTypeRequest::DisablePolicyTypeRequest()
{
    bodyIsSet_ = false;
}

DisablePolicyTypeRequest::~DisablePolicyTypeRequest() = default;

void DisablePolicyTypeRequest::validate()
{
}

web::json::value DisablePolicyTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DisablePolicyTypeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PolicyTypeReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PolicyTypeReqBody DisablePolicyTypeRequest::getBody() const
{
    return body_;
}

void DisablePolicyTypeRequest::setBody(const PolicyTypeReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisablePolicyTypeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisablePolicyTypeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


