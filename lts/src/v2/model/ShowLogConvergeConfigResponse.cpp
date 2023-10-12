

#include "huaweicloud/lts/v2/model/ShowLogConvergeConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowLogConvergeConfigResponse::ShowLogConvergeConfigResponse()
{
    id_ = "";
    idIsSet_ = false;
    memberAccountId_ = "";
    memberAccountIdIsSet_ = false;
    memberProjectId_ = "";
    memberProjectIdIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    organizationId_ = "";
    organizationIdIsSet_ = false;
    managementAccountId_ = "";
    managementAccountIdIsSet_ = false;
    managementProjectId_ = "";
    managementProjectIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    logMappingConfigIsSet_ = false;
}

ShowLogConvergeConfigResponse::~ShowLogConvergeConfigResponse() = default;

void ShowLogConvergeConfigResponse::validate()
{
}

web::json::value ShowLogConvergeConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(memberAccountIdIsSet_) {
        val[utility::conversions::to_string_t("member_account_id")] = ModelBase::toJson(memberAccountId_);
    }
    if(memberProjectIdIsSet_) {
        val[utility::conversions::to_string_t("member_project_id")] = ModelBase::toJson(memberProjectId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(organizationIdIsSet_) {
        val[utility::conversions::to_string_t("organization_id")] = ModelBase::toJson(organizationId_);
    }
    if(managementAccountIdIsSet_) {
        val[utility::conversions::to_string_t("management_account_id")] = ModelBase::toJson(managementAccountId_);
    }
    if(managementProjectIdIsSet_) {
        val[utility::conversions::to_string_t("management_project_id")] = ModelBase::toJson(managementProjectId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(logMappingConfigIsSet_) {
        val[utility::conversions::to_string_t("log_mapping_config")] = ModelBase::toJson(logMappingConfig_);
    }

    return val;
}
bool ShowLogConvergeConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("management_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("management_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagementAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("management_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("management_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagementProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_mapping_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_mapping_config"));
        if(!fieldValue.is_null())
        {
            std::vector<LogMappingConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogMappingConfig(refVal);
        }
    }
    return ok;
}


std::string ShowLogConvergeConfigResponse::getId() const
{
    return id_;
}

void ShowLogConvergeConfigResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowLogConvergeConfigResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowLogConvergeConfigResponse::getMemberAccountId() const
{
    return memberAccountId_;
}

void ShowLogConvergeConfigResponse::setMemberAccountId(const std::string& value)
{
    memberAccountId_ = value;
    memberAccountIdIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::memberAccountIdIsSet() const
{
    return memberAccountIdIsSet_;
}

void ShowLogConvergeConfigResponse::unsetmemberAccountId()
{
    memberAccountIdIsSet_ = false;
}

std::string ShowLogConvergeConfigResponse::getMemberProjectId() const
{
    return memberProjectId_;
}

void ShowLogConvergeConfigResponse::setMemberProjectId(const std::string& value)
{
    memberProjectId_ = value;
    memberProjectIdIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::memberProjectIdIsSet() const
{
    return memberProjectIdIsSet_;
}

void ShowLogConvergeConfigResponse::unsetmemberProjectId()
{
    memberProjectIdIsSet_ = false;
}

int64_t ShowLogConvergeConfigResponse::getCreateTime() const
{
    return createTime_;
}

void ShowLogConvergeConfigResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowLogConvergeConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ShowLogConvergeConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowLogConvergeConfigResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowLogConvergeConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowLogConvergeConfigResponse::getStatus() const
{
    return status_;
}

void ShowLogConvergeConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowLogConvergeConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowLogConvergeConfigResponse::getOrganizationId() const
{
    return organizationId_;
}

void ShowLogConvergeConfigResponse::setOrganizationId(const std::string& value)
{
    organizationId_ = value;
    organizationIdIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::organizationIdIsSet() const
{
    return organizationIdIsSet_;
}

void ShowLogConvergeConfigResponse::unsetorganizationId()
{
    organizationIdIsSet_ = false;
}

std::string ShowLogConvergeConfigResponse::getManagementAccountId() const
{
    return managementAccountId_;
}

void ShowLogConvergeConfigResponse::setManagementAccountId(const std::string& value)
{
    managementAccountId_ = value;
    managementAccountIdIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::managementAccountIdIsSet() const
{
    return managementAccountIdIsSet_;
}

void ShowLogConvergeConfigResponse::unsetmanagementAccountId()
{
    managementAccountIdIsSet_ = false;
}

std::string ShowLogConvergeConfigResponse::getManagementProjectId() const
{
    return managementProjectId_;
}

void ShowLogConvergeConfigResponse::setManagementProjectId(const std::string& value)
{
    managementProjectId_ = value;
    managementProjectIdIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::managementProjectIdIsSet() const
{
    return managementProjectIdIsSet_;
}

void ShowLogConvergeConfigResponse::unsetmanagementProjectId()
{
    managementProjectIdIsSet_ = false;
}

std::string ShowLogConvergeConfigResponse::getVersion() const
{
    return version_;
}

void ShowLogConvergeConfigResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowLogConvergeConfigResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<LogMappingConfig>& ShowLogConvergeConfigResponse::getLogMappingConfig()
{
    return logMappingConfig_;
}

void ShowLogConvergeConfigResponse::setLogMappingConfig(const std::vector<LogMappingConfig>& value)
{
    logMappingConfig_ = value;
    logMappingConfigIsSet_ = true;
}

bool ShowLogConvergeConfigResponse::logMappingConfigIsSet() const
{
    return logMappingConfigIsSet_;
}

void ShowLogConvergeConfigResponse::unsetlogMappingConfig()
{
    logMappingConfigIsSet_ = false;
}

}
}
}
}
}


