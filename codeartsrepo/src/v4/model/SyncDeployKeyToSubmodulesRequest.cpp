

#include "huaweicloud/codeartsrepo/v4/model/SyncDeployKeyToSubmodulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




SyncDeployKeyToSubmodulesRequest::SyncDeployKeyToSubmodulesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    keyId_ = 0;
    keyIdIsSet_ = false;
}

SyncDeployKeyToSubmodulesRequest::~SyncDeployKeyToSubmodulesRequest() = default;

void SyncDeployKeyToSubmodulesRequest::validate()
{
}

web::json::value SyncDeployKeyToSubmodulesRequest::toJson() const
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
bool SyncDeployKeyToSubmodulesRequest::fromJson(const web::json::value& val)
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


int32_t SyncDeployKeyToSubmodulesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void SyncDeployKeyToSubmodulesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool SyncDeployKeyToSubmodulesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void SyncDeployKeyToSubmodulesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t SyncDeployKeyToSubmodulesRequest::getKeyId() const
{
    return keyId_;
}

void SyncDeployKeyToSubmodulesRequest::setKeyId(int32_t value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool SyncDeployKeyToSubmodulesRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void SyncDeployKeyToSubmodulesRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


