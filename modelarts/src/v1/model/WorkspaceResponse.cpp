

#include "huaweicloud/modelarts/v1/model/WorkspaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkspaceResponse::WorkspaceResponse()
{
    owner_ = "";
    ownerIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusInfo_ = "";
    statusInfoIsSet_ = false;
}

WorkspaceResponse::~WorkspaceResponse() = default;

void WorkspaceResponse::validate()
{
}

web::json::value WorkspaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusInfoIsSet_) {
        val[utility::conversions::to_string_t("status_info")] = ModelBase::toJson(statusInfo_);
    }

    return val;
}
bool WorkspaceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusInfo(refVal);
        }
    }
    return ok;
}


std::string WorkspaceResponse::getOwner() const
{
    return owner_;
}

void WorkspaceResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool WorkspaceResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void WorkspaceResponse::unsetowner()
{
    ownerIsSet_ = false;
}

std::string WorkspaceResponse::getAuthType() const
{
    return authType_;
}

void WorkspaceResponse::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool WorkspaceResponse::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void WorkspaceResponse::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string WorkspaceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void WorkspaceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool WorkspaceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void WorkspaceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int64_t WorkspaceResponse::getUpdateTime() const
{
    return updateTime_;
}

void WorkspaceResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool WorkspaceResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void WorkspaceResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t WorkspaceResponse::getCreateTime() const
{
    return createTime_;
}

void WorkspaceResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool WorkspaceResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void WorkspaceResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string WorkspaceResponse::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void WorkspaceResponse::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool WorkspaceResponse::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void WorkspaceResponse::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

std::string WorkspaceResponse::getName() const
{
    return name_;
}

void WorkspaceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkspaceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void WorkspaceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkspaceResponse::getDescription() const
{
    return description_;
}

void WorkspaceResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkspaceResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkspaceResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string WorkspaceResponse::getId() const
{
    return id_;
}

void WorkspaceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkspaceResponse::idIsSet() const
{
    return idIsSet_;
}

void WorkspaceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string WorkspaceResponse::getStatus() const
{
    return status_;
}

void WorkspaceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkspaceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void WorkspaceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string WorkspaceResponse::getStatusInfo() const
{
    return statusInfo_;
}

void WorkspaceResponse::setStatusInfo(const std::string& value)
{
    statusInfo_ = value;
    statusInfoIsSet_ = true;
}

bool WorkspaceResponse::statusInfoIsSet() const
{
    return statusInfoIsSet_;
}

void WorkspaceResponse::unsetstatusInfo()
{
    statusInfoIsSet_ = false;
}

}
}
}
}
}


