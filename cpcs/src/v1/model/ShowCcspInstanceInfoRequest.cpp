

#include "huaweicloud/cpcs/v1/model/ShowCcspInstanceInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowCcspInstanceInfoRequest::ShowCcspInstanceInfoRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    isNormal_ = false;
    isNormalIsSet_ = false;
}

ShowCcspInstanceInfoRequest::~ShowCcspInstanceInfoRequest() = default;

void ShowCcspInstanceInfoRequest::validate()
{
}

web::json::value ShowCcspInstanceInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(isNormalIsSet_) {
        val[utility::conversions::to_string_t("is_normal")] = ModelBase::toJson(isNormal_);
    }

    return val;
}
bool ShowCcspInstanceInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_normal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_normal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNormal(refVal);
        }
    }
    return ok;
}


int32_t ShowCcspInstanceInfoRequest::getLimit() const
{
    return limit_;
}

void ShowCcspInstanceInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowCcspInstanceInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowCcspInstanceInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowCcspInstanceInfoRequest::getName() const
{
    return name_;
}

void ShowCcspInstanceInfoRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowCcspInstanceInfoRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowCcspInstanceInfoRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ShowCcspInstanceInfoRequest::getOffset() const
{
    return offset_;
}

void ShowCcspInstanceInfoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowCcspInstanceInfoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowCcspInstanceInfoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowCcspInstanceInfoRequest::getSortKey() const
{
    return sortKey_;
}

void ShowCcspInstanceInfoRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ShowCcspInstanceInfoRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ShowCcspInstanceInfoRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ShowCcspInstanceInfoRequest::getSortDir() const
{
    return sortDir_;
}

void ShowCcspInstanceInfoRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ShowCcspInstanceInfoRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ShowCcspInstanceInfoRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ShowCcspInstanceInfoRequest::getClusterId() const
{
    return clusterId_;
}

void ShowCcspInstanceInfoRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowCcspInstanceInfoRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowCcspInstanceInfoRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

int32_t ShowCcspInstanceInfoRequest::getStatus() const
{
    return status_;
}

void ShowCcspInstanceInfoRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowCcspInstanceInfoRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowCcspInstanceInfoRequest::unsetstatus()
{
    statusIsSet_ = false;
}

bool ShowCcspInstanceInfoRequest::isIsNormal() const
{
    return isNormal_;
}

void ShowCcspInstanceInfoRequest::setIsNormal(bool value)
{
    isNormal_ = value;
    isNormalIsSet_ = true;
}

bool ShowCcspInstanceInfoRequest::isNormalIsSet() const
{
    return isNormalIsSet_;
}

void ShowCcspInstanceInfoRequest::unsetisNormal()
{
    isNormalIsSet_ = false;
}

}
}
}
}
}


