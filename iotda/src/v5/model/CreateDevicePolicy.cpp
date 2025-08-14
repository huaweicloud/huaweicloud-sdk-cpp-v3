

#include "huaweicloud/iotda/v5/model/CreateDevicePolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDevicePolicy::CreateDevicePolicy()
{
    policyName_ = "";
    policyNameIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    statementIsSet_ = false;
}

CreateDevicePolicy::~CreateDevicePolicy() = default;

void CreateDevicePolicy::validate()
{
}

web::json::value CreateDevicePolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(statementIsSet_) {
        val[utility::conversions::to_string_t("statement")] = ModelBase::toJson(statement_);
    }

    return val;
}
bool CreateDevicePolicy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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


std::string CreateDevicePolicy::getPolicyName() const
{
    return policyName_;
}

void CreateDevicePolicy::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool CreateDevicePolicy::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void CreateDevicePolicy::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string CreateDevicePolicy::getAppId() const
{
    return appId_;
}

void CreateDevicePolicy::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateDevicePolicy::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateDevicePolicy::unsetappId()
{
    appIdIsSet_ = false;
}

std::vector<Statement>& CreateDevicePolicy::getStatement()
{
    return statement_;
}

void CreateDevicePolicy::setStatement(const std::vector<Statement>& value)
{
    statement_ = value;
    statementIsSet_ = true;
}

bool CreateDevicePolicy::statementIsSet() const
{
    return statementIsSet_;
}

void CreateDevicePolicy::unsetstatement()
{
    statementIsSet_ = false;
}

}
}
}
}
}


