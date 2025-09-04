

#include "huaweicloud/codeartsbuild/v3/model/JobGroupTreeResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobGroupTreeResponseBody::JobGroupTreeResponseBody()
{
    id_ = "";
    idIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    pathId_ = "";
    pathIdIsSet_ = false;
    ordinal_ = 0;
    ordinalIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    childrenIsSet_ = false;
}

JobGroupTreeResponseBody::~JobGroupTreeResponseBody() = default;

void JobGroupTreeResponseBody::validate()
{
}

web::json::value JobGroupTreeResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(pathIdIsSet_) {
        val[utility::conversions::to_string_t("path_id")] = ModelBase::toJson(pathId_);
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
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }

    return val;
}
bool JobGroupTreeResponseBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ordinal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ordinal"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<JobGroupTreeResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}


std::string JobGroupTreeResponseBody::getId() const
{
    return id_;
}

void JobGroupTreeResponseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobGroupTreeResponseBody::idIsSet() const
{
    return idIsSet_;
}

void JobGroupTreeResponseBody::unsetid()
{
    idIsSet_ = false;
}

std::string JobGroupTreeResponseBody::getDomainId() const
{
    return domainId_;
}

void JobGroupTreeResponseBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool JobGroupTreeResponseBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void JobGroupTreeResponseBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string JobGroupTreeResponseBody::getProjectId() const
{
    return projectId_;
}

void JobGroupTreeResponseBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool JobGroupTreeResponseBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void JobGroupTreeResponseBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string JobGroupTreeResponseBody::getName() const
{
    return name_;
}

void JobGroupTreeResponseBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobGroupTreeResponseBody::nameIsSet() const
{
    return nameIsSet_;
}

void JobGroupTreeResponseBody::unsetname()
{
    nameIsSet_ = false;
}

std::string JobGroupTreeResponseBody::getParentId() const
{
    return parentId_;
}

void JobGroupTreeResponseBody::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool JobGroupTreeResponseBody::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void JobGroupTreeResponseBody::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string JobGroupTreeResponseBody::getPathId() const
{
    return pathId_;
}

void JobGroupTreeResponseBody::setPathId(const std::string& value)
{
    pathId_ = value;
    pathIdIsSet_ = true;
}

bool JobGroupTreeResponseBody::pathIdIsSet() const
{
    return pathIdIsSet_;
}

void JobGroupTreeResponseBody::unsetpathId()
{
    pathIdIsSet_ = false;
}

int32_t JobGroupTreeResponseBody::getOrdinal() const
{
    return ordinal_;
}

void JobGroupTreeResponseBody::setOrdinal(int32_t value)
{
    ordinal_ = value;
    ordinalIsSet_ = true;
}

bool JobGroupTreeResponseBody::ordinalIsSet() const
{
    return ordinalIsSet_;
}

void JobGroupTreeResponseBody::unsetordinal()
{
    ordinalIsSet_ = false;
}

std::string JobGroupTreeResponseBody::getCreateUser() const
{
    return createUser_;
}

void JobGroupTreeResponseBody::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool JobGroupTreeResponseBody::createUserIsSet() const
{
    return createUserIsSet_;
}

void JobGroupTreeResponseBody::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string JobGroupTreeResponseBody::getUpdateUser() const
{
    return updateUser_;
}

void JobGroupTreeResponseBody::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool JobGroupTreeResponseBody::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void JobGroupTreeResponseBody::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string JobGroupTreeResponseBody::getCreateTime() const
{
    return createTime_;
}

void JobGroupTreeResponseBody::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool JobGroupTreeResponseBody::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void JobGroupTreeResponseBody::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string JobGroupTreeResponseBody::getUpdateTime() const
{
    return updateTime_;
}

void JobGroupTreeResponseBody::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool JobGroupTreeResponseBody::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void JobGroupTreeResponseBody::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<JobGroupTreeResponseBody>& JobGroupTreeResponseBody::getChildren()
{
    return *children_;
}

void JobGroupTreeResponseBody::setChildren(const std::vector<JobGroupTreeResponseBody>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool JobGroupTreeResponseBody::childrenIsSet() const
{
    return childrenIsSet_;
}

void JobGroupTreeResponseBody::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


