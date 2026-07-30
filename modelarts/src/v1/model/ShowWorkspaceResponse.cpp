

#include "huaweicloud/modelarts/v1/model/ShowWorkspaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkspaceResponse::ShowWorkspaceResponse()
{
    grantsIsSet_ = false;
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

ShowWorkspaceResponse::~ShowWorkspaceResponse() = default;

void ShowWorkspaceResponse::validate()
{
}

web::json::value ShowWorkspaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(grantsIsSet_) {
        val[utility::conversions::to_string_t("grants")] = ModelBase::toJson(grants_);
    }
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
bool ShowWorkspaceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("grants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grants"));
        if(!fieldValue.is_null())
        {
            std::vector<ViewWorkspaceResponse_grants> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrants(refVal);
        }
    }
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


std::vector<ViewWorkspaceResponse_grants>& ShowWorkspaceResponse::getGrants()
{
    return grants_;
}

void ShowWorkspaceResponse::setGrants(const std::vector<ViewWorkspaceResponse_grants>& value)
{
    grants_ = value;
    grantsIsSet_ = true;
}

bool ShowWorkspaceResponse::grantsIsSet() const
{
    return grantsIsSet_;
}

void ShowWorkspaceResponse::unsetgrants()
{
    grantsIsSet_ = false;
}

std::string ShowWorkspaceResponse::getOwner() const
{
    return owner_;
}

void ShowWorkspaceResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ShowWorkspaceResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void ShowWorkspaceResponse::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ShowWorkspaceResponse::getAuthType() const
{
    return authType_;
}

void ShowWorkspaceResponse::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool ShowWorkspaceResponse::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void ShowWorkspaceResponse::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string ShowWorkspaceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowWorkspaceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowWorkspaceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowWorkspaceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int64_t ShowWorkspaceResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowWorkspaceResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowWorkspaceResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowWorkspaceResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t ShowWorkspaceResponse::getCreateTime() const
{
    return createTime_;
}

void ShowWorkspaceResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowWorkspaceResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowWorkspaceResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowWorkspaceResponse::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void ShowWorkspaceResponse::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool ShowWorkspaceResponse::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void ShowWorkspaceResponse::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

std::string ShowWorkspaceResponse::getName() const
{
    return name_;
}

void ShowWorkspaceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowWorkspaceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowWorkspaceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowWorkspaceResponse::getDescription() const
{
    return description_;
}

void ShowWorkspaceResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowWorkspaceResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowWorkspaceResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowWorkspaceResponse::getId() const
{
    return id_;
}

void ShowWorkspaceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowWorkspaceResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowWorkspaceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowWorkspaceResponse::getStatus() const
{
    return status_;
}

void ShowWorkspaceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowWorkspaceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowWorkspaceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowWorkspaceResponse::getStatusInfo() const
{
    return statusInfo_;
}

void ShowWorkspaceResponse::setStatusInfo(const std::string& value)
{
    statusInfo_ = value;
    statusInfoIsSet_ = true;
}

bool ShowWorkspaceResponse::statusInfoIsSet() const
{
    return statusInfoIsSet_;
}

void ShowWorkspaceResponse::unsetstatusInfo()
{
    statusInfoIsSet_ = false;
}

}
}
}
}
}


