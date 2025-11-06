

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestConflictFilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestConflictFilesRequest::ListMergeRequestConflictFilesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    hideContent_ = false;
    hideContentIsSet_ = false;
}

ListMergeRequestConflictFilesRequest::~ListMergeRequestConflictFilesRequest() = default;

void ListMergeRequestConflictFilesRequest::validate()
{
}

web::json::value ListMergeRequestConflictFilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(hideContentIsSet_) {
        val[utility::conversions::to_string_t("hide_content")] = ModelBase::toJson(hideContent_);
    }

    return val;
}
bool ListMergeRequestConflictFilesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hide_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hide_content"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHideContent(refVal);
        }
    }
    return ok;
}


int32_t ListMergeRequestConflictFilesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestConflictFilesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestConflictFilesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestConflictFilesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListMergeRequestConflictFilesRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestConflictFilesRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestConflictFilesRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestConflictFilesRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

int32_t ListMergeRequestConflictFilesRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestConflictFilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestConflictFilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestConflictFilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestConflictFilesRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestConflictFilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestConflictFilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestConflictFilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool ListMergeRequestConflictFilesRequest::isHideContent() const
{
    return hideContent_;
}

void ListMergeRequestConflictFilesRequest::setHideContent(bool value)
{
    hideContent_ = value;
    hideContentIsSet_ = true;
}

bool ListMergeRequestConflictFilesRequest::hideContentIsSet() const
{
    return hideContentIsSet_;
}

void ListMergeRequestConflictFilesRequest::unsethideContent()
{
    hideContentIsSet_ = false;
}

}
}
}
}
}


