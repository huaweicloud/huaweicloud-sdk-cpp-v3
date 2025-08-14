

#include "huaweicloud/iotda/v5/model/ShowDevicePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDevicePolicyResponse::ShowDevicePolicyResponse()
{
    appId_ = "";
    appIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    statementIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

ShowDevicePolicyResponse::~ShowDevicePolicyResponse() = default;

void ShowDevicePolicyResponse::validate()
{
}

web::json::value ShowDevicePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(statementIsSet_) {
        val[utility::conversions::to_string_t("statement")] = ModelBase::toJson(statement_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ShowDevicePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string ShowDevicePolicyResponse::getAppId() const
{
    return appId_;
}

void ShowDevicePolicyResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowDevicePolicyResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowDevicePolicyResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowDevicePolicyResponse::getPolicyId() const
{
    return policyId_;
}

void ShowDevicePolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowDevicePolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowDevicePolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string ShowDevicePolicyResponse::getPolicyName() const
{
    return policyName_;
}

void ShowDevicePolicyResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ShowDevicePolicyResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ShowDevicePolicyResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::vector<Statement>& ShowDevicePolicyResponse::getStatement()
{
    return statement_;
}

void ShowDevicePolicyResponse::setStatement(const std::vector<Statement>& value)
{
    statement_ = value;
    statementIsSet_ = true;
}

bool ShowDevicePolicyResponse::statementIsSet() const
{
    return statementIsSet_;
}

void ShowDevicePolicyResponse::unsetstatement()
{
    statementIsSet_ = false;
}

std::string ShowDevicePolicyResponse::getCreateTime() const
{
    return createTime_;
}

void ShowDevicePolicyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowDevicePolicyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowDevicePolicyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowDevicePolicyResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowDevicePolicyResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowDevicePolicyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowDevicePolicyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


