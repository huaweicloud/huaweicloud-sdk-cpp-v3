

#include "huaweicloud/codeartspipeline/v2/model/CreateAlertPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateAlertPolicyRequest::CreateAlertPolicyRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAlertPolicyRequest::~CreateAlertPolicyRequest() = default;

void CreateAlertPolicyRequest::validate()
{
}

web::json::value CreateAlertPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAlertPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AlertPolicyDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAlertPolicyRequest::getTenantId() const
{
    return tenantId_;
}

void CreateAlertPolicyRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool CreateAlertPolicyRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void CreateAlertPolicyRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

AlertPolicyDTO CreateAlertPolicyRequest::getBody() const
{
    return body_;
}

void CreateAlertPolicyRequest::setBody(const AlertPolicyDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAlertPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAlertPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


