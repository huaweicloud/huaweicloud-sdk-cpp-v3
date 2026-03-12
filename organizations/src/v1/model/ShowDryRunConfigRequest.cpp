

#include "huaweicloud/organizations/v1/model/ShowDryRunConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowDryRunConfigRequest::ShowDryRunConfigRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    rootId_ = "";
    rootIdIsSet_ = false;
    policyType_ = "";
    policyTypeIsSet_ = false;
}

ShowDryRunConfigRequest::~ShowDryRunConfigRequest() = default;

void ShowDryRunConfigRequest::validate()
{
}

web::json::value ShowDryRunConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(rootIdIsSet_) {
        val[utility::conversions::to_string_t("root_id")] = ModelBase::toJson(rootId_);
    }
    if(policyTypeIsSet_) {
        val[utility::conversions::to_string_t("policy_type")] = ModelBase::toJson(policyType_);
    }

    return val;
}
bool ShowDryRunConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyType(refVal);
        }
    }
    return ok;
}


std::string ShowDryRunConfigRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ShowDryRunConfigRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ShowDryRunConfigRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ShowDryRunConfigRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ShowDryRunConfigRequest::getRootId() const
{
    return rootId_;
}

void ShowDryRunConfigRequest::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool ShowDryRunConfigRequest::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void ShowDryRunConfigRequest::unsetrootId()
{
    rootIdIsSet_ = false;
}

std::string ShowDryRunConfigRequest::getPolicyType() const
{
    return policyType_;
}

void ShowDryRunConfigRequest::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool ShowDryRunConfigRequest::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void ShowDryRunConfigRequest::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

}
}
}
}
}


