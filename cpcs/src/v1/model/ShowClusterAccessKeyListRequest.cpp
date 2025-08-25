

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
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
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
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
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

int32_t ShowClusterAccessKeyListRequest::getPageSize() const
{
    return pageSize_;
}

void ShowClusterAccessKeyListRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowClusterAccessKeyListRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowClusterAccessKeyListRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowClusterAccessKeyListRequest::getPageNum() const
{
    return pageNum_;
}

void ShowClusterAccessKeyListRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowClusterAccessKeyListRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowClusterAccessKeyListRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
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


