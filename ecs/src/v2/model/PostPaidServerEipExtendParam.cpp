

#include "huaweicloud/ecs/v2/model/PostPaidServerEipExtendParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerEipExtendParam::PostPaidServerEipExtendParam()
{
    chargingMode_ = "";
    chargingModeIsSet_ = false;
}

PostPaidServerEipExtendParam::~PostPaidServerEipExtendParam() = default;

void PostPaidServerEipExtendParam::validate()
{
}

web::json::value PostPaidServerEipExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("chargingMode")] = ModelBase::toJson(chargingMode_);
    }

    return val;
}

bool PostPaidServerEipExtendParam::fromJson(const web::json::value& val)
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

std::string PostPaidServerEipExtendParam::getChargingMode() const
{
    return chargingMode_;
}

void PostPaidServerEipExtendParam::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool PostPaidServerEipExtendParam::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void PostPaidServerEipExtendParam::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

}
}
}
}
}


