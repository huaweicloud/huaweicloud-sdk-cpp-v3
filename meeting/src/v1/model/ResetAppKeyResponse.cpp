

#include "huaweicloud/meeting/v1/model/ResetAppKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResetAppKeyResponse::ResetAppKeyResponse()
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

ResetAppKeyResponse::~ResetAppKeyResponse() = default;

void ResetAppKeyResponse::validate()
{
}

web::json::value ResetAppKeyResponse::toJson() const
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
bool ResetAppKeyResponse::fromJson(const web::json::value& val)
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


std::string ResetAppKeyResponse::getAppName() const
{
    return appName_;
}

void ResetAppKeyResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ResetAppKeyResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void ResetAppKeyResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ResetAppKeyResponse::getAppId() const
{
    return appId_;
}

void ResetAppKeyResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ResetAppKeyResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ResetAppKeyResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ResetAppKeyResponse::getAppKey() const
{
    return appKey_;
}

void ResetAppKeyResponse::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool ResetAppKeyResponse::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void ResetAppKeyResponse::unsetappKey()
{
    appKeyIsSet_ = false;
}

std::string ResetAppKeyResponse::getDescription() const
{
    return description_;
}

void ResetAppKeyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ResetAppKeyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ResetAppKeyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ResetAppKeyResponse::getCreateTime() const
{
    return createTime_;
}

void ResetAppKeyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ResetAppKeyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ResetAppKeyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ResetAppKeyResponse::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void ResetAppKeyResponse::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool ResetAppKeyResponse::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void ResetAppKeyResponse::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

int32_t ResetAppKeyResponse::getStatus() const
{
    return status_;
}

void ResetAppKeyResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResetAppKeyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ResetAppKeyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


