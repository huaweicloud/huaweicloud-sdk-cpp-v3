

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
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
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
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
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
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
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

int32_t ShowAppAccessKeyListRequest::getPageSize() const
{
    return pageSize_;
}

void ShowAppAccessKeyListRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowAppAccessKeyListRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowAppAccessKeyListRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowAppAccessKeyListRequest::getPageNum() const
{
    return pageNum_;
}

void ShowAppAccessKeyListRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowAppAccessKeyListRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowAppAccessKeyListRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
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


