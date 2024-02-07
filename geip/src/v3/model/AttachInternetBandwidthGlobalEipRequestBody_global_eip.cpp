

#include "huaweicloud/geip/v3/model/AttachInternetBandwidthGlobalEipRequestBody_global_eip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AttachInternetBandwidthGlobalEipRequestBody_global_eip::AttachInternetBandwidthGlobalEipRequestBody_global_eip()
{
    internetBandwidthId_ = "";
    internetBandwidthIdIsSet_ = false;
}

AttachInternetBandwidthGlobalEipRequestBody_global_eip::~AttachInternetBandwidthGlobalEipRequestBody_global_eip() = default;

void AttachInternetBandwidthGlobalEipRequestBody_global_eip::validate()
{
}

web::json::value AttachInternetBandwidthGlobalEipRequestBody_global_eip::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internetBandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_id")] = ModelBase::toJson(internetBandwidthId_);
    }

    return val;
}
bool AttachInternetBandwidthGlobalEipRequestBody_global_eip::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthId(refVal);
        }
    }
    return ok;
}


std::string AttachInternetBandwidthGlobalEipRequestBody_global_eip::getInternetBandwidthId() const
{
    return internetBandwidthId_;
}

void AttachInternetBandwidthGlobalEipRequestBody_global_eip::setInternetBandwidthId(const std::string& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool AttachInternetBandwidthGlobalEipRequestBody_global_eip::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void AttachInternetBandwidthGlobalEipRequestBody_global_eip::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

}
}
}
}
}


