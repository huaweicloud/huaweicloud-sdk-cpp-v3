

#include "huaweicloud/evs/v2/model/SnapshotGroupDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




SnapshotGroupDetail::SnapshotGroupDetail()
{
    id_ = "";
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
}

SnapshotGroupDetail::~SnapshotGroupDetail() = default;

void SnapshotGroupDetail::validate()
{
}

web::json::value SnapshotGroupDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool SnapshotGroupDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}


std::string SnapshotGroupDetail::getId() const
{
    return id_;
}

void SnapshotGroupDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SnapshotGroupDetail::idIsSet() const
{
    return idIsSet_;
}

void SnapshotGroupDetail::unsetid()
{
    idIsSet_ = false;
}

std::string SnapshotGroupDetail::getProjectId() const
{
    return projectId_;
}

void SnapshotGroupDetail::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SnapshotGroupDetail::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SnapshotGroupDetail::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string SnapshotGroupDetail::getCreatedAt() const
{
    return createdAt_;
}

void SnapshotGroupDetail::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SnapshotGroupDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SnapshotGroupDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string SnapshotGroupDetail::getStatus() const
{
    return status_;
}

void SnapshotGroupDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SnapshotGroupDetail::statusIsSet() const
{
    return statusIsSet_;
}

void SnapshotGroupDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SnapshotGroupDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void SnapshotGroupDetail::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool SnapshotGroupDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void SnapshotGroupDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string SnapshotGroupDetail::getName() const
{
    return name_;
}

void SnapshotGroupDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SnapshotGroupDetail::nameIsSet() const
{
    return nameIsSet_;
}

void SnapshotGroupDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string SnapshotGroupDetail::getDescription() const
{
    return description_;
}

void SnapshotGroupDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SnapshotGroupDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SnapshotGroupDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SnapshotGroupDetail::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SnapshotGroupDetail::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SnapshotGroupDetail::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SnapshotGroupDetail::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::map<std::string, std::string>& SnapshotGroupDetail::getTags()
{
    return tags_;
}

void SnapshotGroupDetail::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool SnapshotGroupDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void SnapshotGroupDetail::unsettags()
{
    tagsIsSet_ = false;
}

std::string SnapshotGroupDetail::getServerId() const
{
    return serverId_;
}

void SnapshotGroupDetail::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool SnapshotGroupDetail::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void SnapshotGroupDetail::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


