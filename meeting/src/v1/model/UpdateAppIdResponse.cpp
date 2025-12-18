

#include "huaweicloud/meeting/v1/model/UpdateAppIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateAppIdResponse::UpdateAppIdResponse()
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

UpdateAppIdResponse::~UpdateAppIdResponse() = default;

void UpdateAppIdResponse::validate()
{
}

web::json::value UpdateAppIdResponse::toJson() const
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
bool UpdateAppIdResponse::fromJson(const web::json::value& val)
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


std::string UpdateAppIdResponse::getAppName() const
{
    return appName_;
}

void UpdateAppIdResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool UpdateAppIdResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void UpdateAppIdResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string UpdateAppIdResponse::getAppId() const
{
    return appId_;
}

void UpdateAppIdResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateAppIdResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateAppIdResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string UpdateAppIdResponse::getAppKey() const
{
    return appKey_;
}

void UpdateAppIdResponse::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool UpdateAppIdResponse::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void UpdateAppIdResponse::unsetappKey()
{
    appKeyIsSet_ = false;
}

std::string UpdateAppIdResponse::getDescription() const
{
    return description_;
}

void UpdateAppIdResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateAppIdResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateAppIdResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateAppIdResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateAppIdResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateAppIdResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateAppIdResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateAppIdResponse::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void UpdateAppIdResponse::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool UpdateAppIdResponse::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void UpdateAppIdResponse::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

int32_t UpdateAppIdResponse::getStatus() const
{
    return status_;
}

void UpdateAppIdResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAppIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAppIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


