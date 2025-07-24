

#include "huaweicloud/cloudtest/v1/model/ShowAllConfigValueByTypeAndKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowAllConfigValueByTypeAndKeyResponse::ShowAllConfigValueByTypeAndKeyResponse()
{
    comments_ = "";
    commentsIsSet_ = false;
    configKey_ = "";
    configKeyIsSet_ = false;
    configType_ = "";
    configTypeIsSet_ = false;
    configValue_ = "";
    configValueIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    testServiceId_ = "";
    testServiceIdIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
}

ShowAllConfigValueByTypeAndKeyResponse::~ShowAllConfigValueByTypeAndKeyResponse() = default;

void ShowAllConfigValueByTypeAndKeyResponse::validate()
{
}

web::json::value ShowAllConfigValueByTypeAndKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commentsIsSet_) {
        val[utility::conversions::to_string_t("comments")] = ModelBase::toJson(comments_);
    }
    if(configKeyIsSet_) {
        val[utility::conversions::to_string_t("config_key")] = ModelBase::toJson(configKey_);
    }
    if(configTypeIsSet_) {
        val[utility::conversions::to_string_t("config_type")] = ModelBase::toJson(configType_);
    }
    if(configValueIsSet_) {
        val[utility::conversions::to_string_t("config_value")] = ModelBase::toJson(configValue_);
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
bool ShowAllConfigValueByTypeAndKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comments"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigValue(refVal);
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
            utility::datetime refVal;
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


std::string ShowAllConfigValueByTypeAndKeyResponse::getComments() const
{
    return comments_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setComments(const std::string& value)
{
    comments_ = value;
    commentsIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::commentsIsSet() const
{
    return commentsIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsetcomments()
{
    commentsIsSet_ = false;
}

std::string ShowAllConfigValueByTypeAndKeyResponse::getConfigKey() const
{
    return configKey_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setConfigKey(const std::string& value)
{
    configKey_ = value;
    configKeyIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::configKeyIsSet() const
{
    return configKeyIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsetconfigKey()
{
    configKeyIsSet_ = false;
}

std::string ShowAllConfigValueByTypeAndKeyResponse::getConfigType() const
{
    return configType_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setConfigType(const std::string& value)
{
    configType_ = value;
    configTypeIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::configTypeIsSet() const
{
    return configTypeIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsetconfigType()
{
    configTypeIsSet_ = false;
}

std::string ShowAllConfigValueByTypeAndKeyResponse::getConfigValue() const
{
    return configValue_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setConfigValue(const std::string& value)
{
    configValue_ = value;
    configValueIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::configValueIsSet() const
{
    return configValueIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsetconfigValue()
{
    configValueIsSet_ = false;
}

utility::datetime ShowAllConfigValueByTypeAndKeyResponse::getCreateTime() const
{
    return createTime_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowAllConfigValueByTypeAndKeyResponse::getCreateUser() const
{
    return createUser_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::createUserIsSet() const
{
    return createUserIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string ShowAllConfigValueByTypeAndKeyResponse::getId() const
{
    return id_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowAllConfigValueByTypeAndKeyResponse::getTestServiceId() const
{
    return testServiceId_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

utility::datetime ShowAllConfigValueByTypeAndKeyResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowAllConfigValueByTypeAndKeyResponse::getUpdateUser() const
{
    return updateUser_;
}

void ShowAllConfigValueByTypeAndKeyResponse::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyResponse::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void ShowAllConfigValueByTypeAndKeyResponse::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

}
}
}
}
}


