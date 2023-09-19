

#include "huaweicloud/lts/v2/model/UpdatelogConvergeConfig.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdatelogConvergeConfig::UpdatelogConvergeConfig()
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

UpdatelogConvergeConfig::~UpdatelogConvergeConfig() = default;

void UpdatelogConvergeConfig::validate()
{
}

web::json::value UpdatelogConvergeConfig::toJson() const
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

bool UpdatelogConvergeConfig::fromJson(const web::json::value& val)
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

std::string UpdatelogConvergeConfig::getId() const
{
    return id_;
}

void UpdatelogConvergeConfig::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdatelogConvergeConfig::idIsSet() const
{
    return idIsSet_;
}

void UpdatelogConvergeConfig::unsetid()
{
    idIsSet_ = false;
}

std::string UpdatelogConvergeConfig::getMemberAccountId() const
{
    return memberAccountId_;
}

void UpdatelogConvergeConfig::setMemberAccountId(const std::string& value)
{
    memberAccountId_ = value;
    memberAccountIdIsSet_ = true;
}

bool UpdatelogConvergeConfig::memberAccountIdIsSet() const
{
    return memberAccountIdIsSet_;
}

void UpdatelogConvergeConfig::unsetmemberAccountId()
{
    memberAccountIdIsSet_ = false;
}

std::string UpdatelogConvergeConfig::getMemberProjectId() const
{
    return memberProjectId_;
}

void UpdatelogConvergeConfig::setMemberProjectId(const std::string& value)
{
    memberProjectId_ = value;
    memberProjectIdIsSet_ = true;
}

bool UpdatelogConvergeConfig::memberProjectIdIsSet() const
{
    return memberProjectIdIsSet_;
}

void UpdatelogConvergeConfig::unsetmemberProjectId()
{
    memberProjectIdIsSet_ = false;
}

int64_t UpdatelogConvergeConfig::getCreateTime() const
{
    return createTime_;
}

void UpdatelogConvergeConfig::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdatelogConvergeConfig::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdatelogConvergeConfig::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t UpdatelogConvergeConfig::getUpdateTime() const
{
    return updateTime_;
}

void UpdatelogConvergeConfig::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdatelogConvergeConfig::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdatelogConvergeConfig::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdatelogConvergeConfig::getStatus() const
{
    return status_;
}

void UpdatelogConvergeConfig::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdatelogConvergeConfig::statusIsSet() const
{
    return statusIsSet_;
}

void UpdatelogConvergeConfig::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdatelogConvergeConfig::getOrganizationId() const
{
    return organizationId_;
}

void UpdatelogConvergeConfig::setOrganizationId(const std::string& value)
{
    organizationId_ = value;
    organizationIdIsSet_ = true;
}

bool UpdatelogConvergeConfig::organizationIdIsSet() const
{
    return organizationIdIsSet_;
}

void UpdatelogConvergeConfig::unsetorganizationId()
{
    organizationIdIsSet_ = false;
}

std::string UpdatelogConvergeConfig::getManagementAccountId() const
{
    return managementAccountId_;
}

void UpdatelogConvergeConfig::setManagementAccountId(const std::string& value)
{
    managementAccountId_ = value;
    managementAccountIdIsSet_ = true;
}

bool UpdatelogConvergeConfig::managementAccountIdIsSet() const
{
    return managementAccountIdIsSet_;
}

void UpdatelogConvergeConfig::unsetmanagementAccountId()
{
    managementAccountIdIsSet_ = false;
}

std::string UpdatelogConvergeConfig::getManagementProjectId() const
{
    return managementProjectId_;
}

void UpdatelogConvergeConfig::setManagementProjectId(const std::string& value)
{
    managementProjectId_ = value;
    managementProjectIdIsSet_ = true;
}

bool UpdatelogConvergeConfig::managementProjectIdIsSet() const
{
    return managementProjectIdIsSet_;
}

void UpdatelogConvergeConfig::unsetmanagementProjectId()
{
    managementProjectIdIsSet_ = false;
}

std::string UpdatelogConvergeConfig::getVersion() const
{
    return version_;
}

void UpdatelogConvergeConfig::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdatelogConvergeConfig::versionIsSet() const
{
    return versionIsSet_;
}

void UpdatelogConvergeConfig::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<LogMappingConfig>& UpdatelogConvergeConfig::getLogMappingConfig()
{
    return logMappingConfig_;
}

void UpdatelogConvergeConfig::setLogMappingConfig(const std::vector<LogMappingConfig>& value)
{
    logMappingConfig_ = value;
    logMappingConfigIsSet_ = true;
}

bool UpdatelogConvergeConfig::logMappingConfigIsSet() const
{
    return logMappingConfigIsSet_;
}

void UpdatelogConvergeConfig::unsetlogMappingConfig()
{
    logMappingConfigIsSet_ = false;
}

}
}
}
}
}


