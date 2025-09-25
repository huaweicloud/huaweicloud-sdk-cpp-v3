

#include "huaweicloud/codehub/v4/model/BatchUpdateProtectedBranchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchUpdateProtectedBranchesRequest::BatchUpdateProtectedBranchesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateProtectedBranchesRequest::~BatchUpdateProtectedBranchesRequest() = default;

void BatchUpdateProtectedBranchesRequest::validate()
{
}

web::json::value BatchUpdateProtectedBranchesRequest::toJson() const
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
bool BatchUpdateProtectedBranchesRequest::fromJson(const web::json::value& val)
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
            BatchUpdateProtectedBranchesBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t BatchUpdateProtectedBranchesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void BatchUpdateProtectedBranchesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BatchUpdateProtectedBranchesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BatchUpdateProtectedBranchesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

BatchUpdateProtectedBranchesBodyDto BatchUpdateProtectedBranchesRequest::getBody() const
{
    return body_;
}

void BatchUpdateProtectedBranchesRequest::setBody(const BatchUpdateProtectedBranchesBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateProtectedBranchesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateProtectedBranchesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


