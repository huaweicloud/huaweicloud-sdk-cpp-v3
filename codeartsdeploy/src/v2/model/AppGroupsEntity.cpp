

#include "huaweicloud/codeartsdeploy/v2/model/AppGroupsEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




AppGroupsEntity::AppGroupsEntity()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    ordinal_ = 0;
    ordinalIsSet_ = false;
    createUserId_ = "";
    createUserIdIsSet_ = false;
    lastUpdateUserId_ = "";
    lastUpdateUserIdIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    childrenIsSet_ = false;
}

AppGroupsEntity::~AppGroupsEntity() = default;

void AppGroupsEntity::validate()
{
}

web::json::value AppGroupsEntity::toJson() const
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
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(ordinalIsSet_) {
        val[utility::conversions::to_string_t("ordinal")] = ModelBase::toJson(ordinal_);
    }
    if(createUserIdIsSet_) {
        val[utility::conversions::to_string_t("create_user_id")] = ModelBase::toJson(createUserId_);
    }
    if(lastUpdateUserIdIsSet_) {
        val[utility::conversions::to_string_t("last_update_user_id")] = ModelBase::toJson(lastUpdateUserId_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }

    return val;
}
bool AppGroupsEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ordinal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ordinal"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrdinal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<AppGroupsEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}


std::string AppGroupsEntity::getId() const
{
    return id_;
}

void AppGroupsEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AppGroupsEntity::idIsSet() const
{
    return idIsSet_;
}

void AppGroupsEntity::unsetid()
{
    idIsSet_ = false;
}

std::string AppGroupsEntity::getName() const
{
    return name_;
}

void AppGroupsEntity::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AppGroupsEntity::nameIsSet() const
{
    return nameIsSet_;
}

void AppGroupsEntity::unsetname()
{
    nameIsSet_ = false;
}

std::string AppGroupsEntity::getProjectId() const
{
    return projectId_;
}

void AppGroupsEntity::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AppGroupsEntity::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AppGroupsEntity::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AppGroupsEntity::getPath() const
{
    return path_;
}

void AppGroupsEntity::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool AppGroupsEntity::pathIsSet() const
{
    return pathIsSet_;
}

void AppGroupsEntity::unsetpath()
{
    pathIsSet_ = false;
}

std::string AppGroupsEntity::getParentId() const
{
    return parentId_;
}

void AppGroupsEntity::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool AppGroupsEntity::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void AppGroupsEntity::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t AppGroupsEntity::getOrdinal() const
{
    return ordinal_;
}

void AppGroupsEntity::setOrdinal(int32_t value)
{
    ordinal_ = value;
    ordinalIsSet_ = true;
}

bool AppGroupsEntity::ordinalIsSet() const
{
    return ordinalIsSet_;
}

void AppGroupsEntity::unsetordinal()
{
    ordinalIsSet_ = false;
}

std::string AppGroupsEntity::getCreateUserId() const
{
    return createUserId_;
}

void AppGroupsEntity::setCreateUserId(const std::string& value)
{
    createUserId_ = value;
    createUserIdIsSet_ = true;
}

bool AppGroupsEntity::createUserIdIsSet() const
{
    return createUserIdIsSet_;
}

void AppGroupsEntity::unsetcreateUserId()
{
    createUserIdIsSet_ = false;
}

std::string AppGroupsEntity::getLastUpdateUserId() const
{
    return lastUpdateUserId_;
}

void AppGroupsEntity::setLastUpdateUserId(const std::string& value)
{
    lastUpdateUserId_ = value;
    lastUpdateUserIdIsSet_ = true;
}

bool AppGroupsEntity::lastUpdateUserIdIsSet() const
{
    return lastUpdateUserIdIsSet_;
}

void AppGroupsEntity::unsetlastUpdateUserId()
{
    lastUpdateUserIdIsSet_ = false;
}

int32_t AppGroupsEntity::getCount() const
{
    return count_;
}

void AppGroupsEntity::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool AppGroupsEntity::countIsSet() const
{
    return countIsSet_;
}

void AppGroupsEntity::unsetcount()
{
    countIsSet_ = false;
}

std::vector<AppGroupsEntity>& AppGroupsEntity::getChildren()
{
    return *children_;
}

void AppGroupsEntity::setChildren(const std::vector<AppGroupsEntity>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool AppGroupsEntity::childrenIsSet() const
{
    return childrenIsSet_;
}

void AppGroupsEntity::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


