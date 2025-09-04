

#include "huaweicloud/codeartsbuild/v3/model/JobGroupResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobGroupResponseBody_result::JobGroupResponseBody_result()
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
    domainId_ = "";
    domainIdIsSet_ = false;
    ordinal_ = "";
    ordinalIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    pathId_ = "";
    pathIdIsSet_ = false;
}

JobGroupResponseBody_result::~JobGroupResponseBody_result() = default;

void JobGroupResponseBody_result::validate()
{
}

web::json::value JobGroupResponseBody_result::toJson() const
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
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(ordinalIsSet_) {
        val[utility::conversions::to_string_t("ordinal")] = ModelBase::toJson(ordinal_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(pathIdIsSet_) {
        val[utility::conversions::to_string_t("path_id")] = ModelBase::toJson(pathId_);
    }

    return val;
}
bool JobGroupResponseBody_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ordinal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ordinal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrdinal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("path_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPathId(refVal);
        }
    }
    return ok;
}


std::string JobGroupResponseBody_result::getId() const
{
    return id_;
}

void JobGroupResponseBody_result::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobGroupResponseBody_result::idIsSet() const
{
    return idIsSet_;
}

void JobGroupResponseBody_result::unsetid()
{
    idIsSet_ = false;
}

std::string JobGroupResponseBody_result::getName() const
{
    return name_;
}

void JobGroupResponseBody_result::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobGroupResponseBody_result::nameIsSet() const
{
    return nameIsSet_;
}

void JobGroupResponseBody_result::unsetname()
{
    nameIsSet_ = false;
}

std::string JobGroupResponseBody_result::getProjectId() const
{
    return projectId_;
}

void JobGroupResponseBody_result::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool JobGroupResponseBody_result::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void JobGroupResponseBody_result::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string JobGroupResponseBody_result::getParentId() const
{
    return parentId_;
}

void JobGroupResponseBody_result::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool JobGroupResponseBody_result::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void JobGroupResponseBody_result::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string JobGroupResponseBody_result::getGroupId() const
{
    return groupId_;
}

void JobGroupResponseBody_result::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool JobGroupResponseBody_result::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void JobGroupResponseBody_result::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string JobGroupResponseBody_result::getDomainId() const
{
    return domainId_;
}

void JobGroupResponseBody_result::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool JobGroupResponseBody_result::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void JobGroupResponseBody_result::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string JobGroupResponseBody_result::getOrdinal() const
{
    return ordinal_;
}

void JobGroupResponseBody_result::setOrdinal(const std::string& value)
{
    ordinal_ = value;
    ordinalIsSet_ = true;
}

bool JobGroupResponseBody_result::ordinalIsSet() const
{
    return ordinalIsSet_;
}

void JobGroupResponseBody_result::unsetordinal()
{
    ordinalIsSet_ = false;
}

std::string JobGroupResponseBody_result::getCreateUser() const
{
    return createUser_;
}

void JobGroupResponseBody_result::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool JobGroupResponseBody_result::createUserIsSet() const
{
    return createUserIsSet_;
}

void JobGroupResponseBody_result::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string JobGroupResponseBody_result::getUpdateUser() const
{
    return updateUser_;
}

void JobGroupResponseBody_result::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool JobGroupResponseBody_result::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void JobGroupResponseBody_result::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string JobGroupResponseBody_result::getCreateTime() const
{
    return createTime_;
}

void JobGroupResponseBody_result::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool JobGroupResponseBody_result::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void JobGroupResponseBody_result::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string JobGroupResponseBody_result::getUpdateTime() const
{
    return updateTime_;
}

void JobGroupResponseBody_result::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool JobGroupResponseBody_result::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void JobGroupResponseBody_result::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string JobGroupResponseBody_result::getPathId() const
{
    return pathId_;
}

void JobGroupResponseBody_result::setPathId(const std::string& value)
{
    pathId_ = value;
    pathIdIsSet_ = true;
}

bool JobGroupResponseBody_result::pathIdIsSet() const
{
    return pathIdIsSet_;
}

void JobGroupResponseBody_result::unsetpathId()
{
    pathIdIsSet_ = false;
}

}
}
}
}
}


