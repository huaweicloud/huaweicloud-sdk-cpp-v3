

#include "huaweicloud/kms/v2/model/DecryptDatakeyCapsuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDatakeyCapsuleResponse::DecryptDatakeyCapsuleResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    datakey_ = "";
    datakeyIsSet_ = false;
    datakeyCipher_ = "";
    datakeyCipherIsSet_ = false;
}

DecryptDatakeyCapsuleResponse::~DecryptDatakeyCapsuleResponse() = default;

void DecryptDatakeyCapsuleResponse::validate()
{
}

web::json::value DecryptDatakeyCapsuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(datakeyIsSet_) {
        val[utility::conversions::to_string_t("datakey")] = ModelBase::toJson(datakey_);
    }
    if(datakeyCipherIsSet_) {
        val[utility::conversions::to_string_t("datakey_cipher")] = ModelBase::toJson(datakeyCipher_);
    }

    return val;
}
bool DecryptDatakeyCapsuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datakey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datakey_cipher"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_cipher"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyCipher(refVal);
        }
    }
    return ok;
}


std::string DecryptDatakeyCapsuleResponse::getKeyId() const
{
    return keyId_;
}

void DecryptDatakeyCapsuleResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DecryptDatakeyCapsuleResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DecryptDatakeyCapsuleResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string DecryptDatakeyCapsuleResponse::getInstanceId() const
{
    return instanceId_;
}

void DecryptDatakeyCapsuleResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DecryptDatakeyCapsuleResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DecryptDatakeyCapsuleResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DecryptDatakeyCapsuleResponse::getDatakey() const
{
    return datakey_;
}

void DecryptDatakeyCapsuleResponse::setDatakey(const std::string& value)
{
    datakey_ = value;
    datakeyIsSet_ = true;
}

bool DecryptDatakeyCapsuleResponse::datakeyIsSet() const
{
    return datakeyIsSet_;
}

void DecryptDatakeyCapsuleResponse::unsetdatakey()
{
    datakeyIsSet_ = false;
}

std::string DecryptDatakeyCapsuleResponse::getDatakeyCipher() const
{
    return datakeyCipher_;
}

void DecryptDatakeyCapsuleResponse::setDatakeyCipher(const std::string& value)
{
    datakeyCipher_ = value;
    datakeyCipherIsSet_ = true;
}

bool DecryptDatakeyCapsuleResponse::datakeyCipherIsSet() const
{
    return datakeyCipherIsSet_;
}

void DecryptDatakeyCapsuleResponse::unsetdatakeyCipher()
{
    datakeyCipherIsSet_ = false;
}

}
}
}
}
}


