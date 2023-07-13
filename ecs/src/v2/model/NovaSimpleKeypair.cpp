

#include "huaweicloud/ecs/v2/model/NovaSimpleKeypair.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaSimpleKeypair::NovaSimpleKeypair()
{
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

NovaSimpleKeypair::~NovaSimpleKeypair() = default;

void NovaSimpleKeypair::validate()
{
}

web::json::value NovaSimpleKeypair::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool NovaSimpleKeypair::fromJson(const web::json::value& val)
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

std::string NovaSimpleKeypair::getFingerprint() const
{
    return fingerprint_;
}

void NovaSimpleKeypair::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool NovaSimpleKeypair::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void NovaSimpleKeypair::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

std::string NovaSimpleKeypair::getName() const
{
    return name_;
}

void NovaSimpleKeypair::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaSimpleKeypair::nameIsSet() const
{
    return nameIsSet_;
}

void NovaSimpleKeypair::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaSimpleKeypair::getPublicKey() const
{
    return publicKey_;
}

void NovaSimpleKeypair::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool NovaSimpleKeypair::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void NovaSimpleKeypair::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

std::string NovaSimpleKeypair::getType() const
{
    return type_;
}

void NovaSimpleKeypair::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NovaSimpleKeypair::typeIsSet() const
{
    return typeIsSet_;
}

void NovaSimpleKeypair::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


