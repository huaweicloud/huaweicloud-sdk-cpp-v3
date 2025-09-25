

#include "huaweicloud/codehub/v4/model/UpdateMergeRequestReviewersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestReviewersRequest::UpdateMergeRequestReviewersRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMergeRequestReviewersRequest::~UpdateMergeRequestReviewersRequest() = default;

void UpdateMergeRequestReviewersRequest::validate()
{
}

web::json::value UpdateMergeRequestReviewersRequest::toJson() const
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
bool UpdateMergeRequestReviewersRequest::fromJson(const web::json::value& val)
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
            ApprovalReviewerInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateMergeRequestReviewersRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestReviewersRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestReviewersRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestReviewersRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateMergeRequestReviewersRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void UpdateMergeRequestReviewersRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool UpdateMergeRequestReviewersRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void UpdateMergeRequestReviewersRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

ApprovalReviewerInfoDto UpdateMergeRequestReviewersRequest::getBody() const
{
    return body_;
}

void UpdateMergeRequestReviewersRequest::setBody(const ApprovalReviewerInfoDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestReviewersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestReviewersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


