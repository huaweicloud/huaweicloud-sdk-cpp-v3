

#include "huaweicloud/codehub/v4/model/ListCommitDiscussionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListCommitDiscussionsRequest::ListCommitDiscussionsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListCommitDiscussionsRequest::~ListCommitDiscussionsRequest() = default;

void ListCommitDiscussionsRequest::validate()
{
}

web::json::value ListCommitDiscussionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListCommitDiscussionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
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


int32_t ListCommitDiscussionsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListCommitDiscussionsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListCommitDiscussionsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListCommitDiscussionsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListCommitDiscussionsRequest::getSha() const
{
    return sha_;
}

void ListCommitDiscussionsRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ListCommitDiscussionsRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ListCommitDiscussionsRequest::unsetsha()
{
    shaIsSet_ = false;
}

std::string ListCommitDiscussionsRequest::getSort() const
{
    return sort_;
}

void ListCommitDiscussionsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListCommitDiscussionsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListCommitDiscussionsRequest::unsetsort()
{
    sortIsSet_ = false;
}

int32_t ListCommitDiscussionsRequest::getOffset() const
{
    return offset_;
}

void ListCommitDiscussionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListCommitDiscussionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListCommitDiscussionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListCommitDiscussionsRequest::getLimit() const
{
    return limit_;
}

void ListCommitDiscussionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCommitDiscussionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCommitDiscussionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


