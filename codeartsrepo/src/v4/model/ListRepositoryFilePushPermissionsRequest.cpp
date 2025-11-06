

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryFilePushPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryFilePushPermissionsRequest::ListRepositoryFilePushPermissionsRequest()
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

ListRepositoryFilePushPermissionsRequest::~ListRepositoryFilePushPermissionsRequest() = default;

void ListRepositoryFilePushPermissionsRequest::validate()
{
}

web::json::value ListRepositoryFilePushPermissionsRequest::toJson() const
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
bool ListRepositoryFilePushPermissionsRequest::fromJson(const web::json::value& val)
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


int32_t ListRepositoryFilePushPermissionsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryFilePushPermissionsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryFilePushPermissionsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryFilePushPermissionsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListRepositoryFilePushPermissionsRequest::getSearch() const
{
    return search_;
}

void ListRepositoryFilePushPermissionsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRepositoryFilePushPermissionsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRepositoryFilePushPermissionsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListRepositoryFilePushPermissionsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryFilePushPermissionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryFilePushPermissionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryFilePushPermissionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryFilePushPermissionsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryFilePushPermissionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryFilePushPermissionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryFilePushPermissionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


