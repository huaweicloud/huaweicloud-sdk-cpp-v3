

#include "huaweicloud/codehub/v4/model/ListProtectedBranchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProtectedBranchesRequest::ListProtectedBranchesRequest()
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

ListProtectedBranchesRequest::~ListProtectedBranchesRequest() = default;

void ListProtectedBranchesRequest::validate()
{
}

web::json::value ListProtectedBranchesRequest::toJson() const
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
bool ListProtectedBranchesRequest::fromJson(const web::json::value& val)
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


int32_t ListProtectedBranchesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListProtectedBranchesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListProtectedBranchesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListProtectedBranchesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListProtectedBranchesRequest::getOffset() const
{
    return offset_;
}

void ListProtectedBranchesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProtectedBranchesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProtectedBranchesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProtectedBranchesRequest::getLimit() const
{
    return limit_;
}

void ListProtectedBranchesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProtectedBranchesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProtectedBranchesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProtectedBranchesRequest::getSearch() const
{
    return search_;
}

void ListProtectedBranchesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListProtectedBranchesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListProtectedBranchesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}


