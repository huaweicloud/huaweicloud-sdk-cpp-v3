

#include "huaweicloud/drs/v5/model/UpdateAgencyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateAgencyPolicyResponse::UpdateAgencyPolicyResponse()
{
    bodyIsSet_ = false;
}

UpdateAgencyPolicyResponse::~UpdateAgencyPolicyResponse() = default;

void UpdateAgencyPolicyResponse::validate()
{
}

web::json::value UpdateAgencyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAgencyPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object UpdateAgencyPolicyResponse::getBody() const
{
    return body_;
}

void UpdateAgencyPolicyResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAgencyPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAgencyPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


