

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussChargeInfoListResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussChargeInfoListResponse::OpenGaussChargeInfoListResponse()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

OpenGaussChargeInfoListResponse::~OpenGaussChargeInfoListResponse() = default;

void OpenGaussChargeInfoListResponse::validate()
{
}

web::json::value OpenGaussChargeInfoListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }

    return val;
}

bool OpenGaussChargeInfoListResponse::fromJson(const web::json::value& val)
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

std::string OpenGaussChargeInfoListResponse::getChargeMode() const
{
    return chargeMode_;
}

void OpenGaussChargeInfoListResponse::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool OpenGaussChargeInfoListResponse::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void OpenGaussChargeInfoListResponse::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}


