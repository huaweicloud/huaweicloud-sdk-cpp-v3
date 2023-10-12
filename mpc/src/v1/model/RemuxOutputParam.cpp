

#include "huaweicloud/mpc/v1/model/RemuxOutputParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




RemuxOutputParam::RemuxOutputParam()
{
    format_ = "";
    formatIsSet_ = false;
    segmentDuration_ = 0;
    segmentDurationIsSet_ = false;
    removeMeta_ = false;
    removeMetaIsSet_ = false;
}

RemuxOutputParam::~RemuxOutputParam() = default;

void RemuxOutputParam::validate()
{
}

web::json::value RemuxOutputParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(segmentDurationIsSet_) {
        val[utility::conversions::to_string_t("segment_duration")] = ModelBase::toJson(segmentDuration_);
    }
    if(removeMetaIsSet_) {
        val[utility::conversions::to_string_t("remove_meta")] = ModelBase::toJson(removeMeta_);
    }

    return val;
}
bool RemuxOutputParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segment_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segment_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remove_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remove_meta"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoveMeta(refVal);
        }
    }
    return ok;
}


std::string RemuxOutputParam::getFormat() const
{
    return format_;
}

void RemuxOutputParam::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool RemuxOutputParam::formatIsSet() const
{
    return formatIsSet_;
}

void RemuxOutputParam::unsetformat()
{
    formatIsSet_ = false;
}

int32_t RemuxOutputParam::getSegmentDuration() const
{
    return segmentDuration_;
}

void RemuxOutputParam::setSegmentDuration(int32_t value)
{
    segmentDuration_ = value;
    segmentDurationIsSet_ = true;
}

bool RemuxOutputParam::segmentDurationIsSet() const
{
    return segmentDurationIsSet_;
}

void RemuxOutputParam::unsetsegmentDuration()
{
    segmentDurationIsSet_ = false;
}

bool RemuxOutputParam::isRemoveMeta() const
{
    return removeMeta_;
}

void RemuxOutputParam::setRemoveMeta(bool value)
{
    removeMeta_ = value;
    removeMetaIsSet_ = true;
}

bool RemuxOutputParam::removeMetaIsSet() const
{
    return removeMetaIsSet_;
}

void RemuxOutputParam::unsetremoveMeta()
{
    removeMetaIsSet_ = false;
}

}
}
}
}
}


