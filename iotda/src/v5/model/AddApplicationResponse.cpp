

#include "huaweicloud/iotda/v5/model/AddApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddApplicationResponse::AddApplicationResponse()
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

AddApplicationResponse::~AddApplicationResponse() = default;

void AddApplicationResponse::validate()
{
}

web::json::value AddApplicationResponse::toJson() const
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
bool AddApplicationResponse::fromJson(const web::json::value& val)
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


std::string AddApplicationResponse::getAppId() const
{
    return appId_;
}

void AddApplicationResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddApplicationResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddApplicationResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AddApplicationResponse::getAppName() const
{
    return appName_;
}

void AddApplicationResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool AddApplicationResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void AddApplicationResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string AddApplicationResponse::getCreateTime() const
{
    return createTime_;
}

void AddApplicationResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AddApplicationResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AddApplicationResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

bool AddApplicationResponse::isDefaultApp() const
{
    return defaultApp_;
}

void AddApplicationResponse::setDefaultApp(bool value)
{
    defaultApp_ = value;
    defaultAppIsSet_ = true;
}

bool AddApplicationResponse::defaultAppIsSet() const
{
    return defaultAppIsSet_;
}

void AddApplicationResponse::unsetdefaultApp()
{
    defaultAppIsSet_ = false;
}

}
}
}
}
}


