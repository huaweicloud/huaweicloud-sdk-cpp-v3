

#include "huaweicloud/iotda/v5/model/CreateDevicePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDevicePolicyResponse::CreateDevicePolicyResponse()
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

CreateDevicePolicyResponse::~CreateDevicePolicyResponse() = default;

void CreateDevicePolicyResponse::validate()
{
}

web::json::value CreateDevicePolicyResponse::toJson() const
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
bool CreateDevicePolicyResponse::fromJson(const web::json::value& val)
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


std::string CreateDevicePolicyResponse::getAppId() const
{
    return appId_;
}

void CreateDevicePolicyResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateDevicePolicyResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateDevicePolicyResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string CreateDevicePolicyResponse::getPolicyId() const
{
    return policyId_;
}

void CreateDevicePolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool CreateDevicePolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void CreateDevicePolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string CreateDevicePolicyResponse::getPolicyName() const
{
    return policyName_;
}

void CreateDevicePolicyResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool CreateDevicePolicyResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void CreateDevicePolicyResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::vector<Statement>& CreateDevicePolicyResponse::getStatement()
{
    return statement_;
}

void CreateDevicePolicyResponse::setStatement(const std::vector<Statement>& value)
{
    statement_ = value;
    statementIsSet_ = true;
}

bool CreateDevicePolicyResponse::statementIsSet() const
{
    return statementIsSet_;
}

void CreateDevicePolicyResponse::unsetstatement()
{
    statementIsSet_ = false;
}

std::string CreateDevicePolicyResponse::getCreateTime() const
{
    return createTime_;
}

void CreateDevicePolicyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateDevicePolicyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateDevicePolicyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateDevicePolicyResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateDevicePolicyResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateDevicePolicyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateDevicePolicyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


