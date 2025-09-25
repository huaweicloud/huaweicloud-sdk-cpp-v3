

#include "huaweicloud/codehub/v4/model/MergeMergeRequestRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeMergeRequestRequest::MergeMergeRequestRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

MergeMergeRequestRequest::~MergeMergeRequestRequest() = default;

void MergeMergeRequestRequest::validate()
{
}

web::json::value MergeMergeRequestRequest::toJson() const
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
bool MergeMergeRequestRequest::fromJson(const web::json::value& val)
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
            MergeMergeRequestBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t MergeMergeRequestRequest::getRepositoryId() const
{
    return repositoryId_;
}

void MergeMergeRequestRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool MergeMergeRequestRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void MergeMergeRequestRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t MergeMergeRequestRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void MergeMergeRequestRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool MergeMergeRequestRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void MergeMergeRequestRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

MergeMergeRequestBodyDto MergeMergeRequestRequest::getBody() const
{
    return body_;
}

void MergeMergeRequestRequest::setBody(const MergeMergeRequestBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MergeMergeRequestRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MergeMergeRequestRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


