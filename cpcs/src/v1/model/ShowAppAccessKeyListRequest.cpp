

#include "huaweicloud/cpcs/v1/model/ShowAppAccessKeyListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAppAccessKeyListRequest::ShowAppAccessKeyListRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ShowAppAccessKeyListRequest::~ShowAppAccessKeyListRequest() = default;

void ShowAppAccessKeyListRequest::validate()
{
}

web::json::value ShowAppAccessKeyListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ShowAppAccessKeyListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


std::string ShowAppAccessKeyListRequest::getAppId() const
{
    return appId_;
}

void ShowAppAccessKeyListRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowAppAccessKeyListRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowAppAccessKeyListRequest::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t ShowAppAccessKeyListRequest::getLimit() const
{
    return limit_;
}

void ShowAppAccessKeyListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAppAccessKeyListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAppAccessKeyListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAppAccessKeyListRequest::getOffset() const
{
    return offset_;
}

void ShowAppAccessKeyListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAppAccessKeyListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAppAccessKeyListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowAppAccessKeyListRequest::getKeyName() const
{
    return keyName_;
}

void ShowAppAccessKeyListRequest::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool ShowAppAccessKeyListRequest::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void ShowAppAccessKeyListRequest::unsetkeyName()
{
    keyNameIsSet_ = false;
}

std::string ShowAppAccessKeyListRequest::getSortKey() const
{
    return sortKey_;
}

void ShowAppAccessKeyListRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ShowAppAccessKeyListRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ShowAppAccessKeyListRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ShowAppAccessKeyListRequest::getSortDir() const
{
    return sortDir_;
}

void ShowAppAccessKeyListRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ShowAppAccessKeyListRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ShowAppAccessKeyListRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


