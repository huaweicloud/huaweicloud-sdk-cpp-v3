

#include "huaweicloud/codeartsbuild/v3/model/JobGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobGroupRequestBody::JobGroupRequestBody()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

JobGroupRequestBody::~JobGroupRequestBody() = default;

void JobGroupRequestBody::validate()
{
}

web::json::value JobGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool JobGroupRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string JobGroupRequestBody::getId() const
{
    return id_;
}

void JobGroupRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobGroupRequestBody::idIsSet() const
{
    return idIsSet_;
}

void JobGroupRequestBody::unsetid()
{
    idIsSet_ = false;
}

std::string JobGroupRequestBody::getName() const
{
    return name_;
}

void JobGroupRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobGroupRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void JobGroupRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string JobGroupRequestBody::getProjectId() const
{
    return projectId_;
}

void JobGroupRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool JobGroupRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void JobGroupRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string JobGroupRequestBody::getParentId() const
{
    return parentId_;
}

void JobGroupRequestBody::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool JobGroupRequestBody::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void JobGroupRequestBody::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string JobGroupRequestBody::getGroupId() const
{
    return groupId_;
}

void JobGroupRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool JobGroupRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void JobGroupRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


