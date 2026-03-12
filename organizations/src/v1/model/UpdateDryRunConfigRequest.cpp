

#include "huaweicloud/organizations/v1/model/UpdateDryRunConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateDryRunConfigRequest::UpdateDryRunConfigRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDryRunConfigRequest::~UpdateDryRunConfigRequest() = default;

void UpdateDryRunConfigRequest::validate()
{
}

web::json::value UpdateDryRunConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDryRunConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDryRunConfigReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDryRunConfigRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateDryRunConfigRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateDryRunConfigRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateDryRunConfigRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

UpdateDryRunConfigReqBody UpdateDryRunConfigRequest::getBody() const
{
    return body_;
}

void UpdateDryRunConfigRequest::setBody(const UpdateDryRunConfigReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDryRunConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDryRunConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


