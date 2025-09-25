

#include "huaweicloud/codehub/v4/model/ListCommitAssociatedMergeRequestsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListCommitAssociatedMergeRequestsRequest::ListCommitAssociatedMergeRequestsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListCommitAssociatedMergeRequestsRequest::~ListCommitAssociatedMergeRequestsRequest() = default;

void ListCommitAssociatedMergeRequestsRequest::validate()
{
}

web::json::value ListCommitAssociatedMergeRequestsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListCommitAssociatedMergeRequestsRequest::fromJson(const web::json::value& val)
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


int32_t ListCommitAssociatedMergeRequestsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListCommitAssociatedMergeRequestsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListCommitAssociatedMergeRequestsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListCommitAssociatedMergeRequestsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListCommitAssociatedMergeRequestsRequest::getSha() const
{
    return sha_;
}

void ListCommitAssociatedMergeRequestsRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ListCommitAssociatedMergeRequestsRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ListCommitAssociatedMergeRequestsRequest::unsetsha()
{
    shaIsSet_ = false;
}

int32_t ListCommitAssociatedMergeRequestsRequest::getOffset() const
{
    return offset_;
}

void ListCommitAssociatedMergeRequestsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListCommitAssociatedMergeRequestsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListCommitAssociatedMergeRequestsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListCommitAssociatedMergeRequestsRequest::getLimit() const
{
    return limit_;
}

void ListCommitAssociatedMergeRequestsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCommitAssociatedMergeRequestsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCommitAssociatedMergeRequestsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


