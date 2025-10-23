

#include "huaweicloud/codehub/v4/model/RemoveDeployKeyFromSubmodulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RemoveDeployKeyFromSubmodulesRequest::RemoveDeployKeyFromSubmodulesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    keyId_ = 0;
    keyIdIsSet_ = false;
}

RemoveDeployKeyFromSubmodulesRequest::~RemoveDeployKeyFromSubmodulesRequest() = default;

void RemoveDeployKeyFromSubmodulesRequest::validate()
{
}

web::json::value RemoveDeployKeyFromSubmodulesRequest::toJson() const
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
bool RemoveDeployKeyFromSubmodulesRequest::fromJson(const web::json::value& val)
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


int32_t RemoveDeployKeyFromSubmodulesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void RemoveDeployKeyFromSubmodulesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool RemoveDeployKeyFromSubmodulesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void RemoveDeployKeyFromSubmodulesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t RemoveDeployKeyFromSubmodulesRequest::getKeyId() const
{
    return keyId_;
}

void RemoveDeployKeyFromSubmodulesRequest::setKeyId(int32_t value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool RemoveDeployKeyFromSubmodulesRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void RemoveDeployKeyFromSubmodulesRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


