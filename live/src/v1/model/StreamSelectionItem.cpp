

#include "huaweicloud/live/v1/model/StreamSelectionItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




StreamSelectionItem::StreamSelectionItem()
{
    key_ = "";
    keyIsSet_ = false;
    maxBandwidth_ = 0;
    maxBandwidthIsSet_ = false;
    minBandwidth_ = 0;
    minBandwidthIsSet_ = false;
}

StreamSelectionItem::~StreamSelectionItem() = default;

void StreamSelectionItem::validate()
{
}

web::json::value StreamSelectionItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(maxBandwidthIsSet_) {
        val[utility::conversions::to_string_t("max_bandwidth")] = ModelBase::toJson(maxBandwidth_);
    }
    if(minBandwidthIsSet_) {
        val[utility::conversions::to_string_t("min_bandwidth")] = ModelBase::toJson(minBandwidth_);
    }

    return val;
}
bool StreamSelectionItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinBandwidth(refVal);
        }
    }
    return ok;
}


std::string StreamSelectionItem::getKey() const
{
    return key_;
}

void StreamSelectionItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool StreamSelectionItem::keyIsSet() const
{
    return keyIsSet_;
}

void StreamSelectionItem::unsetkey()
{
    keyIsSet_ = false;
}

int32_t StreamSelectionItem::getMaxBandwidth() const
{
    return maxBandwidth_;
}

void StreamSelectionItem::setMaxBandwidth(int32_t value)
{
    maxBandwidth_ = value;
    maxBandwidthIsSet_ = true;
}

bool StreamSelectionItem::maxBandwidthIsSet() const
{
    return maxBandwidthIsSet_;
}

void StreamSelectionItem::unsetmaxBandwidth()
{
    maxBandwidthIsSet_ = false;
}

int32_t StreamSelectionItem::getMinBandwidth() const
{
    return minBandwidth_;
}

void StreamSelectionItem::setMinBandwidth(int32_t value)
{
    minBandwidth_ = value;
    minBandwidthIsSet_ = true;
}

bool StreamSelectionItem::minBandwidthIsSet() const
{
    return minBandwidthIsSet_;
}

void StreamSelectionItem::unsetminBandwidth()
{
    minBandwidthIsSet_ = false;
}

}
}
}
}
}


