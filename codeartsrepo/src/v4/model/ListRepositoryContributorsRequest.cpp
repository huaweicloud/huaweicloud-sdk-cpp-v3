

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryContributorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryContributorsRequest::ListRepositoryContributorsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    refName_ = "";
    refNameIsSet_ = false;
    skipMerge_ = false;
    skipMergeIsSet_ = false;
    author_ = "";
    authorIsSet_ = false;
}

ListRepositoryContributorsRequest::~ListRepositoryContributorsRequest() = default;

void ListRepositoryContributorsRequest::validate()
{
}

web::json::value ListRepositoryContributorsRequest::toJson() const
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
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(refNameIsSet_) {
        val[utility::conversions::to_string_t("ref_name")] = ModelBase::toJson(refName_);
    }
    if(skipMergeIsSet_) {
        val[utility::conversions::to_string_t("skip_merge")] = ModelBase::toJson(skipMerge_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }

    return val;
}
bool ListRepositoryContributorsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ref_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skip_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skip_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkipMerge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    return ok;
}


int32_t ListRepositoryContributorsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryContributorsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryContributorsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryContributorsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryContributorsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryContributorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryContributorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryContributorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryContributorsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryContributorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryContributorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryContributorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRepositoryContributorsRequest::getOrderBy() const
{
    return orderBy_;
}

void ListRepositoryContributorsRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListRepositoryContributorsRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListRepositoryContributorsRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListRepositoryContributorsRequest::getSort() const
{
    return sort_;
}

void ListRepositoryContributorsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListRepositoryContributorsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListRepositoryContributorsRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListRepositoryContributorsRequest::getRefName() const
{
    return refName_;
}

void ListRepositoryContributorsRequest::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool ListRepositoryContributorsRequest::refNameIsSet() const
{
    return refNameIsSet_;
}

void ListRepositoryContributorsRequest::unsetrefName()
{
    refNameIsSet_ = false;
}

bool ListRepositoryContributorsRequest::isSkipMerge() const
{
    return skipMerge_;
}

void ListRepositoryContributorsRequest::setSkipMerge(bool value)
{
    skipMerge_ = value;
    skipMergeIsSet_ = true;
}

bool ListRepositoryContributorsRequest::skipMergeIsSet() const
{
    return skipMergeIsSet_;
}

void ListRepositoryContributorsRequest::unsetskipMerge()
{
    skipMergeIsSet_ = false;
}

std::string ListRepositoryContributorsRequest::getAuthor() const
{
    return author_;
}

void ListRepositoryContributorsRequest::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool ListRepositoryContributorsRequest::authorIsSet() const
{
    return authorIsSet_;
}

void ListRepositoryContributorsRequest::unsetauthor()
{
    authorIsSet_ = false;
}

}
}
}
}
}


