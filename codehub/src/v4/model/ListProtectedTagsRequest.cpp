

#include "huaweicloud/codehub/v4/model/ListProtectedTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProtectedTagsRequest::ListProtectedTagsRequest()
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

ListProtectedTagsRequest::~ListProtectedTagsRequest() = default;

void ListProtectedTagsRequest::validate()
{
}

web::json::value ListProtectedTagsRequest::toJson() const
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
bool ListProtectedTagsRequest::fromJson(const web::json::value& val)
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


int32_t ListProtectedTagsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListProtectedTagsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListProtectedTagsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListProtectedTagsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListProtectedTagsRequest::getOffset() const
{
    return offset_;
}

void ListProtectedTagsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProtectedTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProtectedTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProtectedTagsRequest::getLimit() const
{
    return limit_;
}

void ListProtectedTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProtectedTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProtectedTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProtectedTagsRequest::getSearch() const
{
    return search_;
}

void ListProtectedTagsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListProtectedTagsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListProtectedTagsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}


