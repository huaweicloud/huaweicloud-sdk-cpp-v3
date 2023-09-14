

#include "huaweicloud/csms/v1/model/CreateSecretVersionRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretVersionRequestBody::CreateSecretVersionRequestBody()
{
    secretBinary_ = "";
    secretBinaryIsSet_ = false;
    secretString_ = "";
    secretStringIsSet_ = false;
    versionStagesIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
}

CreateSecretVersionRequestBody::~CreateSecretVersionRequestBody() = default;

void CreateSecretVersionRequestBody::validate()
{
}

web::json::value CreateSecretVersionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretBinaryIsSet_) {
        val[utility::conversions::to_string_t("secret_binary")] = ModelBase::toJson(secretBinary_);
    }
    if(secretStringIsSet_) {
        val[utility::conversions::to_string_t("secret_string")] = ModelBase::toJson(secretString_);
    }
    if(versionStagesIsSet_) {
        val[utility::conversions::to_string_t("version_stages")] = ModelBase::toJson(versionStages_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }

    return val;
}

bool CreateSecretVersionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_binary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_binary"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretBinary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_stages"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionStages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    return ok;
}

std::string CreateSecretVersionRequestBody::getSecretBinary() const
{
    return secretBinary_;
}

void CreateSecretVersionRequestBody::setSecretBinary(const std::string& value)
{
    secretBinary_ = value;
    secretBinaryIsSet_ = true;
}

bool CreateSecretVersionRequestBody::secretBinaryIsSet() const
{
    return secretBinaryIsSet_;
}

void CreateSecretVersionRequestBody::unsetsecretBinary()
{
    secretBinaryIsSet_ = false;
}

std::string CreateSecretVersionRequestBody::getSecretString() const
{
    return secretString_;
}

void CreateSecretVersionRequestBody::setSecretString(const std::string& value)
{
    secretString_ = value;
    secretStringIsSet_ = true;
}

bool CreateSecretVersionRequestBody::secretStringIsSet() const
{
    return secretStringIsSet_;
}

void CreateSecretVersionRequestBody::unsetsecretString()
{
    secretStringIsSet_ = false;
}

std::vector<std::string>& CreateSecretVersionRequestBody::getVersionStages()
{
    return versionStages_;
}

void CreateSecretVersionRequestBody::setVersionStages(const std::vector<std::string>& value)
{
    versionStages_ = value;
    versionStagesIsSet_ = true;
}

bool CreateSecretVersionRequestBody::versionStagesIsSet() const
{
    return versionStagesIsSet_;
}

void CreateSecretVersionRequestBody::unsetversionStages()
{
    versionStagesIsSet_ = false;
}

int64_t CreateSecretVersionRequestBody::getExpireTime() const
{
    return expireTime_;
}

void CreateSecretVersionRequestBody::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool CreateSecretVersionRequestBody::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void CreateSecretVersionRequestBody::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}


