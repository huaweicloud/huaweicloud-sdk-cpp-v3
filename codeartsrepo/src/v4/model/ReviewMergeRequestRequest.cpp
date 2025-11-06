

#include "huaweicloud/codeartsrepo/v4/model/ReviewMergeRequestRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ReviewMergeRequestRequest::ReviewMergeRequestRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

ReviewMergeRequestRequest::~ReviewMergeRequestRequest() = default;

void ReviewMergeRequestRequest::validate()
{
}

web::json::value ReviewMergeRequestRequest::toJson() const
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
bool ReviewMergeRequestRequest::fromJson(const web::json::value& val)
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


int32_t ReviewMergeRequestRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ReviewMergeRequestRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ReviewMergeRequestRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ReviewMergeRequestRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ReviewMergeRequestRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ReviewMergeRequestRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ReviewMergeRequestRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ReviewMergeRequestRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

ApprovalActionTypeDto ReviewMergeRequestRequest::getBody() const
{
    return body_;
}

void ReviewMergeRequestRequest::setBody(const ApprovalActionTypeDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ReviewMergeRequestRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ReviewMergeRequestRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


