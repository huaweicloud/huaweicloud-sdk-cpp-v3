

#include "huaweicloud/kms/v2/model/CreatePinRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreatePinRequestBody::CreatePinRequestBody()
{
    pinType_ = "";
    pinTypeIsSet_ = false;
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
}

CreatePinRequestBody::~CreatePinRequestBody() = default;

void CreatePinRequestBody::validate()
{
}

web::json::value CreatePinRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pinTypeIsSet_) {
        val[utility::conversions::to_string_t("pin_type")] = ModelBase::toJson(pinType_);
    }
    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }

    return val;
}
bool CreatePinRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pin_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pin_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPinType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    return ok;
}


std::string CreatePinRequestBody::getPinType() const
{
    return pinType_;
}

void CreatePinRequestBody::setPinType(const std::string& value)
{
    pinType_ = value;
    pinTypeIsSet_ = true;
}

bool CreatePinRequestBody::pinTypeIsSet() const
{
    return pinTypeIsSet_;
}

void CreatePinRequestBody::unsetpinType()
{
    pinTypeIsSet_ = false;
}

std::string CreatePinRequestBody::getKeystoreId() const
{
    return keystoreId_;
}

void CreatePinRequestBody::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool CreatePinRequestBody::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void CreatePinRequestBody::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

}
}
}
}
}


