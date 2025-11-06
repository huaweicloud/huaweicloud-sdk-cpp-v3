

#include "huaweicloud/codeartsrepo/v4/model/ListGroupSubgroupsAndRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupSubgroupsAndRepositoriesRequest::ListGroupSubgroupsAndRepositoriesRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
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

ListGroupSubgroupsAndRepositoriesRequest::~ListGroupSubgroupsAndRepositoriesRequest() = default;

void ListGroupSubgroupsAndRepositoriesRequest::validate()
{
}

web::json::value ListGroupSubgroupsAndRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
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
bool ListGroupSubgroupsAndRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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


int32_t ListGroupSubgroupsAndRepositoriesRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupSubgroupsAndRepositoriesRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupSubgroupsAndRepositoriesRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupSubgroupsAndRepositoriesRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ListGroupSubgroupsAndRepositoriesRequest::getFilter() const
{
    return filter_;
}

void ListGroupSubgroupsAndRepositoriesRequest::setFilter(int32_t value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool ListGroupSubgroupsAndRepositoriesRequest::filterIsSet() const
{
    return filterIsSet_;
}

void ListGroupSubgroupsAndRepositoriesRequest::unsetfilter()
{
    filterIsSet_ = false;
}

std::string ListGroupSubgroupsAndRepositoriesRequest::getOrderBy() const
{
    return orderBy_;
}

void ListGroupSubgroupsAndRepositoriesRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListGroupSubgroupsAndRepositoriesRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListGroupSubgroupsAndRepositoriesRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListGroupSubgroupsAndRepositoriesRequest::getSort() const
{
    return sort_;
}

void ListGroupSubgroupsAndRepositoriesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListGroupSubgroupsAndRepositoriesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListGroupSubgroupsAndRepositoriesRequest::unsetsort()
{
    sortIsSet_ = false;
}

bool ListGroupSubgroupsAndRepositoriesRequest::isArchived() const
{
    return archived_;
}

void ListGroupSubgroupsAndRepositoriesRequest::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool ListGroupSubgroupsAndRepositoriesRequest::archivedIsSet() const
{
    return archivedIsSet_;
}

void ListGroupSubgroupsAndRepositoriesRequest::unsetarchived()
{
    archivedIsSet_ = false;
}

int32_t ListGroupSubgroupsAndRepositoriesRequest::getOffset() const
{
    return offset_;
}

void ListGroupSubgroupsAndRepositoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupSubgroupsAndRepositoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupSubgroupsAndRepositoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupSubgroupsAndRepositoriesRequest::getLimit() const
{
    return limit_;
}

void ListGroupSubgroupsAndRepositoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupSubgroupsAndRepositoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupSubgroupsAndRepositoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


