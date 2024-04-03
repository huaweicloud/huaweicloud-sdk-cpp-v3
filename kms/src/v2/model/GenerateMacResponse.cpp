

#include "huaweicloud/kms/v2/model/GenerateMacResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




GenerateMacResponse::GenerateMacResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    macAlgorithm_ = "";
    macAlgorithmIsSet_ = false;
    mac_ = "";
    macIsSet_ = false;
}

GenerateMacResponse::~GenerateMacResponse() = default;

void GenerateMacResponse::validate()
{
}

web::json::value GenerateMacResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(macAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("mac_algorithm")] = ModelBase::toJson(macAlgorithm_);
    }
    if(macIsSet_) {
        val[utility::conversions::to_string_t("mac")] = ModelBase::toJson(mac_);
    }

    return val;
}
bool GenerateMacResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mac_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMacAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mac"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMac(refVal);
        }
    }
    return ok;
}


std::string GenerateMacResponse::getKeyId() const
{
    return keyId_;
}

void GenerateMacResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool GenerateMacResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void GenerateMacResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string GenerateMacResponse::getMacAlgorithm() const
{
    return macAlgorithm_;
}

void GenerateMacResponse::setMacAlgorithm(const std::string& value)
{
    macAlgorithm_ = value;
    macAlgorithmIsSet_ = true;
}

bool GenerateMacResponse::macAlgorithmIsSet() const
{
    return macAlgorithmIsSet_;
}

void GenerateMacResponse::unsetmacAlgorithm()
{
    macAlgorithmIsSet_ = false;
}

std::string GenerateMacResponse::getMac() const
{
    return mac_;
}

void GenerateMacResponse::setMac(const std::string& value)
{
    mac_ = value;
    macIsSet_ = true;
}

bool GenerateMacResponse::macIsSet() const
{
    return macIsSet_;
}

void GenerateMacResponse::unsetmac()
{
    macIsSet_ = false;
}

}
}
}
}
}


