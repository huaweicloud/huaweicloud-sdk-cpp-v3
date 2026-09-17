

#include "huaweicloud/projectman/v4/model/Project.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Project::Project()
{
    projectNumId_ = 0;
    projectNumIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdTime_ = 0L;
    createdTimeIsSet_ = false;
    updatedTime_ = 0L;
    updatedTimeIsSet_ = false;
    projectCode_ = "";
    projectCodeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    isArchived_ = false;
    isArchivedIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    creatorIsSet_ = false;
}

Project::~Project() = default;

void Project::validate()
{
}

web::json::value Project::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectNumIdIsSet_) {
        val[utility::conversions::to_string_t("project_num_id")] = ModelBase::toJson(projectNumId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(projectCodeIsSet_) {
        val[utility::conversions::to_string_t("project_code")] = ModelBase::toJson(projectCode_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(isArchivedIsSet_) {
        val[utility::conversions::to_string_t("is_archived")] = ModelBase::toJson(isArchived_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }

    return val;
}
bool Project::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectNumId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsArchived(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            User refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    return ok;
}


int32_t Project::getProjectNumId() const
{
    return projectNumId_;
}

void Project::setProjectNumId(int32_t value)
{
    projectNumId_ = value;
    projectNumIdIsSet_ = true;
}

bool Project::projectNumIdIsSet() const
{
    return projectNumIdIsSet_;
}

void Project::unsetprojectNumId()
{
    projectNumIdIsSet_ = false;
}

std::string Project::getProjectId() const
{
    return projectId_;
}

void Project::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Project::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Project::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Project::getName() const
{
    return name_;
}

void Project::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Project::nameIsSet() const
{
    return nameIsSet_;
}

void Project::unsetname()
{
    nameIsSet_ = false;
}

std::string Project::getDescription() const
{
    return description_;
}

void Project::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Project::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Project::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t Project::getCreatedTime() const
{
    return createdTime_;
}

void Project::setCreatedTime(int64_t value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool Project::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void Project::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

int64_t Project::getUpdatedTime() const
{
    return updatedTime_;
}

void Project::setUpdatedTime(int64_t value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool Project::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void Project::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string Project::getProjectCode() const
{
    return projectCode_;
}

void Project::setProjectCode(const std::string& value)
{
    projectCode_ = value;
    projectCodeIsSet_ = true;
}

bool Project::projectCodeIsSet() const
{
    return projectCodeIsSet_;
}

void Project::unsetprojectCode()
{
    projectCodeIsSet_ = false;
}

std::string Project::getRegion() const
{
    return region_;
}

void Project::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool Project::regionIsSet() const
{
    return regionIsSet_;
}

void Project::unsetregion()
{
    regionIsSet_ = false;
}

bool Project::isIsArchived() const
{
    return isArchived_;
}

void Project::setIsArchived(bool value)
{
    isArchived_ = value;
    isArchivedIsSet_ = true;
}

bool Project::isArchivedIsSet() const
{
    return isArchivedIsSet_;
}

void Project::unsetisArchived()
{
    isArchivedIsSet_ = false;
}

std::string Project::getType() const
{
    return type_;
}

void Project::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Project::typeIsSet() const
{
    return typeIsSet_;
}

void Project::unsettype()
{
    typeIsSet_ = false;
}

User Project::getCreator() const
{
    return creator_;
}

void Project::setCreator(const User& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool Project::creatorIsSet() const
{
    return creatorIsSet_;
}

void Project::unsetcreator()
{
    creatorIsSet_ = false;
}

}
}
}
}
}


