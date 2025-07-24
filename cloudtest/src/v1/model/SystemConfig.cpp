

#include "huaweicloud/cloudtest/v1/model/SystemConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SystemConfig::SystemConfig()
{
    id_ = "";
    idIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    updateName_ = "";
    updateNameIsSet_ = false;
    updateNum_ = "";
    updateNumIsSet_ = false;
}

SystemConfig::~SystemConfig() = default;

void SystemConfig::validate()
{
}

web::json::value SystemConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateNameIsSet_) {
        val[utility::conversions::to_string_t("update_name")] = ModelBase::toJson(updateName_);
    }
    if(updateNumIsSet_) {
        val[utility::conversions::to_string_t("update_num")] = ModelBase::toJson(updateNum_);
    }

    return val;
}
bool SystemConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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
    return ok;
}


std::string SystemConfig::getId() const
{
    return id_;
}

void SystemConfig::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SystemConfig::idIsSet() const
{
    return idIsSet_;
}

void SystemConfig::unsetid()
{
    idIsSet_ = false;
}

std::string SystemConfig::getKey() const
{
    return key_;
}

void SystemConfig::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool SystemConfig::keyIsSet() const
{
    return keyIsSet_;
}

void SystemConfig::unsetkey()
{
    keyIsSet_ = false;
}

std::string SystemConfig::getValue() const
{
    return value_;
}

void SystemConfig::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SystemConfig::valueIsSet() const
{
    return valueIsSet_;
}

void SystemConfig::unsetvalue()
{
    valueIsSet_ = false;
}

std::string SystemConfig::getRemark() const
{
    return remark_;
}

void SystemConfig::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool SystemConfig::remarkIsSet() const
{
    return remarkIsSet_;
}

void SystemConfig::unsetremark()
{
    remarkIsSet_ = false;
}

std::string SystemConfig::getRegionId() const
{
    return regionId_;
}

void SystemConfig::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool SystemConfig::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void SystemConfig::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string SystemConfig::getProjectId() const
{
    return projectId_;
}

void SystemConfig::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SystemConfig::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SystemConfig::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string SystemConfig::getUpdateTime() const
{
    return updateTime_;
}

void SystemConfig::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool SystemConfig::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void SystemConfig::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string SystemConfig::getUpdateName() const
{
    return updateName_;
}

void SystemConfig::setUpdateName(const std::string& value)
{
    updateName_ = value;
    updateNameIsSet_ = true;
}

bool SystemConfig::updateNameIsSet() const
{
    return updateNameIsSet_;
}

void SystemConfig::unsetupdateName()
{
    updateNameIsSet_ = false;
}

std::string SystemConfig::getUpdateNum() const
{
    return updateNum_;
}

void SystemConfig::setUpdateNum(const std::string& value)
{
    updateNum_ = value;
    updateNumIsSet_ = true;
}

bool SystemConfig::updateNumIsSet() const
{
    return updateNumIsSet_;
}

void SystemConfig::unsetupdateNum()
{
    updateNumIsSet_ = false;
}

}
}
}
}
}


