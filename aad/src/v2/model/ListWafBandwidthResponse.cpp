

#include "huaweicloud/aad/v2/model/ListWafBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafBandwidthResponse::ListWafBandwidthResponse()
{
    curveIsSet_ = false;
}

ListWafBandwidthResponse::~ListWafBandwidthResponse() = default;

void ListWafBandwidthResponse::validate()
{
}

web::json::value ListWafBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(curveIsSet_) {
        val[utility::conversions::to_string_t("curve")] = ModelBase::toJson(curve_);
    }

    return val;
}
bool ListWafBandwidthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("curve"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("curve"));
        if(!fieldValue.is_null())
        {
            std::vector<Curve> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurve(refVal);
        }
    }
    return ok;
}


std::vector<Curve>& ListWafBandwidthResponse::getCurve()
{
    return curve_;
}

void ListWafBandwidthResponse::setCurve(const std::vector<Curve>& value)
{
    curve_ = value;
    curveIsSet_ = true;
}

bool ListWafBandwidthResponse::curveIsSet() const
{
    return curveIsSet_;
}

void ListWafBandwidthResponse::unsetcurve()
{
    curveIsSet_ = false;
}

}
}
}
}
}


