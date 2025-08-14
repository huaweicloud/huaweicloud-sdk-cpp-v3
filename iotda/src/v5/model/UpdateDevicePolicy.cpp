

#include "huaweicloud/iotda/v5/model/UpdateDevicePolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDevicePolicy::UpdateDevicePolicy()
{
    policyName_ = "";
    policyNameIsSet_ = false;
    statementIsSet_ = false;
}

UpdateDevicePolicy::~UpdateDevicePolicy() = default;

void UpdateDevicePolicy::validate()
{
}

web::json::value UpdateDevicePolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(statementIsSet_) {
        val[utility::conversions::to_string_t("statement")] = ModelBase::toJson(statement_);
    }

    return val;
}
bool UpdateDevicePolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statement"));
        if(!fieldValue.is_null())
        {
            std::vector<Statement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatement(refVal);
        }
    }
    return ok;
}


std::string UpdateDevicePolicy::getPolicyName() const
{
    return policyName_;
}

void UpdateDevicePolicy::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool UpdateDevicePolicy::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void UpdateDevicePolicy::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::vector<Statement>& UpdateDevicePolicy::getStatement()
{
    return statement_;
}

void UpdateDevicePolicy::setStatement(const std::vector<Statement>& value)
{
    statement_ = value;
    statementIsSet_ = true;
}

bool UpdateDevicePolicy::statementIsSet() const
{
    return statementIsSet_;
}

void UpdateDevicePolicy::unsetstatement()
{
    statementIsSet_ = false;
}

}
}
}
}
}


