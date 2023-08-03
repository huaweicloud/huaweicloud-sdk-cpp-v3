

#include "huaweicloud/rds/v3/model/ChargeInfoResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChargeInfoResponse::ChargeInfoResponse()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

ChargeInfoResponse::~ChargeInfoResponse() = default;

void ChargeInfoResponse::validate()
{
}

web::json::value ChargeInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }

    return val;
}

bool ChargeInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    return ok;
}

std::string ChargeInfoResponse::getChargeMode() const
{
    return chargeMode_;
}

void ChargeInfoResponse::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ChargeInfoResponse::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ChargeInfoResponse::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}


