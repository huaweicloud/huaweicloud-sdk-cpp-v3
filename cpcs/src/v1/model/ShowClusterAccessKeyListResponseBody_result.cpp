

#include "huaweicloud/cpcs/v1/model/ShowClusterAccessKeyListResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowClusterAccessKeyListResponseBody_result::ShowClusterAccessKeyListResponseBody_result()
{
    accessKeyId_ = "";
    accessKeyIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    accessKey_ = "";
    accessKeyIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

ShowClusterAccessKeyListResponseBody_result::~ShowClusterAccessKeyListResponseBody_result() = default;

void ShowClusterAccessKeyListResponseBody_result::validate()
{
}

web::json::value ShowClusterAccessKeyListResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIdIsSet_) {
        val[utility::conversions::to_string_t("access_key_id")] = ModelBase::toJson(accessKeyId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(accessKeyIsSet_) {
        val[utility::conversions::to_string_t("access_key")] = ModelBase::toJson(accessKey_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool ShowClusterAccessKeyListResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("access_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string ShowClusterAccessKeyListResponseBody_result::getAccessKeyId() const
{
    return accessKeyId_;
}

void ShowClusterAccessKeyListResponseBody_result::setAccessKeyId(const std::string& value)
{
    accessKeyId_ = value;
    accessKeyIdIsSet_ = true;
}

bool ShowClusterAccessKeyListResponseBody_result::accessKeyIdIsSet() const
{
    return accessKeyIdIsSet_;
}

void ShowClusterAccessKeyListResponseBody_result::unsetaccessKeyId()
{
    accessKeyIdIsSet_ = false;
}

std::string ShowClusterAccessKeyListResponseBody_result::getStatus() const
{
    return status_;
}

void ShowClusterAccessKeyListResponseBody_result::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowClusterAccessKeyListResponseBody_result::statusIsSet() const
{
    return statusIsSet_;
}

void ShowClusterAccessKeyListResponseBody_result::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowClusterAccessKeyListResponseBody_result::getAppName() const
{
    return appName_;
}

void ShowClusterAccessKeyListResponseBody_result::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowClusterAccessKeyListResponseBody_result::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowClusterAccessKeyListResponseBody_result::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ShowClusterAccessKeyListResponseBody_result::getAccessKey() const
{
    return accessKey_;
}

void ShowClusterAccessKeyListResponseBody_result::setAccessKey(const std::string& value)
{
    accessKey_ = value;
    accessKeyIsSet_ = true;
}

bool ShowClusterAccessKeyListResponseBody_result::accessKeyIsSet() const
{
    return accessKeyIsSet_;
}

void ShowClusterAccessKeyListResponseBody_result::unsetaccessKey()
{
    accessKeyIsSet_ = false;
}

std::string ShowClusterAccessKeyListResponseBody_result::getKeyName() const
{
    return keyName_;
}

void ShowClusterAccessKeyListResponseBody_result::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool ShowClusterAccessKeyListResponseBody_result::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void ShowClusterAccessKeyListResponseBody_result::unsetkeyName()
{
    keyNameIsSet_ = false;
}

int64_t ShowClusterAccessKeyListResponseBody_result::getCreateTime() const
{
    return createTime_;
}

void ShowClusterAccessKeyListResponseBody_result::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowClusterAccessKeyListResponseBody_result::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowClusterAccessKeyListResponseBody_result::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


