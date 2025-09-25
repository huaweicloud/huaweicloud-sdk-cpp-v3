

#include "huaweicloud/codehub/v4/model/CreateFilePushPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateFilePushPermissionRequest::CreateFilePushPermissionRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateFilePushPermissionRequest::~CreateFilePushPermissionRequest() = default;

void CreateFilePushPermissionRequest::validate()
{
}

web::json::value CreateFilePushPermissionRequest::toJson() const
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
bool CreateFilePushPermissionRequest::fromJson(const web::json::value& val)
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
            CreateRepositoryFilePushPermissionDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateFilePushPermissionRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateFilePushPermissionRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateFilePushPermissionRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateFilePushPermissionRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

CreateRepositoryFilePushPermissionDto CreateFilePushPermissionRequest::getBody() const
{
    return body_;
}

void CreateFilePushPermissionRequest::setBody(const CreateRepositoryFilePushPermissionDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFilePushPermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFilePushPermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


