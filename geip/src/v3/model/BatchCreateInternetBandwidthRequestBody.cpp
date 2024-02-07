

#include "huaweicloud/geip/v3/model/BatchCreateInternetBandwidthRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateInternetBandwidthRequestBody::BatchCreateInternetBandwidthRequestBody()
{
    internetBandwidthIsSet_ = false;
}

BatchCreateInternetBandwidthRequestBody::~BatchCreateInternetBandwidthRequestBody() = default;

void BatchCreateInternetBandwidthRequestBody::validate()
{
}

web::json::value BatchCreateInternetBandwidthRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internetBandwidthIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth")] = ModelBase::toJson(internetBandwidth_);
    }

    return val;
}
bool BatchCreateInternetBandwidthRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth"));
        if(!fieldValue.is_null())
        {
            BatchCreateInternetBandwidthRequestBody_internet_bandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidth(refVal);
        }
    }
    return ok;
}


BatchCreateInternetBandwidthRequestBody_internet_bandwidth BatchCreateInternetBandwidthRequestBody::getInternetBandwidth() const
{
    return internetBandwidth_;
}

void BatchCreateInternetBandwidthRequestBody::setInternetBandwidth(const BatchCreateInternetBandwidthRequestBody_internet_bandwidth& value)
{
    internetBandwidth_ = value;
    internetBandwidthIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody::internetBandwidthIsSet() const
{
    return internetBandwidthIsSet_;
}

void BatchCreateInternetBandwidthRequestBody::unsetinternetBandwidth()
{
    internetBandwidthIsSet_ = false;
}

}
}
}
}
}


