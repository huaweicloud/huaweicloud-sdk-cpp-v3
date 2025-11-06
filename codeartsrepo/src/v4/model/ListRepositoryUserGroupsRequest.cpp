

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryUserGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryUserGroupsRequest::ListRepositoryUserGroupsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRepositoryUserGroupsRequest::~ListRepositoryUserGroupsRequest() = default;

void ListRepositoryUserGroupsRequest::validate()
{
}

web::json::value ListRepositoryUserGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
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

    return val;
}
bool ListRepositoryUserGroupsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ListRepositoryUserGroupsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryUserGroupsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryUserGroupsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryUserGroupsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListRepositoryUserGroupsRequest::getSearch() const
{
    return search_;
}

void ListRepositoryUserGroupsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRepositoryUserGroupsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRepositoryUserGroupsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListRepositoryUserGroupsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryUserGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryUserGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryUserGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryUserGroupsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryUserGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryUserGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryUserGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


