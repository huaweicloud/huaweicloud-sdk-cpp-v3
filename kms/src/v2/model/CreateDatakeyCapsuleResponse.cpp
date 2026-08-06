

#include "huaweicloud/kms/v2/model/CreateDatakeyCapsuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateDatakeyCapsuleResponse::CreateDatakeyCapsuleResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    datakey_ = "";
    datakeyIsSet_ = false;
    datakeyCipher_ = "";
    datakeyCipherIsSet_ = false;
    datakeyCapsule_ = "";
    datakeyCapsuleIsSet_ = false;
}

CreateDatakeyCapsuleResponse::~CreateDatakeyCapsuleResponse() = default;

void CreateDatakeyCapsuleResponse::validate()
{
}

web::json::value CreateDatakeyCapsuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(datakeyIsSet_) {
        val[utility::conversions::to_string_t("datakey")] = ModelBase::toJson(datakey_);
    }
    if(datakeyCipherIsSet_) {
        val[utility::conversions::to_string_t("datakey_cipher")] = ModelBase::toJson(datakeyCipher_);
    }
    if(datakeyCapsuleIsSet_) {
        val[utility::conversions::to_string_t("datakey_capsule")] = ModelBase::toJson(datakeyCapsule_);
    }

    return val;
}
bool CreateDatakeyCapsuleResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datakey_capsule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datakey_capsule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatakeyCapsule(refVal);
        }
    }
    return ok;
}


std::string CreateDatakeyCapsuleResponse::getKeyId() const
{
    return keyId_;
}

void CreateDatakeyCapsuleResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateDatakeyCapsuleResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateDatakeyCapsuleResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateDatakeyCapsuleResponse::getDatakey() const
{
    return datakey_;
}

void CreateDatakeyCapsuleResponse::setDatakey(const std::string& value)
{
    datakey_ = value;
    datakeyIsSet_ = true;
}

bool CreateDatakeyCapsuleResponse::datakeyIsSet() const
{
    return datakeyIsSet_;
}

void CreateDatakeyCapsuleResponse::unsetdatakey()
{
    datakeyIsSet_ = false;
}

std::string CreateDatakeyCapsuleResponse::getDatakeyCipher() const
{
    return datakeyCipher_;
}

void CreateDatakeyCapsuleResponse::setDatakeyCipher(const std::string& value)
{
    datakeyCipher_ = value;
    datakeyCipherIsSet_ = true;
}

bool CreateDatakeyCapsuleResponse::datakeyCipherIsSet() const
{
    return datakeyCipherIsSet_;
}

void CreateDatakeyCapsuleResponse::unsetdatakeyCipher()
{
    datakeyCipherIsSet_ = false;
}

std::string CreateDatakeyCapsuleResponse::getDatakeyCapsule() const
{
    return datakeyCapsule_;
}

void CreateDatakeyCapsuleResponse::setDatakeyCapsule(const std::string& value)
{
    datakeyCapsule_ = value;
    datakeyCapsuleIsSet_ = true;
}

bool CreateDatakeyCapsuleResponse::datakeyCapsuleIsSet() const
{
    return datakeyCapsuleIsSet_;
}

void CreateDatakeyCapsuleResponse::unsetdatakeyCapsule()
{
    datakeyCapsuleIsSet_ = false;
}

}
}
}
}
}


