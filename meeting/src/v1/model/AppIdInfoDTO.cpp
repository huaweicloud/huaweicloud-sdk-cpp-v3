

#include "huaweicloud/meeting/v1/model/AppIdInfoDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AppIdInfoDTO::AppIdInfoDTO()
{
    appName_ = "";
    appNameIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    appKey_ = "";
    appKeyIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

AppIdInfoDTO::~AppIdInfoDTO() = default;

void AppIdInfoDTO::validate()
{
}

web::json::value AppIdInfoDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appKeyIsSet_) {
        val[utility::conversions::to_string_t("app_key")] = ModelBase::toJson(appKey_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AppIdInfoDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string AppIdInfoDTO::getAppName() const
{
    return appName_;
}

void AppIdInfoDTO::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool AppIdInfoDTO::appNameIsSet() const
{
    return appNameIsSet_;
}

void AppIdInfoDTO::unsetappName()
{
    appNameIsSet_ = false;
}

std::string AppIdInfoDTO::getAppId() const
{
    return appId_;
}

void AppIdInfoDTO::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AppIdInfoDTO::appIdIsSet() const
{
    return appIdIsSet_;
}

void AppIdInfoDTO::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AppIdInfoDTO::getAppKey() const
{
    return appKey_;
}

void AppIdInfoDTO::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool AppIdInfoDTO::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void AppIdInfoDTO::unsetappKey()
{
    appKeyIsSet_ = false;
}

std::string AppIdInfoDTO::getDescription() const
{
    return description_;
}

void AppIdInfoDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AppIdInfoDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AppIdInfoDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AppIdInfoDTO::getCreateTime() const
{
    return createTime_;
}

void AppIdInfoDTO::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AppIdInfoDTO::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AppIdInfoDTO::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AppIdInfoDTO::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void AppIdInfoDTO::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool AppIdInfoDTO::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void AppIdInfoDTO::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

int32_t AppIdInfoDTO::getStatus() const
{
    return status_;
}

void AppIdInfoDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AppIdInfoDTO::statusIsSet() const
{
    return statusIsSet_;
}

void AppIdInfoDTO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


