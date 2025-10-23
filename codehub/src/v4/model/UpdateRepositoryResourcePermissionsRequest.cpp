

#include "huaweicloud/codehub/v4/model/UpdateRepositoryResourcePermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepositoryResourcePermissionsRequest::UpdateRepositoryResourcePermissionsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryResourcePermissionsRequest::~UpdateRepositoryResourcePermissionsRequest() = default;

void UpdateRepositoryResourcePermissionsRequest::validate()
{
}

web::json::value UpdateRepositoryResourcePermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRepositoryResourcePermissionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatePermissionBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateRepositoryResourcePermissionsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryResourcePermissionsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryResourcePermissionsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryResourcePermissionsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string UpdateRepositoryResourcePermissionsRequest::getResourceName() const
{
    return resourceName_;
}

void UpdateRepositoryResourcePermissionsRequest::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool UpdateRepositoryResourcePermissionsRequest::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void UpdateRepositoryResourcePermissionsRequest::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

UpdatePermissionBodyDto UpdateRepositoryResourcePermissionsRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryResourcePermissionsRequest::setBody(const UpdatePermissionBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryResourcePermissionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryResourcePermissionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


