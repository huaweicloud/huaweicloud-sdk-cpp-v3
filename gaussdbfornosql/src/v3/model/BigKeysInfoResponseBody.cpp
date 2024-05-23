

#include "huaweicloud/gaussdbfornosql/v3/model/BigKeysInfoResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




BigKeysInfoResponseBody::BigKeysInfoResponseBody()
{
    dbId_ = 0;
    dbIdIsSet_ = false;
    keyType_ = "";
    keyTypeIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    keySize_ = 0;
    keySizeIsSet_ = false;
}

BigKeysInfoResponseBody::~BigKeysInfoResponseBody() = default;

void BigKeysInfoResponseBody::validate()
{
}

web::json::value BigKeysInfoResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(keyTypeIsSet_) {
        val[utility::conversions::to_string_t("key_type")] = ModelBase::toJson(keyType_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(keySizeIsSet_) {
        val[utility::conversions::to_string_t("key_size")] = ModelBase::toJson(keySize_);
    }

    return val;
}
bool BigKeysInfoResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySize(refVal);
        }
    }
    return ok;
}


int32_t BigKeysInfoResponseBody::getDbId() const
{
    return dbId_;
}

void BigKeysInfoResponseBody::setDbId(int32_t value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool BigKeysInfoResponseBody::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void BigKeysInfoResponseBody::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string BigKeysInfoResponseBody::getKeyType() const
{
    return keyType_;
}

void BigKeysInfoResponseBody::setKeyType(const std::string& value)
{
    keyType_ = value;
    keyTypeIsSet_ = true;
}

bool BigKeysInfoResponseBody::keyTypeIsSet() const
{
    return keyTypeIsSet_;
}

void BigKeysInfoResponseBody::unsetkeyType()
{
    keyTypeIsSet_ = false;
}

std::string BigKeysInfoResponseBody::getKeyName() const
{
    return keyName_;
}

void BigKeysInfoResponseBody::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool BigKeysInfoResponseBody::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void BigKeysInfoResponseBody::unsetkeyName()
{
    keyNameIsSet_ = false;
}

int32_t BigKeysInfoResponseBody::getKeySize() const
{
    return keySize_;
}

void BigKeysInfoResponseBody::setKeySize(int32_t value)
{
    keySize_ = value;
    keySizeIsSet_ = true;
}

bool BigKeysInfoResponseBody::keySizeIsSet() const
{
    return keySizeIsSet_;
}

void BigKeysInfoResponseBody::unsetkeySize()
{
    keySizeIsSet_ = false;
}

}
}
}
}
}


