

#include "huaweicloud/codehub/v3/model/UpdateMergeRequestApprovalStateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




UpdateMergeRequestApprovalStateRequest::UpdateMergeRequestApprovalStateRequest()
{
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMergeRequestApprovalStateRequest::~UpdateMergeRequestApprovalStateRequest() = default;

void UpdateMergeRequestApprovalStateRequest::validate()
{
}

web::json::value UpdateMergeRequestApprovalStateRequest::toJson() const
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
bool UpdateMergeRequestApprovalStateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string UpdateMergeRequestApprovalStateRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestApprovalStateRequest::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestApprovalStateRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestApprovalStateRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateMergeRequestApprovalStateRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void UpdateMergeRequestApprovalStateRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool UpdateMergeRequestApprovalStateRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void UpdateMergeRequestApprovalStateRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

ApprovalActionTypeDto UpdateMergeRequestApprovalStateRequest::getBody() const
{
    return body_;
}

void UpdateMergeRequestApprovalStateRequest::setBody(const ApprovalActionTypeDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestApprovalStateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestApprovalStateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


