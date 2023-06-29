

#include "huaweicloud/mpc/v1/model/AudioTrack.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




AudioTrack::AudioTrack()
{
    type_ = 0;
    typeIsSet_ = false;
    left_ = 0;
    leftIsSet_ = false;
    right_ = 0;
    rightIsSet_ = false;
}

AudioTrack::~AudioTrack() = default;

void AudioTrack::validate()
{
}

web::json::value AudioTrack::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(leftIsSet_) {
        val[utility::conversions::to_string_t("left")] = ModelBase::toJson(left_);
    }
    if(rightIsSet_) {
        val[utility::conversions::to_string_t("right")] = ModelBase::toJson(right_);
    }

    return val;
}

bool AudioTrack::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("left"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("left"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeft(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("right"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("right"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRight(refVal);
        }
    }
    return ok;
}


int32_t AudioTrack::getType() const
{
    return type_;
}

void AudioTrack::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AudioTrack::typeIsSet() const
{
    return typeIsSet_;
}

void AudioTrack::unsettype()
{
    typeIsSet_ = false;
}

int32_t AudioTrack::getLeft() const
{
    return left_;
}

void AudioTrack::setLeft(int32_t value)
{
    left_ = value;
    leftIsSet_ = true;
}

bool AudioTrack::leftIsSet() const
{
    return leftIsSet_;
}

void AudioTrack::unsetleft()
{
    leftIsSet_ = false;
}

int32_t AudioTrack::getRight() const
{
    return right_;
}

void AudioTrack::setRight(int32_t value)
{
    right_ = value;
    rightIsSet_ = true;
}

bool AudioTrack::rightIsSet() const
{
    return rightIsSet_;
}

void AudioTrack::unsetright()
{
    rightIsSet_ = false;
}

}
}
}
}
}


