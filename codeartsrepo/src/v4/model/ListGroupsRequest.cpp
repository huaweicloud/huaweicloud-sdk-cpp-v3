

#include "huaweicloud/codeartsrepo/v4/model/ListGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupsRequest::ListGroupsRequest()
{
    search_ = "";
    searchIsSet_ = false;
    allAvailable_ = false;
    allAvailableIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    starred_ = false;
    starredIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    owned_ = false;
    ownedIsSet_ = false;
}

ListGroupsRequest::~ListGroupsRequest() = default;

void ListGroupsRequest::validate()
{
}

web::json::value ListGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(allAvailableIsSet_) {
        val[utility::conversions::to_string_t("all_available")] = ModelBase::toJson(allAvailable_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(starredIsSet_) {
        val[utility::conversions::to_string_t("starred")] = ModelBase::toJson(starred_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(ownedIsSet_) {
        val[utility::conversions::to_string_t("owned")] = ModelBase::toJson(owned_);
    }

    return val;
}
bool ListGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllAvailable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("starred"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starred"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarred(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owned"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owned"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwned(refVal);
        }
    }
    return ok;
}


std::string ListGroupsRequest::getSearch() const
{
    return search_;
}

void ListGroupsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListGroupsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListGroupsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

bool ListGroupsRequest::isAllAvailable() const
{
    return allAvailable_;
}

void ListGroupsRequest::setAllAvailable(bool value)
{
    allAvailable_ = value;
    allAvailableIsSet_ = true;
}

bool ListGroupsRequest::allAvailableIsSet() const
{
    return allAvailableIsSet_;
}

void ListGroupsRequest::unsetallAvailable()
{
    allAvailableIsSet_ = false;
}

std::string ListGroupsRequest::getOrderBy() const
{
    return orderBy_;
}

void ListGroupsRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListGroupsRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListGroupsRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListGroupsRequest::getSort() const
{
    return sort_;
}

void ListGroupsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListGroupsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListGroupsRequest::unsetsort()
{
    sortIsSet_ = false;
}

bool ListGroupsRequest::isStarred() const
{
    return starred_;
}

void ListGroupsRequest::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool ListGroupsRequest::starredIsSet() const
{
    return starredIsSet_;
}

void ListGroupsRequest::unsetstarred()
{
    starredIsSet_ = false;
}

int32_t ListGroupsRequest::getOffset() const
{
    return offset_;
}

void ListGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupsRequest::getLimit() const
{
    return limit_;
}

void ListGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool ListGroupsRequest::isOwned() const
{
    return owned_;
}

void ListGroupsRequest::setOwned(bool value)
{
    owned_ = value;
    ownedIsSet_ = true;
}

bool ListGroupsRequest::ownedIsSet() const
{
    return ownedIsSet_;
}

void ListGroupsRequest::unsetowned()
{
    ownedIsSet_ = false;
}

}
}
}
}
}


