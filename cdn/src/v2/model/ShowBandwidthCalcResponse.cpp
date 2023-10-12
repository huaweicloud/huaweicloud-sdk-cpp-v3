

#include "huaweicloud/cdn/v2/model/ShowBandwidthCalcResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowBandwidthCalcResponse::ShowBandwidthCalcResponse()
{
    bandwidthCalcIsSet_ = false;
}

ShowBandwidthCalcResponse::~ShowBandwidthCalcResponse() = default;

void ShowBandwidthCalcResponse::validate()
{
}

web::json::value ShowBandwidthCalcResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthCalcIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_calc")] = ModelBase::toJson(bandwidthCalc_);
    }

    return val;
}
bool ShowBandwidthCalcResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_calc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_calc"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthCalc(refVal);
        }
    }
    return ok;
}


std::map<std::string, Object>& ShowBandwidthCalcResponse::getBandwidthCalc()
{
    return bandwidthCalc_;
}

void ShowBandwidthCalcResponse::setBandwidthCalc(const std::map<std::string, Object>& value)
{
    bandwidthCalc_ = value;
    bandwidthCalcIsSet_ = true;
}

bool ShowBandwidthCalcResponse::bandwidthCalcIsSet() const
{
    return bandwidthCalcIsSet_;
}

void ShowBandwidthCalcResponse::unsetbandwidthCalc()
{
    bandwidthCalcIsSet_ = false;
}

}
}
}
}
}


