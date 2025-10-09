

#include "huaweicloud/cce/v3/model/CreateAccessPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAccessPolicyRequest::CreateAccessPolicyRequest()
{
    bodyIsSet_ = false;
}

CreateAccessPolicyRequest::~CreateAccessPolicyRequest() = default;

void CreateAccessPolicyRequest::validate()
{
}

web::json::value CreateAccessPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAccessPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AccessPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AccessPolicy CreateAccessPolicyRequest::getBody() const
{
    return body_;
}

void CreateAccessPolicyRequest::setBody(const AccessPolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAccessPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAccessPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


