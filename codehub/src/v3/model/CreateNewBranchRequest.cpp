

#include "huaweicloud/codehub/v3/model/CreateNewBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CreateNewBranchRequest::CreateNewBranchRequest()
{
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateNewBranchRequest::~CreateNewBranchRequest() = default;

void CreateNewBranchRequest::validate()
{
}

web::json::value CreateNewBranchRequest::toJson() const
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
bool CreateNewBranchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateNewBranchRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateNewBranchRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateNewBranchRequest::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateNewBranchRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateNewBranchRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

CreateNewBranchRequestBody CreateNewBranchRequest::getBody() const
{
    return body_;
}

void CreateNewBranchRequest::setBody(const CreateNewBranchRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNewBranchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNewBranchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


