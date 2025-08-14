

#include "huaweicloud/iotda/v5/model/ApplicationDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ApplicationDTO::ApplicationDTO()
{
    appId_ = "";
    appIdIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    defaultApp_ = false;
    defaultAppIsSet_ = false;
}

ApplicationDTO::~ApplicationDTO() = default;

void ApplicationDTO::validate()
{
}

web::json::value ApplicationDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(defaultAppIsSet_) {
        val[utility::conversions::to_string_t("default_app")] = ModelBase::toJson(defaultApp_);
    }

    return val;
}
bool ApplicationDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("default_app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_app"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultApp(refVal);
        }
    }
    return ok;
}


std::string ApplicationDTO::getAppId() const
{
    return appId_;
}

void ApplicationDTO::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ApplicationDTO::appIdIsSet() const
{
    return appIdIsSet_;
}

void ApplicationDTO::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ApplicationDTO::getAppName() const
{
    return appName_;
}

void ApplicationDTO::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ApplicationDTO::appNameIsSet() const
{
    return appNameIsSet_;
}

void ApplicationDTO::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ApplicationDTO::getCreateTime() const
{
    return createTime_;
}

void ApplicationDTO::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ApplicationDTO::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ApplicationDTO::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

bool ApplicationDTO::isDefaultApp() const
{
    return defaultApp_;
}

void ApplicationDTO::setDefaultApp(bool value)
{
    defaultApp_ = value;
    defaultAppIsSet_ = true;
}

bool ApplicationDTO::defaultAppIsSet() const
{
    return defaultAppIsSet_;
}

void ApplicationDTO::unsetdefaultApp()
{
    defaultAppIsSet_ = false;
}

}
}
}
}
}


