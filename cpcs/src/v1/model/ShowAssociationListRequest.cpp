

#include "huaweicloud/cpcs/v1/model/ShowAssociationListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAssociationListRequest::ShowAssociationListRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ShowAssociationListRequest::~ShowAssociationListRequest() = default;

void ShowAssociationListRequest::validate()
{
}

web::json::value ShowAssociationListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ShowAssociationListRequest::fromJson(const web::json::value& val)
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


std::string ShowAssociationListRequest::getClusterId() const
{
    return clusterId_;
}

void ShowAssociationListRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAssociationListRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAssociationListRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowAssociationListRequest::getAppId() const
{
    return appId_;
}

void ShowAssociationListRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowAssociationListRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowAssociationListRequest::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t ShowAssociationListRequest::getPageSize() const
{
    return pageSize_;
}

void ShowAssociationListRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowAssociationListRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowAssociationListRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowAssociationListRequest::getPageNum() const
{
    return pageNum_;
}

void ShowAssociationListRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowAssociationListRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowAssociationListRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

std::string ShowAssociationListRequest::getSortKey() const
{
    return sortKey_;
}

void ShowAssociationListRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ShowAssociationListRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ShowAssociationListRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ShowAssociationListRequest::getSortDir() const
{
    return sortDir_;
}

void ShowAssociationListRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ShowAssociationListRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ShowAssociationListRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


