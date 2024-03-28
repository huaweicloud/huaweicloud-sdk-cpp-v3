

#include "huaweicloud/cbr/v1/model/CreateOrganizationPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreateOrganizationPolicyRequest::CreateOrganizationPolicyRequest()
{
    bodyIsSet_ = false;
}

CreateOrganizationPolicyRequest::~CreateOrganizationPolicyRequest() = default;

void CreateOrganizationPolicyRequest::validate()
{
}

web::json::value CreateOrganizationPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateOrganizationPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OrganizationPolicyCreateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


OrganizationPolicyCreateReq CreateOrganizationPolicyRequest::getBody() const
{
    return body_;
}

void CreateOrganizationPolicyRequest::setBody(const OrganizationPolicyCreateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateOrganizationPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateOrganizationPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


