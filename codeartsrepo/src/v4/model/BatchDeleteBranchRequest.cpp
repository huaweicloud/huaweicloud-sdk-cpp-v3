

#include "huaweicloud/codeartsrepo/v4/model/BatchDeleteBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchDeleteBranchRequest::BatchDeleteBranchRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteBranchRequest::~BatchDeleteBranchRequest() = default;

void BatchDeleteBranchRequest::validate()
{
}

web::json::value BatchDeleteBranchRequest::toJson() const
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
bool BatchDeleteBranchRequest::fromJson(const web::json::value& val)
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
            BatchDeleteBranchDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t BatchDeleteBranchRequest::getRepositoryId() const
{
    return repositoryId_;
}

void BatchDeleteBranchRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BatchDeleteBranchRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BatchDeleteBranchRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

BatchDeleteBranchDto BatchDeleteBranchRequest::getBody() const
{
    return body_;
}

void BatchDeleteBranchRequest::setBody(const BatchDeleteBranchDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteBranchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteBranchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


