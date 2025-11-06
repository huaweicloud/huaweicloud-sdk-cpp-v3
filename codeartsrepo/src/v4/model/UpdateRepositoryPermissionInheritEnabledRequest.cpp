

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryPermissionInheritEnabledRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryPermissionInheritEnabledRequest::UpdateRepositoryPermissionInheritEnabledRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryPermissionInheritEnabledRequest::~UpdateRepositoryPermissionInheritEnabledRequest() = default;

void UpdateRepositoryPermissionInheritEnabledRequest::validate()
{
}

web::json::value UpdateRepositoryPermissionInheritEnabledRequest::toJson() const
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
bool UpdateRepositoryPermissionInheritEnabledRequest::fromJson(const web::json::value& val)
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
            PermissionInheritEnabledDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateRepositoryPermissionInheritEnabledRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryPermissionInheritEnabledRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryPermissionInheritEnabledRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryPermissionInheritEnabledRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

PermissionInheritEnabledDto UpdateRepositoryPermissionInheritEnabledRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryPermissionInheritEnabledRequest::setBody(const PermissionInheritEnabledDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryPermissionInheritEnabledRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryPermissionInheritEnabledRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


