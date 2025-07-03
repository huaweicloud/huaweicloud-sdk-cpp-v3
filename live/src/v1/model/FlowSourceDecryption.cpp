

#include "huaweicloud/live/v1/model/FlowSourceDecryption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




FlowSourceDecryption::FlowSourceDecryption()
{
    algorithm_ = "";
    algorithmIsSet_ = false;
    keyType_ = "";
    keyTypeIsSet_ = false;
    passphrase_ = "";
    passphraseIsSet_ = false;
}

FlowSourceDecryption::~FlowSourceDecryption() = default;

void FlowSourceDecryption::validate()
{
}

web::json::value FlowSourceDecryption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }
    if(keyTypeIsSet_) {
        val[utility::conversions::to_string_t("key_type")] = ModelBase::toJson(keyType_);
    }
    if(passphraseIsSet_) {
        val[utility::conversions::to_string_t("passphrase")] = ModelBase::toJson(passphrase_);
    }

    return val;
}
bool FlowSourceDecryption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("passphrase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passphrase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassphrase(refVal);
        }
    }
    return ok;
}


std::string FlowSourceDecryption::getAlgorithm() const
{
    return algorithm_;
}

void FlowSourceDecryption::setAlgorithm(const std::string& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool FlowSourceDecryption::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void FlowSourceDecryption::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

std::string FlowSourceDecryption::getKeyType() const
{
    return keyType_;
}

void FlowSourceDecryption::setKeyType(const std::string& value)
{
    keyType_ = value;
    keyTypeIsSet_ = true;
}

bool FlowSourceDecryption::keyTypeIsSet() const
{
    return keyTypeIsSet_;
}

void FlowSourceDecryption::unsetkeyType()
{
    keyTypeIsSet_ = false;
}

std::string FlowSourceDecryption::getPassphrase() const
{
    return passphrase_;
}

void FlowSourceDecryption::setPassphrase(const std::string& value)
{
    passphrase_ = value;
    passphraseIsSet_ = true;
}

bool FlowSourceDecryption::passphraseIsSet() const
{
    return passphraseIsSet_;
}

void FlowSourceDecryption::unsetpassphrase()
{
    passphraseIsSet_ = false;
}

}
}
}
}
}


