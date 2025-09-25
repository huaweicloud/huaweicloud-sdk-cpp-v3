

#include "huaweicloud/codehub/v4/model/BatchDeleteProtectedBranchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchDeleteProtectedBranchesRequest::BatchDeleteProtectedBranchesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteProtectedBranchesRequest::~BatchDeleteProtectedBranchesRequest() = default;

void BatchDeleteProtectedBranchesRequest::validate()
{
}

web::json::value BatchDeleteProtectedBranchesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteProtectedBranchesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteProtectedBranchesBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t BatchDeleteProtectedBranchesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void BatchDeleteProtectedBranchesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BatchDeleteProtectedBranchesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BatchDeleteProtectedBranchesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

BatchDeleteProtectedBranchesBodyDto BatchDeleteProtectedBranchesRequest::getBody() const
{
    return body_;
}

void BatchDeleteProtectedBranchesRequest::setBody(const BatchDeleteProtectedBranchesBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteProtectedBranchesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteProtectedBranchesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


