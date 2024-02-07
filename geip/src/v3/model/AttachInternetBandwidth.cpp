

#include "huaweicloud/geip/v3/model/AttachInternetBandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AttachInternetBandwidth::AttachInternetBandwidth()
{
    globalEipSegmentId_ = "";
    globalEipSegmentIdIsSet_ = false;
    internetBandwidthId_ = "";
    internetBandwidthIdIsSet_ = false;
}

AttachInternetBandwidth::~AttachInternetBandwidth() = default;

void AttachInternetBandwidth::validate()
{
}

web::json::value AttachInternetBandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment_id")] = ModelBase::toJson(globalEipSegmentId_);
    }
    if(internetBandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_id")] = ModelBase::toJson(internetBandwidthId_);
    }

    return val;
}
bool AttachInternetBandwidth::fromJson(const web::json::value& val)
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


std::string AttachInternetBandwidth::getGlobalEipSegmentId() const
{
    return globalEipSegmentId_;
}

void AttachInternetBandwidth::setGlobalEipSegmentId(const std::string& value)
{
    globalEipSegmentId_ = value;
    globalEipSegmentIdIsSet_ = true;
}

bool AttachInternetBandwidth::globalEipSegmentIdIsSet() const
{
    return globalEipSegmentIdIsSet_;
}

void AttachInternetBandwidth::unsetglobalEipSegmentId()
{
    globalEipSegmentIdIsSet_ = false;
}

std::string AttachInternetBandwidth::getInternetBandwidthId() const
{
    return internetBandwidthId_;
}

void AttachInternetBandwidth::setInternetBandwidthId(const std::string& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool AttachInternetBandwidth::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void AttachInternetBandwidth::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

}
}
}
}
}


