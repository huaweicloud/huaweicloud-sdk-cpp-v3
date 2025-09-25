

#include "huaweicloud/codehub/v4/model/UpdateRepositoryInheritSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepositoryInheritSettingRequest::UpdateRepositoryInheritSettingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryInheritSettingRequest::~UpdateRepositoryInheritSettingRequest() = default;

void UpdateRepositoryInheritSettingRequest::validate()
{
}

web::json::value UpdateRepositoryInheritSettingRequest::toJson() const
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
bool UpdateRepositoryInheritSettingRequest::fromJson(const web::json::value& val)
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
            RepositoryInheritSettingsBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateRepositoryInheritSettingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryInheritSettingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryInheritSettingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryInheritSettingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

RepositoryInheritSettingsBodyDto UpdateRepositoryInheritSettingRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryInheritSettingRequest::setBody(const RepositoryInheritSettingsBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryInheritSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryInheritSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


