

#include "huaweicloud/codehub/v4/model/CreateCherryPickMergeRequestRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateCherryPickMergeRequestRequest::CreateCherryPickMergeRequestRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCherryPickMergeRequestRequest::~CreateCherryPickMergeRequestRequest() = default;

void CreateCherryPickMergeRequestRequest::validate()
{
}

web::json::value CreateCherryPickMergeRequestRequest::toJson() const
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
bool CreateCherryPickMergeRequestRequest::fromJson(const web::json::value& val)
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
            MrCherryRevertDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateCherryPickMergeRequestRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateCherryPickMergeRequestRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateCherryPickMergeRequestRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateCherryPickMergeRequestRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t CreateCherryPickMergeRequestRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void CreateCherryPickMergeRequestRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool CreateCherryPickMergeRequestRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void CreateCherryPickMergeRequestRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

MrCherryRevertDto CreateCherryPickMergeRequestRequest::getBody() const
{
    return body_;
}

void CreateCherryPickMergeRequestRequest::setBody(const MrCherryRevertDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCherryPickMergeRequestRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCherryPickMergeRequestRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


