

#include "huaweicloud/live/v1/model/ManifestSelection.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ManifestSelection::ManifestSelection()
{
    streamOrder_ = "";
    streamOrderIsSet_ = false;
    minVideoBandwidth_ = 0;
    minVideoBandwidthIsSet_ = false;
    maxVideoBandwidth_ = 0;
    maxVideoBandwidthIsSet_ = false;
}

ManifestSelection::~ManifestSelection() = default;

void ManifestSelection::validate()
{
}

web::json::value ManifestSelection::toJson() const
{
    web::json::value val = web::json::value::object();

    if(streamOrderIsSet_) {
        val[utility::conversions::to_string_t("stream_order")] = ModelBase::toJson(streamOrder_);
    }
    if(minVideoBandwidthIsSet_) {
        val[utility::conversions::to_string_t("min_video_bandwidth")] = ModelBase::toJson(minVideoBandwidth_);
    }
    if(maxVideoBandwidthIsSet_) {
        val[utility::conversions::to_string_t("max_video_bandwidth")] = ModelBase::toJson(maxVideoBandwidth_);
    }

    return val;
}
bool ManifestSelection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("stream_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_video_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_video_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVideoBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_video_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_video_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxVideoBandwidth(refVal);
        }
    }
    return ok;
}


std::string ManifestSelection::getStreamOrder() const
{
    return streamOrder_;
}

void ManifestSelection::setStreamOrder(const std::string& value)
{
    streamOrder_ = value;
    streamOrderIsSet_ = true;
}

bool ManifestSelection::streamOrderIsSet() const
{
    return streamOrderIsSet_;
}

void ManifestSelection::unsetstreamOrder()
{
    streamOrderIsSet_ = false;
}

int32_t ManifestSelection::getMinVideoBandwidth() const
{
    return minVideoBandwidth_;
}

void ManifestSelection::setMinVideoBandwidth(int32_t value)
{
    minVideoBandwidth_ = value;
    minVideoBandwidthIsSet_ = true;
}

bool ManifestSelection::minVideoBandwidthIsSet() const
{
    return minVideoBandwidthIsSet_;
}

void ManifestSelection::unsetminVideoBandwidth()
{
    minVideoBandwidthIsSet_ = false;
}

int32_t ManifestSelection::getMaxVideoBandwidth() const
{
    return maxVideoBandwidth_;
}

void ManifestSelection::setMaxVideoBandwidth(int32_t value)
{
    maxVideoBandwidth_ = value;
    maxVideoBandwidthIsSet_ = true;
}

bool ManifestSelection::maxVideoBandwidthIsSet() const
{
    return maxVideoBandwidthIsSet_;
}

void ManifestSelection::unsetmaxVideoBandwidth()
{
    maxVideoBandwidthIsSet_ = false;
}

}
}
}
}
}


