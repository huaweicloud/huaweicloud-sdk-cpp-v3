

#include "huaweicloud/codehub/v3/model/DeleteDeployKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




DeleteDeployKeyRequest::DeleteDeployKeyRequest()
{
    keyId_ = 0;
    keyIdIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

DeleteDeployKeyRequest::~DeleteDeployKeyRequest() = default;

void DeleteDeployKeyRequest::validate()
{
}

web::json::value DeleteDeployKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool DeleteDeployKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    return ok;
}


int32_t DeleteDeployKeyRequest::getKeyId() const
{
    return keyId_;
}

void DeleteDeployKeyRequest::setKeyId(int32_t value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DeleteDeployKeyRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DeleteDeployKeyRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

int32_t DeleteDeployKeyRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteDeployKeyRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteDeployKeyRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteDeployKeyRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


