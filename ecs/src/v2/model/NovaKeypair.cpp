

#include "huaweicloud/ecs/v2/model/NovaKeypair.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaKeypair::NovaKeypair()
{
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

NovaKeypair::~NovaKeypair() = default;

void NovaKeypair::validate()
{
}

web::json::value NovaKeypair::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool NovaKeypair::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string NovaKeypair::getFingerprint() const
{
    return fingerprint_;
}

void NovaKeypair::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool NovaKeypair::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void NovaKeypair::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

std::string NovaKeypair::getName() const
{
    return name_;
}

void NovaKeypair::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaKeypair::nameIsSet() const
{
    return nameIsSet_;
}

void NovaKeypair::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaKeypair::getPublicKey() const
{
    return publicKey_;
}

void NovaKeypair::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool NovaKeypair::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void NovaKeypair::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

std::string NovaKeypair::getPrivateKey() const
{
    return privateKey_;
}

void NovaKeypair::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool NovaKeypair::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void NovaKeypair::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

std::string NovaKeypair::getUserId() const
{
    return userId_;
}

void NovaKeypair::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool NovaKeypair::userIdIsSet() const
{
    return userIdIsSet_;
}

void NovaKeypair::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string NovaKeypair::getType() const
{
    return type_;
}

void NovaKeypair::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NovaKeypair::typeIsSet() const
{
    return typeIsSet_;
}

void NovaKeypair::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


