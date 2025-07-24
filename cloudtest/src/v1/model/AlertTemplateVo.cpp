

#include "huaweicloud/cloudtest/v1/model/AlertTemplateVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AlertTemplateVo::AlertTemplateVo()
{
    alertLevelsIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    remarks_ = "";
    remarksIsSet_ = false;
    testServiceId_ = "";
    testServiceIdIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
}

AlertTemplateVo::~AlertTemplateVo() = default;

void AlertTemplateVo::validate()
{
}

web::json::value AlertTemplateVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertLevelsIsSet_) {
        val[utility::conversions::to_string_t("alertLevels")] = ModelBase::toJson(alertLevels_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(remarksIsSet_) {
        val[utility::conversions::to_string_t("remarks")] = ModelBase::toJson(remarks_);
    }
    if(testServiceIdIsSet_) {
        val[utility::conversions::to_string_t("test_service_id")] = ModelBase::toJson(testServiceId_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }

    return val;
}
bool AlertTemplateVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alertLevels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alertLevels"));
        if(!fieldValue.is_null())
        {
            std::vector<AlertLevel> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertLevels(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("test_service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestServiceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
        }
    }
    return ok;
}


std::vector<AlertLevel>& AlertTemplateVo::getAlertLevels()
{
    return alertLevels_;
}

void AlertTemplateVo::setAlertLevels(const std::vector<AlertLevel>& value)
{
    alertLevels_ = value;
    alertLevelsIsSet_ = true;
}

bool AlertTemplateVo::alertLevelsIsSet() const
{
    return alertLevelsIsSet_;
}

void AlertTemplateVo::unsetalertLevels()
{
    alertLevelsIsSet_ = false;
}

std::string AlertTemplateVo::getCreateTime() const
{
    return createTime_;
}

void AlertTemplateVo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AlertTemplateVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AlertTemplateVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AlertTemplateVo::getCreateUser() const
{
    return createUser_;
}

void AlertTemplateVo::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool AlertTemplateVo::createUserIsSet() const
{
    return createUserIsSet_;
}

void AlertTemplateVo::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string AlertTemplateVo::getId() const
{
    return id_;
}

void AlertTemplateVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AlertTemplateVo::idIsSet() const
{
    return idIsSet_;
}

void AlertTemplateVo::unsetid()
{
    idIsSet_ = false;
}

std::string AlertTemplateVo::getName() const
{
    return name_;
}

void AlertTemplateVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlertTemplateVo::nameIsSet() const
{
    return nameIsSet_;
}

void AlertTemplateVo::unsetname()
{
    nameIsSet_ = false;
}

std::string AlertTemplateVo::getRemarks() const
{
    return remarks_;
}

void AlertTemplateVo::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool AlertTemplateVo::remarksIsSet() const
{
    return remarksIsSet_;
}

void AlertTemplateVo::unsetremarks()
{
    remarksIsSet_ = false;
}

std::string AlertTemplateVo::getTestServiceId() const
{
    return testServiceId_;
}

void AlertTemplateVo::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool AlertTemplateVo::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void AlertTemplateVo::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

std::string AlertTemplateVo::getUpdateTime() const
{
    return updateTime_;
}

void AlertTemplateVo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AlertTemplateVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AlertTemplateVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string AlertTemplateVo::getUpdateUser() const
{
    return updateUser_;
}

void AlertTemplateVo::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool AlertTemplateVo::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void AlertTemplateVo::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

}
}
}
}
}


