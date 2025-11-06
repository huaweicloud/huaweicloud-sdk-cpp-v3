

#include "huaweicloud/codeartsrepo/v3/model/PrivateKeyVerify.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




PrivateKeyVerify::PrivateKeyVerify()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
}

PrivateKeyVerify::~PrivateKeyVerify() = default;

void PrivateKeyVerify::validate()
{
}

web::json::value PrivateKeyVerify::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }

    return val;
}
bool PrivateKeyVerify::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKey(refVal);
        }
    }
    return ok;
}


std::string PrivateKeyVerify::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void PrivateKeyVerify::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool PrivateKeyVerify::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void PrivateKeyVerify::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

std::string PrivateKeyVerify::getPrivateKey() const
{
    return privateKey_;
}

void PrivateKeyVerify::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool PrivateKeyVerify::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void PrivateKeyVerify::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

}
}
}
}
}


