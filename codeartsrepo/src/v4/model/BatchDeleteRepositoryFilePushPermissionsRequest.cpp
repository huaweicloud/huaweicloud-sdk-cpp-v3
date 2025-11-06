

#include "huaweicloud/codeartsrepo/v4/model/BatchDeleteRepositoryFilePushPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchDeleteRepositoryFilePushPermissionsRequest::BatchDeleteRepositoryFilePushPermissionsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteRepositoryFilePushPermissionsRequest::~BatchDeleteRepositoryFilePushPermissionsRequest() = default;

void BatchDeleteRepositoryFilePushPermissionsRequest::validate()
{
}

web::json::value BatchDeleteRepositoryFilePushPermissionsRequest::toJson() const
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
bool BatchDeleteRepositoryFilePushPermissionsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteFilePushPermissionDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t BatchDeleteRepositoryFilePushPermissionsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void BatchDeleteRepositoryFilePushPermissionsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BatchDeleteRepositoryFilePushPermissionsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BatchDeleteRepositoryFilePushPermissionsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

BatchDeleteFilePushPermissionDto BatchDeleteRepositoryFilePushPermissionsRequest::getBody() const
{
    return body_;
}

void BatchDeleteRepositoryFilePushPermissionsRequest::setBody(const BatchDeleteFilePushPermissionDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteRepositoryFilePushPermissionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteRepositoryFilePushPermissionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


