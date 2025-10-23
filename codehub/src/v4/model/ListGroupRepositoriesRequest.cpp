

#include "huaweicloud/codehub/v4/model/ListGroupRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupRepositoriesRequest::ListGroupRepositoriesRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
}

ListGroupRepositoriesRequest::~ListGroupRepositoriesRequest() = default;

void ListGroupRepositoriesRequest::validate()
{
}

web::json::value ListGroupRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}
bool ListGroupRepositoriesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
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
    return ok;
}


int32_t ListGroupRepositoriesRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupRepositoriesRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupRepositoriesRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupRepositoriesRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListGroupRepositoriesRequest::getSearch() const
{
    return search_;
}

void ListGroupRepositoriesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListGroupRepositoriesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListGroupRepositoriesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListGroupRepositoriesRequest::getOffset() const
{
    return offset_;
}

void ListGroupRepositoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupRepositoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupRepositoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupRepositoriesRequest::getLimit() const
{
    return limit_;
}

void ListGroupRepositoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupRepositoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupRepositoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGroupRepositoriesRequest::getOrderBy() const
{
    return orderBy_;
}

void ListGroupRepositoriesRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListGroupRepositoriesRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListGroupRepositoriesRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListGroupRepositoriesRequest::getSort() const
{
    return sort_;
}

void ListGroupRepositoriesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListGroupRepositoriesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListGroupRepositoriesRequest::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


