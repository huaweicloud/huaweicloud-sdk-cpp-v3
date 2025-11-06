

#include "huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestApproversRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateMergeRequestApproversRequest::UpdateMergeRequestApproversRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMergeRequestApproversRequest::~UpdateMergeRequestApproversRequest() = default;

void UpdateMergeRequestApproversRequest::validate()
{
}

web::json::value UpdateMergeRequestApproversRequest::toJson() const
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
bool UpdateMergeRequestApproversRequest::fromJson(const web::json::value& val)
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
            ApprovalApproverInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateMergeRequestApproversRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestApproversRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestApproversRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestApproversRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateMergeRequestApproversRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void UpdateMergeRequestApproversRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool UpdateMergeRequestApproversRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void UpdateMergeRequestApproversRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

ApprovalApproverInfoDto UpdateMergeRequestApproversRequest::getBody() const
{
    return body_;
}

void UpdateMergeRequestApproversRequest::setBody(const ApprovalApproverInfoDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestApproversRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestApproversRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


