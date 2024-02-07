

#include "huaweicloud/geip/v3/model/BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody::BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody()
{
    globalEipSegmentsIsSet_ = false;
}

BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody::~BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody() = default;

void BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody::validate()
{
}

web::json::value BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentsIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segments")] = ModelBase::toJson(globalEipSegments_);
    }

    return val;
}
bool BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_segments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segments"));
        if(!fieldValue.is_null())
        {
            std::vector<DetachInternetBandwidth> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegments(refVal);
        }
    }
    return ok;
}


std::vector<DetachInternetBandwidth>& BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody::getGlobalEipSegments()
{
    return globalEipSegments_;
}

void BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody::setGlobalEipSegments(const std::vector<DetachInternetBandwidth>& value)
{
    globalEipSegments_ = value;
    globalEipSegmentsIsSet_ = true;
}

bool BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody::globalEipSegmentsIsSet() const
{
    return globalEipSegmentsIsSet_;
}

void BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody::unsetglobalEipSegments()
{
    globalEipSegmentsIsSet_ = false;
}

}
}
}
}
}


