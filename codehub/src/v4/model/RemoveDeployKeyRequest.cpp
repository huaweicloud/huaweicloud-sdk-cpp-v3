

#include "huaweicloud/codehub/v4/model/RemoveDeployKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RemoveDeployKeyRequest::RemoveDeployKeyRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    keyId_ = 0;
    keyIdIsSet_ = false;
}

RemoveDeployKeyRequest::~RemoveDeployKeyRequest() = default;

void RemoveDeployKeyRequest::validate()
{
}

web::json::value RemoveDeployKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool RemoveDeployKeyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    return ok;
}


int32_t RemoveDeployKeyRequest::getRepositoryId() const
{
    return repositoryId_;
}

void RemoveDeployKeyRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool RemoveDeployKeyRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void RemoveDeployKeyRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t RemoveDeployKeyRequest::getKeyId() const
{
    return keyId_;
}

void RemoveDeployKeyRequest::setKeyId(int32_t value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool RemoveDeployKeyRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void RemoveDeployKeyRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


