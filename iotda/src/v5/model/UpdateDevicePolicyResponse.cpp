

#include "huaweicloud/iotda/v5/model/UpdateDevicePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDevicePolicyResponse::UpdateDevicePolicyResponse()
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

UpdateDevicePolicyResponse::~UpdateDevicePolicyResponse() = default;

void UpdateDevicePolicyResponse::validate()
{
}

web::json::value UpdateDevicePolicyResponse::toJson() const
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
bool UpdateDevicePolicyResponse::fromJson(const web::json::value& val)
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


std::string UpdateDevicePolicyResponse::getAppId() const
{
    return appId_;
}

void UpdateDevicePolicyResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateDevicePolicyResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateDevicePolicyResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string UpdateDevicePolicyResponse::getPolicyId() const
{
    return policyId_;
}

void UpdateDevicePolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateDevicePolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateDevicePolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string UpdateDevicePolicyResponse::getPolicyName() const
{
    return policyName_;
}

void UpdateDevicePolicyResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool UpdateDevicePolicyResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void UpdateDevicePolicyResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::vector<Statement>& UpdateDevicePolicyResponse::getStatement()
{
    return statement_;
}

void UpdateDevicePolicyResponse::setStatement(const std::vector<Statement>& value)
{
    statement_ = value;
    statementIsSet_ = true;
}

bool UpdateDevicePolicyResponse::statementIsSet() const
{
    return statementIsSet_;
}

void UpdateDevicePolicyResponse::unsetstatement()
{
    statementIsSet_ = false;
}

std::string UpdateDevicePolicyResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateDevicePolicyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateDevicePolicyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateDevicePolicyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateDevicePolicyResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateDevicePolicyResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateDevicePolicyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateDevicePolicyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


