

#include "huaweicloud/codehub/v4/model/UpdateBranchNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateBranchNameRequest::UpdateBranchNameRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBranchNameRequest::~UpdateBranchNameRequest() = default;

void UpdateBranchNameRequest::validate()
{
}

web::json::value UpdateBranchNameRequest::toJson() const
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
bool UpdateBranchNameRequest::fromJson(const web::json::value& val)
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
            UpdateBranchDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateBranchNameRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateBranchNameRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateBranchNameRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateBranchNameRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

UpdateBranchDto UpdateBranchNameRequest::getBody() const
{
    return body_;
}

void UpdateBranchNameRequest::setBody(const UpdateBranchDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBranchNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBranchNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


