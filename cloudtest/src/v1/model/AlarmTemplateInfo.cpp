

#include "huaweicloud/cloudtest/v1/model/AlarmTemplateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AlarmTemplateInfo::AlarmTemplateInfo()
{
    createTime_ = "";
    createTimeIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    remarks_ = "";
    remarksIsSet_ = false;
    testServiceId_ = "";
    testServiceIdIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AlarmTemplateInfo::~AlarmTemplateInfo() = default;

void AlarmTemplateInfo::validate()
{
}

web::json::value AlarmTemplateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("createUser")] = ModelBase::toJson(createUser_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(remarksIsSet_) {
        val[utility::conversions::to_string_t("remarks")] = ModelBase::toJson(remarks_);
    }
    if(testServiceIdIsSet_) {
        val[utility::conversions::to_string_t("testServiceId")] = ModelBase::toJson(testServiceId_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("updateTime")] = ModelBase::toJson(updateTime_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("updateUser")] = ModelBase::toJson(updateUser_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool AlarmTemplateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createUser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createUser"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("remarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remarks"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemarks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testServiceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testServiceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateUser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateUser"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
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
    return ok;
}


std::string AlarmTemplateInfo::getCreateTime() const
{
    return createTime_;
}

void AlarmTemplateInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AlarmTemplateInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AlarmTemplateInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AlarmTemplateInfo::getCreateUser() const
{
    return createUser_;
}

void AlarmTemplateInfo::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool AlarmTemplateInfo::createUserIsSet() const
{
    return createUserIsSet_;
}

void AlarmTemplateInfo::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string AlarmTemplateInfo::getId() const
{
    return id_;
}

void AlarmTemplateInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AlarmTemplateInfo::idIsSet() const
{
    return idIsSet_;
}

void AlarmTemplateInfo::unsetid()
{
    idIsSet_ = false;
}

std::string AlarmTemplateInfo::getRemarks() const
{
    return remarks_;
}

void AlarmTemplateInfo::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool AlarmTemplateInfo::remarksIsSet() const
{
    return remarksIsSet_;
}

void AlarmTemplateInfo::unsetremarks()
{
    remarksIsSet_ = false;
}

std::string AlarmTemplateInfo::getTestServiceId() const
{
    return testServiceId_;
}

void AlarmTemplateInfo::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool AlarmTemplateInfo::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void AlarmTemplateInfo::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

std::string AlarmTemplateInfo::getUpdateTime() const
{
    return updateTime_;
}

void AlarmTemplateInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AlarmTemplateInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AlarmTemplateInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string AlarmTemplateInfo::getUpdateUser() const
{
    return updateUser_;
}

void AlarmTemplateInfo::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool AlarmTemplateInfo::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void AlarmTemplateInfo::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string AlarmTemplateInfo::getName() const
{
    return name_;
}

void AlarmTemplateInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlarmTemplateInfo::nameIsSet() const
{
    return nameIsSet_;
}

void AlarmTemplateInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


