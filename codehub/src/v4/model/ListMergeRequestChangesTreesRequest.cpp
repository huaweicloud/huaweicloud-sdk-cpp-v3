

#include "huaweicloud/codehub/v4/model/ListMergeRequestChangesTreesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestChangesTreesRequest::ListMergeRequestChangesTreesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    approvalUserId_ = 0;
    approvalUserIdIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    fromDiffId_ = 0;
    fromDiffIdIsSet_ = false;
    toDiffId_ = 0;
    toDiffIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListMergeRequestChangesTreesRequest::~ListMergeRequestChangesTreesRequest() = default;

void ListMergeRequestChangesTreesRequest::validate()
{
}

web::json::value ListMergeRequestChangesTreesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(approvalUserIdIsSet_) {
        val[utility::conversions::to_string_t("approval_user_id")] = ModelBase::toJson(approvalUserId_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(fromDiffIdIsSet_) {
        val[utility::conversions::to_string_t("from_diff_id")] = ModelBase::toJson(fromDiffId_);
    }
    if(toDiffIdIsSet_) {
        val[utility::conversions::to_string_t("to_diff_id")] = ModelBase::toJson(toDiffId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListMergeRequestChangesTreesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("approval_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_user_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from_diff_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_diff_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromDiffId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to_diff_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to_diff_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToDiffId(refVal);
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


int32_t ListMergeRequestChangesTreesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestChangesTreesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestChangesTreesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestChangesTreesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListMergeRequestChangesTreesRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestChangesTreesRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestChangesTreesRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestChangesTreesRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

int32_t ListMergeRequestChangesTreesRequest::getApprovalUserId() const
{
    return approvalUserId_;
}

void ListMergeRequestChangesTreesRequest::setApprovalUserId(int32_t value)
{
    approvalUserId_ = value;
    approvalUserIdIsSet_ = true;
}

bool ListMergeRequestChangesTreesRequest::approvalUserIdIsSet() const
{
    return approvalUserIdIsSet_;
}

void ListMergeRequestChangesTreesRequest::unsetapprovalUserId()
{
    approvalUserIdIsSet_ = false;
}

std::string ListMergeRequestChangesTreesRequest::getCommitId() const
{
    return commitId_;
}

void ListMergeRequestChangesTreesRequest::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ListMergeRequestChangesTreesRequest::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ListMergeRequestChangesTreesRequest::unsetcommitId()
{
    commitIdIsSet_ = false;
}

int32_t ListMergeRequestChangesTreesRequest::getFromDiffId() const
{
    return fromDiffId_;
}

void ListMergeRequestChangesTreesRequest::setFromDiffId(int32_t value)
{
    fromDiffId_ = value;
    fromDiffIdIsSet_ = true;
}

bool ListMergeRequestChangesTreesRequest::fromDiffIdIsSet() const
{
    return fromDiffIdIsSet_;
}

void ListMergeRequestChangesTreesRequest::unsetfromDiffId()
{
    fromDiffIdIsSet_ = false;
}

int32_t ListMergeRequestChangesTreesRequest::getToDiffId() const
{
    return toDiffId_;
}

void ListMergeRequestChangesTreesRequest::setToDiffId(int32_t value)
{
    toDiffId_ = value;
    toDiffIdIsSet_ = true;
}

bool ListMergeRequestChangesTreesRequest::toDiffIdIsSet() const
{
    return toDiffIdIsSet_;
}

void ListMergeRequestChangesTreesRequest::unsettoDiffId()
{
    toDiffIdIsSet_ = false;
}

int32_t ListMergeRequestChangesTreesRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestChangesTreesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestChangesTreesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestChangesTreesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestChangesTreesRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestChangesTreesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestChangesTreesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestChangesTreesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


