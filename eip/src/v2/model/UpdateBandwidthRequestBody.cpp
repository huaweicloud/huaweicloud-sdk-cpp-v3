

#include "huaweicloud/eip/v2/model/UpdateBandwidthRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdateBandwidthRequestBody::UpdateBandwidthRequestBody()
{
    bandwidthIsSet_ = false;
}

UpdateBandwidthRequestBody::~UpdateBandwidthRequestBody() = default;

void UpdateBandwidthRequestBody::validate()
{
}

web::json::value UpdateBandwidthRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}
bool UpdateBandwidthRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            UpdateBandwidthOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


UpdateBandwidthOption UpdateBandwidthRequestBody::getBandwidth() const
{
    return bandwidth_;
}

void UpdateBandwidthRequestBody::setBandwidth(const UpdateBandwidthOption& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool UpdateBandwidthRequestBody::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void UpdateBandwidthRequestBody::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


