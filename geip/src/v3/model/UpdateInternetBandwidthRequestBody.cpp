

#include "huaweicloud/geip/v3/model/UpdateInternetBandwidthRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateInternetBandwidthRequestBody::UpdateInternetBandwidthRequestBody()
{
    internetBandwidthIsSet_ = false;
}

UpdateInternetBandwidthRequestBody::~UpdateInternetBandwidthRequestBody() = default;

void UpdateInternetBandwidthRequestBody::validate()
{
}

web::json::value UpdateInternetBandwidthRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internetBandwidthIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth")] = ModelBase::toJson(internetBandwidth_);
    }

    return val;
}
bool UpdateInternetBandwidthRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth"));
        if(!fieldValue.is_null())
        {
            UpdateInternetBandwidthRequestBody_internet_bandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidth(refVal);
        }
    }
    return ok;
}


UpdateInternetBandwidthRequestBody_internet_bandwidth UpdateInternetBandwidthRequestBody::getInternetBandwidth() const
{
    return internetBandwidth_;
}

void UpdateInternetBandwidthRequestBody::setInternetBandwidth(const UpdateInternetBandwidthRequestBody_internet_bandwidth& value)
{
    internetBandwidth_ = value;
    internetBandwidthIsSet_ = true;
}

bool UpdateInternetBandwidthRequestBody::internetBandwidthIsSet() const
{
    return internetBandwidthIsSet_;
}

void UpdateInternetBandwidthRequestBody::unsetinternetBandwidth()
{
    internetBandwidthIsSet_ = false;
}

}
}
}
}
}


