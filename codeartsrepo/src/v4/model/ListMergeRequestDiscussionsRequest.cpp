

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestDiscussionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestDiscussionsRequest::ListMergeRequestDiscussionsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    unresolved_ = "";
    unresolvedIsSet_ = false;
    authorId_ = 0;
    authorIdIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListMergeRequestDiscussionsRequest::~ListMergeRequestDiscussionsRequest() = default;

void ListMergeRequestDiscussionsRequest::validate()
{
}

web::json::value ListMergeRequestDiscussionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(unresolvedIsSet_) {
        val[utility::conversions::to_string_t("unresolved")] = ModelBase::toJson(unresolved_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
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
bool ListMergeRequestDiscussionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unresolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unresolved"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnresolved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
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


int32_t ListMergeRequestDiscussionsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestDiscussionsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestDiscussionsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestDiscussionsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListMergeRequestDiscussionsRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestDiscussionsRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestDiscussionsRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestDiscussionsRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string ListMergeRequestDiscussionsRequest::getUnresolved() const
{
    return unresolved_;
}

void ListMergeRequestDiscussionsRequest::setUnresolved(const std::string& value)
{
    unresolved_ = value;
    unresolvedIsSet_ = true;
}

bool ListMergeRequestDiscussionsRequest::unresolvedIsSet() const
{
    return unresolvedIsSet_;
}

void ListMergeRequestDiscussionsRequest::unsetunresolved()
{
    unresolvedIsSet_ = false;
}

int32_t ListMergeRequestDiscussionsRequest::getAuthorId() const
{
    return authorId_;
}

void ListMergeRequestDiscussionsRequest::setAuthorId(int32_t value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool ListMergeRequestDiscussionsRequest::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void ListMergeRequestDiscussionsRequest::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string ListMergeRequestDiscussionsRequest::getSort() const
{
    return sort_;
}

void ListMergeRequestDiscussionsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListMergeRequestDiscussionsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListMergeRequestDiscussionsRequest::unsetsort()
{
    sortIsSet_ = false;
}

int32_t ListMergeRequestDiscussionsRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestDiscussionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestDiscussionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestDiscussionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestDiscussionsRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestDiscussionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestDiscussionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestDiscussionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


