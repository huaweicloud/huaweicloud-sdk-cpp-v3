

#include "huaweicloud/codehub/v4/model/BatchUpdateRepositoryFilePushPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchUpdateRepositoryFilePushPermissionsRequest::BatchUpdateRepositoryFilePushPermissionsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateRepositoryFilePushPermissionsRequest::~BatchUpdateRepositoryFilePushPermissionsRequest() = default;

void BatchUpdateRepositoryFilePushPermissionsRequest::validate()
{
}

web::json::value BatchUpdateRepositoryFilePushPermissionsRequest::toJson() const
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
bool BatchUpdateRepositoryFilePushPermissionsRequest::fromJson(const web::json::value& val)
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
            BatchUpdateFilePushPermissionBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t BatchUpdateRepositoryFilePushPermissionsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void BatchUpdateRepositoryFilePushPermissionsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BatchUpdateRepositoryFilePushPermissionsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BatchUpdateRepositoryFilePushPermissionsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

BatchUpdateFilePushPermissionBodyDto BatchUpdateRepositoryFilePushPermissionsRequest::getBody() const
{
    return body_;
}

void BatchUpdateRepositoryFilePushPermissionsRequest::setBody(const BatchUpdateFilePushPermissionBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateRepositoryFilePushPermissionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateRepositoryFilePushPermissionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


