

#include "huaweicloud/kms/v2/model/CreatePinResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreatePinResponse::CreatePinResponse()
{
    pin_ = "";
    pinIsSet_ = false;
}

CreatePinResponse::~CreatePinResponse() = default;

void CreatePinResponse::validate()
{
}

web::json::value CreatePinResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pinIsSet_) {
        val[utility::conversions::to_string_t("pin")] = ModelBase::toJson(pin_);
    }

    return val;
}
bool CreatePinResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPin(refVal);
        }
    }
    return ok;
}


std::string CreatePinResponse::getPin() const
{
    return pin_;
}

void CreatePinResponse::setPin(const std::string& value)
{
    pin_ = value;
    pinIsSet_ = true;
}

bool CreatePinResponse::pinIsSet() const
{
    return pinIsSet_;
}

void CreatePinResponse::unsetpin()
{
    pinIsSet_ = false;
}

}
}
}
}
}


