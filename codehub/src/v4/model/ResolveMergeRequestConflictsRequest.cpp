

#include "huaweicloud/codehub/v4/model/ResolveMergeRequestConflictsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ResolveMergeRequestConflictsRequest::ResolveMergeRequestConflictsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

ResolveMergeRequestConflictsRequest::~ResolveMergeRequestConflictsRequest() = default;

void ResolveMergeRequestConflictsRequest::validate()
{
}

web::json::value ResolveMergeRequestConflictsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResolveMergeRequestConflictsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResolveConflictDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ResolveMergeRequestConflictsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ResolveMergeRequestConflictsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ResolveMergeRequestConflictsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ResolveMergeRequestConflictsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ResolveMergeRequestConflictsRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ResolveMergeRequestConflictsRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ResolveMergeRequestConflictsRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ResolveMergeRequestConflictsRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

ResolveConflictDto ResolveMergeRequestConflictsRequest::getBody() const
{
    return body_;
}

void ResolveMergeRequestConflictsRequest::setBody(const ResolveConflictDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResolveMergeRequestConflictsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResolveMergeRequestConflictsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


