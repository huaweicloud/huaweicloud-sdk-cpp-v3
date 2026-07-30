

#include "huaweicloud/modelarts/v1/model/CreateWorkspaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkspaceResponse::CreateWorkspaceResponse()
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
    grantsIsSet_ = false;
}

CreateWorkspaceResponse::~CreateWorkspaceResponse() = default;

void CreateWorkspaceResponse::validate()
{
}

web::json::value CreateWorkspaceResponse::toJson() const
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
    if(grantsIsSet_) {
        val[utility::conversions::to_string_t("grants")] = ModelBase::toJson(grants_);
    }

    return val;
}
bool CreateWorkspaceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("grants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grants"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateWorkspaceResponseBody_grants> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrants(refVal);
        }
    }
    return ok;
}


std::string CreateWorkspaceResponse::getOwner() const
{
    return owner_;
}

void CreateWorkspaceResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool CreateWorkspaceResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void CreateWorkspaceResponse::unsetowner()
{
    ownerIsSet_ = false;
}

std::string CreateWorkspaceResponse::getAuthType() const
{
    return authType_;
}

void CreateWorkspaceResponse::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool CreateWorkspaceResponse::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void CreateWorkspaceResponse::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string CreateWorkspaceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateWorkspaceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateWorkspaceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateWorkspaceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int64_t CreateWorkspaceResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateWorkspaceResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateWorkspaceResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateWorkspaceResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t CreateWorkspaceResponse::getCreateTime() const
{
    return createTime_;
}

void CreateWorkspaceResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateWorkspaceResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateWorkspaceResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateWorkspaceResponse::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void CreateWorkspaceResponse::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool CreateWorkspaceResponse::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void CreateWorkspaceResponse::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

std::string CreateWorkspaceResponse::getName() const
{
    return name_;
}

void CreateWorkspaceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateWorkspaceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateWorkspaceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateWorkspaceResponse::getDescription() const
{
    return description_;
}

void CreateWorkspaceResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateWorkspaceResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateWorkspaceResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateWorkspaceResponse::getId() const
{
    return id_;
}

void CreateWorkspaceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateWorkspaceResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateWorkspaceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateWorkspaceResponse::getStatus() const
{
    return status_;
}

void CreateWorkspaceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateWorkspaceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateWorkspaceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateWorkspaceResponse::getStatusInfo() const
{
    return statusInfo_;
}

void CreateWorkspaceResponse::setStatusInfo(const std::string& value)
{
    statusInfo_ = value;
    statusInfoIsSet_ = true;
}

bool CreateWorkspaceResponse::statusInfoIsSet() const
{
    return statusInfoIsSet_;
}

void CreateWorkspaceResponse::unsetstatusInfo()
{
    statusInfoIsSet_ = false;
}

std::vector<CreateWorkspaceResponseBody_grants>& CreateWorkspaceResponse::getGrants()
{
    return grants_;
}

void CreateWorkspaceResponse::setGrants(const std::vector<CreateWorkspaceResponseBody_grants>& value)
{
    grants_ = value;
    grantsIsSet_ = true;
}

bool CreateWorkspaceResponse::grantsIsSet() const
{
    return grantsIsSet_;
}

void CreateWorkspaceResponse::unsetgrants()
{
    grantsIsSet_ = false;
}

}
}
}
}
}


