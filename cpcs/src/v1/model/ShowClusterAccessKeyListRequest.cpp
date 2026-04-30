

#include "huaweicloud/cpcs/v1/model/ShowClusterAccessKeyListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowClusterAccessKeyListRequest::ShowClusterAccessKeyListRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ShowClusterAccessKeyListRequest::~ShowClusterAccessKeyListRequest() = default;

void ShowClusterAccessKeyListRequest::validate()
{
}

web::json::value ShowClusterAccessKeyListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ShowClusterAccessKeyListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
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


std::string ShowClusterAccessKeyListRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterAccessKeyListRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterAccessKeyListRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterAccessKeyListRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

int32_t ShowClusterAccessKeyListRequest::getLimit() const
{
    return limit_;
}

void ShowClusterAccessKeyListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowClusterAccessKeyListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowClusterAccessKeyListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowClusterAccessKeyListRequest::getOffset() const
{
    return offset_;
}

void ShowClusterAccessKeyListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowClusterAccessKeyListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowClusterAccessKeyListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowClusterAccessKeyListRequest::getAppName() const
{
    return appName_;
}

void ShowClusterAccessKeyListRequest::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowClusterAccessKeyListRequest::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowClusterAccessKeyListRequest::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ShowClusterAccessKeyListRequest::getSortKey() const
{
    return sortKey_;
}

void ShowClusterAccessKeyListRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ShowClusterAccessKeyListRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ShowClusterAccessKeyListRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ShowClusterAccessKeyListRequest::getSortDir() const
{
    return sortDir_;
}

void ShowClusterAccessKeyListRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ShowClusterAccessKeyListRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ShowClusterAccessKeyListRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


