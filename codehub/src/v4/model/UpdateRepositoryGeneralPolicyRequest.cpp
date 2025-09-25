

#include "huaweicloud/codehub/v4/model/UpdateRepositoryGeneralPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepositoryGeneralPolicyRequest::UpdateRepositoryGeneralPolicyRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryGeneralPolicyRequest::~UpdateRepositoryGeneralPolicyRequest() = default;

void UpdateRepositoryGeneralPolicyRequest::validate()
{
}

web::json::value UpdateRepositoryGeneralPolicyRequest::toJson() const
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
bool UpdateRepositoryGeneralPolicyRequest::fromJson(const web::json::value& val)
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
            GeneralPolicyBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateRepositoryGeneralPolicyRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryGeneralPolicyRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryGeneralPolicyRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

GeneralPolicyBodyDto UpdateRepositoryGeneralPolicyRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryGeneralPolicyRequest::setBody(const GeneralPolicyBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryGeneralPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


