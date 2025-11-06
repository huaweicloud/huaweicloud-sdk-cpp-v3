

#include "huaweicloud/codeartsrepo/v3/model/CreateMergeRequestDiscussionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateMergeRequestDiscussionRequest::CreateMergeRequestDiscussionRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

CreateMergeRequestDiscussionRequest::~CreateMergeRequestDiscussionRequest() = default;

void CreateMergeRequestDiscussionRequest::validate()
{
}

web::json::value CreateMergeRequestDiscussionRequest::toJson() const
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
bool CreateMergeRequestDiscussionRequest::fromJson(const web::json::value& val)
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
            CreateMergeRequestDiscussionBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateMergeRequestDiscussionRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateMergeRequestDiscussionRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateMergeRequestDiscussionRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t CreateMergeRequestDiscussionRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void CreateMergeRequestDiscussionRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool CreateMergeRequestDiscussionRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void CreateMergeRequestDiscussionRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

CreateMergeRequestDiscussionBodyDto CreateMergeRequestDiscussionRequest::getBody() const
{
    return body_;
}

void CreateMergeRequestDiscussionRequest::setBody(const CreateMergeRequestDiscussionBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestDiscussionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestDiscussionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


