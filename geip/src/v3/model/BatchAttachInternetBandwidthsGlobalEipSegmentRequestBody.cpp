

#include "huaweicloud/geip/v3/model/BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody::BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody()
{
    globalEipSegmentsIsSet_ = false;
}

BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody::~BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody() = default;

void BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody::validate()
{
}

web::json::value BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentsIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segments")] = ModelBase::toJson(globalEipSegments_);
    }

    return val;
}
bool BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_segments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segments"));
        if(!fieldValue.is_null())
        {
            std::vector<AttachInternetBandwidth> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegments(refVal);
        }
    }
    return ok;
}


std::vector<AttachInternetBandwidth>& BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody::getGlobalEipSegments()
{
    return globalEipSegments_;
}

void BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody::setGlobalEipSegments(const std::vector<AttachInternetBandwidth>& value)
{
    globalEipSegments_ = value;
    globalEipSegmentsIsSet_ = true;
}

bool BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody::globalEipSegmentsIsSet() const
{
    return globalEipSegmentsIsSet_;
}

void BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody::unsetglobalEipSegments()
{
    globalEipSegmentsIsSet_ = false;
}

}
}
}
}
}


