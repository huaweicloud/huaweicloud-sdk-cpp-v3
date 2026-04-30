

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
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
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
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
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

int32_t ShowAssociationListRequest::getLimit() const
{
    return limit_;
}

void ShowAssociationListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAssociationListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAssociationListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAssociationListRequest::getOffset() const
{
    return offset_;
}

void ShowAssociationListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAssociationListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAssociationListRequest::unsetoffset()
{
    offsetIsSet_ = false;
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


