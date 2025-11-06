

#include "huaweicloud/codeartsrepo/v3/model/DeleteDeployKeyV2Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




DeleteDeployKeyV2Request::DeleteDeployKeyV2Request()
{
    keyId_ = 0;
    keyIdIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

DeleteDeployKeyV2Request::~DeleteDeployKeyV2Request() = default;

void DeleteDeployKeyV2Request::validate()
{
}

web::json::value DeleteDeployKeyV2Request::toJson() const
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
bool DeleteDeployKeyV2Request::fromJson(const web::json::value& val)
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


int32_t DeleteDeployKeyV2Request::getKeyId() const
{
    return keyId_;
}

void DeleteDeployKeyV2Request::setKeyId(int32_t value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DeleteDeployKeyV2Request::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DeleteDeployKeyV2Request::unsetkeyId()
{
    keyIdIsSet_ = false;
}

int32_t DeleteDeployKeyV2Request::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteDeployKeyV2Request::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteDeployKeyV2Request::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteDeployKeyV2Request::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


