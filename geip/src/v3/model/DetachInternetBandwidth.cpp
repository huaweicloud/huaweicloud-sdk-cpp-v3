

#include "huaweicloud/geip/v3/model/DetachInternetBandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DetachInternetBandwidth::DetachInternetBandwidth()
{
    globalEipSegmentId_ = "";
    globalEipSegmentIdIsSet_ = false;
}

DetachInternetBandwidth::~DetachInternetBandwidth() = default;

void DetachInternetBandwidth::validate()
{
}

web::json::value DetachInternetBandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment_id")] = ModelBase::toJson(globalEipSegmentId_);
    }

    return val;
}
bool DetachInternetBandwidth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_segment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegmentId(refVal);
        }
    }
    return ok;
}


std::string DetachInternetBandwidth::getGlobalEipSegmentId() const
{
    return globalEipSegmentId_;
}

void DetachInternetBandwidth::setGlobalEipSegmentId(const std::string& value)
{
    globalEipSegmentId_ = value;
    globalEipSegmentIdIsSet_ = true;
}

bool DetachInternetBandwidth::globalEipSegmentIdIsSet() const
{
    return globalEipSegmentIdIsSet_;
}

void DetachInternetBandwidth::unsetglobalEipSegmentId()
{
    globalEipSegmentIdIsSet_ = false;
}

}
}
}
}
}


