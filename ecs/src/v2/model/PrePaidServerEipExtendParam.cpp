

#include "huaweicloud/ecs/v2/model/PrePaidServerEipExtendParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerEipExtendParam::PrePaidServerEipExtendParam()
{
    chargingMode_ = "";
    chargingModeIsSet_ = false;
}

PrePaidServerEipExtendParam::~PrePaidServerEipExtendParam() = default;

void PrePaidServerEipExtendParam::validate()
{
}

web::json::value PrePaidServerEipExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("chargingMode")] = ModelBase::toJson(chargingMode_);
    }

    return val;
}

bool PrePaidServerEipExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("chargingMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chargingMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    return ok;
}

std::string PrePaidServerEipExtendParam::getChargingMode() const
{
    return chargingMode_;
}

void PrePaidServerEipExtendParam::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool PrePaidServerEipExtendParam::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void PrePaidServerEipExtendParam::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

}
}
}
}
}


