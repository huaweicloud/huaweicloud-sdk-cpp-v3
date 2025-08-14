

#include "huaweicloud/iotda/v5/model/ShowApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowApplicationResponse::ShowApplicationResponse()
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

ShowApplicationResponse::~ShowApplicationResponse() = default;

void ShowApplicationResponse::validate()
{
}

web::json::value ShowApplicationResponse::toJson() const
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
bool ShowApplicationResponse::fromJson(const web::json::value& val)
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


std::string ShowApplicationResponse::getAppId() const
{
    return appId_;
}

void ShowApplicationResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowApplicationResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowApplicationResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowApplicationResponse::getAppName() const
{
    return appName_;
}

void ShowApplicationResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowApplicationResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowApplicationResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ShowApplicationResponse::getCreateTime() const
{
    return createTime_;
}

void ShowApplicationResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowApplicationResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowApplicationResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

bool ShowApplicationResponse::isDefaultApp() const
{
    return defaultApp_;
}

void ShowApplicationResponse::setDefaultApp(bool value)
{
    defaultApp_ = value;
    defaultAppIsSet_ = true;
}

bool ShowApplicationResponse::defaultAppIsSet() const
{
    return defaultAppIsSet_;
}

void ShowApplicationResponse::unsetdefaultApp()
{
    defaultAppIsSet_ = false;
}

}
}
}
}
}


