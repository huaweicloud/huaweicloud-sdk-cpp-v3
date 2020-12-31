

#include "huaweicloud/eip/model/BatchCreateBandwidthRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchCreateBandwidthRequestBody::BatchCreateBandwidthRequestBody()
{
    bandwidthIsSet_ = false;
}

BatchCreateBandwidthRequestBody::~BatchCreateBandwidthRequestBody() = default;

void BatchCreateBandwidthRequestBody::validate()
{
}

web::json::value BatchCreateBandwidthRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}

bool BatchCreateBandwidthRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            BatchCreateBandwidthOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


BatchCreateBandwidthOption BatchCreateBandwidthRequestBody::getBandwidth() const
{
    return bandwidth_;
}

void BatchCreateBandwidthRequestBody::setBandwidth(const BatchCreateBandwidthOption& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool BatchCreateBandwidthRequestBody::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void BatchCreateBandwidthRequestBody::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


