

#include "huaweicloud/codeartsdeploy/v2/model/ListHostGroupsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostGroupsRequest::ListHostGroupsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    regionName_ = "";
    regionNameIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListHostGroupsRequest::~ListHostGroupsRequest() = default;

void ListHostGroupsRequest::validate()
{
}

web::json::value ListHostGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}

bool ListHostGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
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

std::string ListHostGroupsRequest::getProjectId() const
{
    return projectId_;
}

void ListHostGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListHostGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListHostGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListHostGroupsRequest::getRegionName() const
{
    return regionName_;
}

void ListHostGroupsRequest::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool ListHostGroupsRequest::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void ListHostGroupsRequest::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string ListHostGroupsRequest::getOs() const
{
    return os_;
}

void ListHostGroupsRequest::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool ListHostGroupsRequest::osIsSet() const
{
    return osIsSet_;
}

void ListHostGroupsRequest::unsetos()
{
    osIsSet_ = false;
}

int32_t ListHostGroupsRequest::getOffset() const
{
    return offset_;
}

void ListHostGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHostGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHostGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHostGroupsRequest::getLimit() const
{
    return limit_;
}

void ListHostGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHostGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHostGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListHostGroupsRequest::getName() const
{
    return name_;
}

void ListHostGroupsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListHostGroupsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListHostGroupsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListHostGroupsRequest::getSortKey() const
{
    return sortKey_;
}

void ListHostGroupsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListHostGroupsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListHostGroupsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListHostGroupsRequest::getSortDir() const
{
    return sortDir_;
}

void ListHostGroupsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListHostGroupsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListHostGroupsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


