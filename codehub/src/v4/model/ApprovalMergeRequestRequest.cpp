

#include "huaweicloud/codehub/v4/model/ApprovalMergeRequestRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ApprovalMergeRequestRequest::ApprovalMergeRequestRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

ApprovalMergeRequestRequest::~ApprovalMergeRequestRequest() = default;

void ApprovalMergeRequestRequest::validate()
{
}

web::json::value ApprovalMergeRequestRequest::toJson() const
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
bool ApprovalMergeRequestRequest::fromJson(const web::json::value& val)
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
            ApprovalActionTypeDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ApprovalMergeRequestRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ApprovalMergeRequestRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ApprovalMergeRequestRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ApprovalMergeRequestRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ApprovalMergeRequestRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ApprovalMergeRequestRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ApprovalMergeRequestRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ApprovalMergeRequestRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

ApprovalActionTypeDto ApprovalMergeRequestRequest::getBody() const
{
    return body_;
}

void ApprovalMergeRequestRequest::setBody(const ApprovalActionTypeDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ApprovalMergeRequestRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ApprovalMergeRequestRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


