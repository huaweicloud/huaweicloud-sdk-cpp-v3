

#include "huaweicloud/codehub/v4/model/ListProjectSubgroupsAndRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectSubgroupsAndRepositoriesRequest::ListProjectSubgroupsAndRepositoriesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    filter_ = 0;
    filterIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProjectSubgroupsAndRepositoriesRequest::~ListProjectSubgroupsAndRepositoriesRequest() = default;

void ListProjectSubgroupsAndRepositoriesRequest::validate()
{
}

web::json::value ListProjectSubgroupsAndRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListProjectSubgroupsAndRepositoriesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchived(refVal);
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
    return ok;
}


std::string ListProjectSubgroupsAndRepositoriesRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectSubgroupsAndRepositoriesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectSubgroupsAndRepositoriesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectSubgroupsAndRepositoriesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectSubgroupsAndRepositoriesRequest::getFilter() const
{
    return filter_;
}

void ListProjectSubgroupsAndRepositoriesRequest::setFilter(int32_t value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool ListProjectSubgroupsAndRepositoriesRequest::filterIsSet() const
{
    return filterIsSet_;
}

void ListProjectSubgroupsAndRepositoriesRequest::unsetfilter()
{
    filterIsSet_ = false;
}

std::string ListProjectSubgroupsAndRepositoriesRequest::getOrderBy() const
{
    return orderBy_;
}

void ListProjectSubgroupsAndRepositoriesRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListProjectSubgroupsAndRepositoriesRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListProjectSubgroupsAndRepositoriesRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListProjectSubgroupsAndRepositoriesRequest::getSort() const
{
    return sort_;
}

void ListProjectSubgroupsAndRepositoriesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListProjectSubgroupsAndRepositoriesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListProjectSubgroupsAndRepositoriesRequest::unsetsort()
{
    sortIsSet_ = false;
}

bool ListProjectSubgroupsAndRepositoriesRequest::isArchived() const
{
    return archived_;
}

void ListProjectSubgroupsAndRepositoriesRequest::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool ListProjectSubgroupsAndRepositoriesRequest::archivedIsSet() const
{
    return archivedIsSet_;
}

void ListProjectSubgroupsAndRepositoriesRequest::unsetarchived()
{
    archivedIsSet_ = false;
}

int32_t ListProjectSubgroupsAndRepositoriesRequest::getOffset() const
{
    return offset_;
}

void ListProjectSubgroupsAndRepositoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectSubgroupsAndRepositoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectSubgroupsAndRepositoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectSubgroupsAndRepositoriesRequest::getLimit() const
{
    return limit_;
}

void ListProjectSubgroupsAndRepositoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectSubgroupsAndRepositoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectSubgroupsAndRepositoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


