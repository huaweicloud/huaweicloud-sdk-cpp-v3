

#include "huaweicloud/codehub/v4/model/ListCurrentUserRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListCurrentUserRepositoriesRequest::ListCurrentUserRepositoriesRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    archived_ = false;
    archivedIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    starred_ = false;
    starredIsSet_ = false;
    membership_ = false;
    membershipIsSet_ = false;
    userCreated_ = false;
    userCreatedIsSet_ = false;
    includeAbnormal_ = false;
    includeAbnormalIsSet_ = false;
}

ListCurrentUserRepositoriesRequest::~ListCurrentUserRepositoriesRequest() = default;

void ListCurrentUserRepositoriesRequest::validate()
{
}

web::json::value ListCurrentUserRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(archivedIsSet_) {
        val[utility::conversions::to_string_t("archived")] = ModelBase::toJson(archived_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(starredIsSet_) {
        val[utility::conversions::to_string_t("starred")] = ModelBase::toJson(starred_);
    }
    if(membershipIsSet_) {
        val[utility::conversions::to_string_t("membership")] = ModelBase::toJson(membership_);
    }
    if(userCreatedIsSet_) {
        val[utility::conversions::to_string_t("user_created")] = ModelBase::toJson(userCreated_);
    }
    if(includeAbnormalIsSet_) {
        val[utility::conversions::to_string_t("include_abnormal")] = ModelBase::toJson(includeAbnormal_);
    }

    return val;
}
bool ListCurrentUserRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("archived"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archived"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchived(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("starred"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starred"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarred(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("membership"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("membership"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembership(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_created"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_abnormal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_abnormal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeAbnormal(refVal);
        }
    }
    return ok;
}


int32_t ListCurrentUserRepositoriesRequest::getOffset() const
{
    return offset_;
}

void ListCurrentUserRepositoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListCurrentUserRepositoriesRequest::getLimit() const
{
    return limit_;
}

void ListCurrentUserRepositoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListCurrentUserRepositoriesRequest::getOrderBy() const
{
    return orderBy_;
}

void ListCurrentUserRepositoriesRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListCurrentUserRepositoriesRequest::getSort() const
{
    return sort_;
}

void ListCurrentUserRepositoriesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetsort()
{
    sortIsSet_ = false;
}

bool ListCurrentUserRepositoriesRequest::isArchived() const
{
    return archived_;
}

void ListCurrentUserRepositoriesRequest::setArchived(bool value)
{
    archived_ = value;
    archivedIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::archivedIsSet() const
{
    return archivedIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetarchived()
{
    archivedIsSet_ = false;
}

std::string ListCurrentUserRepositoriesRequest::getSearch() const
{
    return search_;
}

void ListCurrentUserRepositoriesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

bool ListCurrentUserRepositoriesRequest::isStarred() const
{
    return starred_;
}

void ListCurrentUserRepositoriesRequest::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::starredIsSet() const
{
    return starredIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetstarred()
{
    starredIsSet_ = false;
}

bool ListCurrentUserRepositoriesRequest::isMembership() const
{
    return membership_;
}

void ListCurrentUserRepositoriesRequest::setMembership(bool value)
{
    membership_ = value;
    membershipIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::membershipIsSet() const
{
    return membershipIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetmembership()
{
    membershipIsSet_ = false;
}

bool ListCurrentUserRepositoriesRequest::isUserCreated() const
{
    return userCreated_;
}

void ListCurrentUserRepositoriesRequest::setUserCreated(bool value)
{
    userCreated_ = value;
    userCreatedIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::userCreatedIsSet() const
{
    return userCreatedIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetuserCreated()
{
    userCreatedIsSet_ = false;
}

bool ListCurrentUserRepositoriesRequest::isIncludeAbnormal() const
{
    return includeAbnormal_;
}

void ListCurrentUserRepositoriesRequest::setIncludeAbnormal(bool value)
{
    includeAbnormal_ = value;
    includeAbnormalIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::includeAbnormalIsSet() const
{
    return includeAbnormalIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetincludeAbnormal()
{
    includeAbnormalIsSet_ = false;
}

}
}
}
}
}


