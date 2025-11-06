

#include "huaweicloud/codeartsrepo/v4/model/BatchCreateProtectedBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchCreateProtectedBranchRequest::BatchCreateProtectedBranchRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateProtectedBranchRequest::~BatchCreateProtectedBranchRequest() = default;

void BatchCreateProtectedBranchRequest::validate()
{
}

web::json::value BatchCreateProtectedBranchRequest::toJson() const
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
bool BatchCreateProtectedBranchRequest::fromJson(const web::json::value& val)
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
            RepositoryProtectedBranchBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t BatchCreateProtectedBranchRequest::getRepositoryId() const
{
    return repositoryId_;
}

void BatchCreateProtectedBranchRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BatchCreateProtectedBranchRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BatchCreateProtectedBranchRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

RepositoryProtectedBranchBodyDto BatchCreateProtectedBranchRequest::getBody() const
{
    return body_;
}

void BatchCreateProtectedBranchRequest::setBody(const RepositoryProtectedBranchBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateProtectedBranchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateProtectedBranchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


