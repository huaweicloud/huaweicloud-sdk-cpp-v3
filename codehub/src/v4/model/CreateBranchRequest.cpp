

#include "huaweicloud/codehub/v4/model/CreateBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateBranchRequest::CreateBranchRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateBranchRequest::~CreateBranchRequest() = default;

void CreateBranchRequest::validate()
{
}

web::json::value CreateBranchRequest::toJson() const
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
bool CreateBranchRequest::fromJson(const web::json::value& val)
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
            CreateBranchDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateBranchRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateBranchRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateBranchRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateBranchRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

CreateBranchDto CreateBranchRequest::getBody() const
{
    return body_;
}

void CreateBranchRequest::setBody(const CreateBranchDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBranchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBranchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


