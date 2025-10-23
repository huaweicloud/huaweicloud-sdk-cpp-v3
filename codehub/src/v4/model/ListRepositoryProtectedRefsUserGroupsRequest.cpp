

#include "huaweicloud/codehub/v4/model/ListRepositoryProtectedRefsUserGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryProtectedRefsUserGroupsRequest::ListRepositoryProtectedRefsUserGroupsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
}

ListRepositoryProtectedRefsUserGroupsRequest::~ListRepositoryProtectedRefsUserGroupsRequest() = default;

void ListRepositoryProtectedRefsUserGroupsRequest::validate()
{
}

web::json::value ListRepositoryProtectedRefsUserGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }

    return val;
}
bool ListRepositoryProtectedRefsUserGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    return ok;
}


int32_t ListRepositoryProtectedRefsUserGroupsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryProtectedRefsUserGroupsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryProtectedRefsUserGroupsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryProtectedRefsUserGroupsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryProtectedRefsUserGroupsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryProtectedRefsUserGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryProtectedRefsUserGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryProtectedRefsUserGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryProtectedRefsUserGroupsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryProtectedRefsUserGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryProtectedRefsUserGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryProtectedRefsUserGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRepositoryProtectedRefsUserGroupsRequest::getSearch() const
{
    return search_;
}

void ListRepositoryProtectedRefsUserGroupsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRepositoryProtectedRefsUserGroupsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRepositoryProtectedRefsUserGroupsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}


