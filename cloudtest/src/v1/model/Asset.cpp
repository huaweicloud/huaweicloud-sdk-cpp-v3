

#include "huaweicloud/cloudtest/v1/model/Asset.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




Asset::Asset()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    updateName_ = "";
    updateNameIsSet_ = false;
    updateNum_ = "";
    updateNumIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
}

Asset::~Asset() = default;

void Asset::validate()
{
}

web::json::value Asset::toJson() const
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(creatorNumIsSet_) {
        val[utility::conversions::to_string_t("creator_num")] = ModelBase::toJson(creatorNum_);
    }
    if(updateNameIsSet_) {
        val[utility::conversions::to_string_t("update_name")] = ModelBase::toJson(updateName_);
    }
    if(updateNumIsSet_) {
        val[utility::conversions::to_string_t("update_num")] = ModelBase::toJson(updateNum_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool Asset::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string Asset::getId() const
{
    return id_;
}

void Asset::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Asset::idIsSet() const
{
    return idIsSet_;
}

void Asset::unsetid()
{
    idIsSet_ = false;
}

std::string Asset::getName() const
{
    return name_;
}

void Asset::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Asset::nameIsSet() const
{
    return nameIsSet_;
}

void Asset::unsetname()
{
    nameIsSet_ = false;
}

std::string Asset::getProjectId() const
{
    return projectId_;
}

void Asset::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Asset::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Asset::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime Asset::getCreateTime() const
{
    return createTime_;
}

void Asset::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Asset::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Asset::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Asset::getCreatorName() const
{
    return creatorName_;
}

void Asset::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool Asset::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void Asset::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string Asset::getCreatorNum() const
{
    return creatorNum_;
}

void Asset::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool Asset::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void Asset::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string Asset::getUpdateName() const
{
    return updateName_;
}

void Asset::setUpdateName(const std::string& value)
{
    updateName_ = value;
    updateNameIsSet_ = true;
}

bool Asset::updateNameIsSet() const
{
    return updateNameIsSet_;
}

void Asset::unsetupdateName()
{
    updateNameIsSet_ = false;
}

std::string Asset::getUpdateNum() const
{
    return updateNum_;
}

void Asset::setUpdateNum(const std::string& value)
{
    updateNum_ = value;
    updateNumIsSet_ = true;
}

bool Asset::updateNumIsSet() const
{
    return updateNumIsSet_;
}

void Asset::unsetupdateNum()
{
    updateNumIsSet_ = false;
}

utility::datetime Asset::getUpdateTime() const
{
    return updateTime_;
}

void Asset::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool Asset::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void Asset::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


