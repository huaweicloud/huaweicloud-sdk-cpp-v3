

#include "huaweicloud/kms/v2/model/VerifyMacResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




VerifyMacResponse::VerifyMacResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    macAlgorithm_ = "";
    macAlgorithmIsSet_ = false;
    macValid_ = false;
    macValidIsSet_ = false;
}

VerifyMacResponse::~VerifyMacResponse() = default;

void VerifyMacResponse::validate()
{
}

web::json::value VerifyMacResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(macAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("mac_algorithm")] = ModelBase::toJson(macAlgorithm_);
    }
    if(macValidIsSet_) {
        val[utility::conversions::to_string_t("mac_valid")] = ModelBase::toJson(macValid_);
    }

    return val;
}
bool VerifyMacResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mac_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMacValid(refVal);
        }
    }
    return ok;
}


std::string VerifyMacResponse::getKeyId() const
{
    return keyId_;
}

void VerifyMacResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool VerifyMacResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void VerifyMacResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string VerifyMacResponse::getMacAlgorithm() const
{
    return macAlgorithm_;
}

void VerifyMacResponse::setMacAlgorithm(const std::string& value)
{
    macAlgorithm_ = value;
    macAlgorithmIsSet_ = true;
}

bool VerifyMacResponse::macAlgorithmIsSet() const
{
    return macAlgorithmIsSet_;
}

void VerifyMacResponse::unsetmacAlgorithm()
{
    macAlgorithmIsSet_ = false;
}

bool VerifyMacResponse::isMacValid() const
{
    return macValid_;
}

void VerifyMacResponse::setMacValid(bool value)
{
    macValid_ = value;
    macValidIsSet_ = true;
}

bool VerifyMacResponse::macValidIsSet() const
{
    return macValidIsSet_;
}

void VerifyMacResponse::unsetmacValid()
{
    macValidIsSet_ = false;
}

}
}
}
}
}


