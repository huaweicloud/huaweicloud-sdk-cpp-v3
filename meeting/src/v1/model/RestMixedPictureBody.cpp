

#include "huaweicloud/meeting/v1/model/RestMixedPictureBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestMixedPictureBody::RestMixedPictureBody()
{
    manualSet_ = 0;
    manualSetIsSet_ = false;
    imageType_ = "";
    imageTypeIsSet_ = false;
    subscriberInPicsIsSet_ = false;
    switchTime_ = 0;
    switchTimeIsSet_ = false;
}

RestMixedPictureBody::~RestMixedPictureBody() = default;

void RestMixedPictureBody::validate()
{
}

web::json::value RestMixedPictureBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(manualSetIsSet_) {
        val[utility::conversions::to_string_t("manualSet")] = ModelBase::toJson(manualSet_);
    }
    if(imageTypeIsSet_) {
        val[utility::conversions::to_string_t("imageType")] = ModelBase::toJson(imageType_);
    }
    if(subscriberInPicsIsSet_) {
        val[utility::conversions::to_string_t("subscriberInPics")] = ModelBase::toJson(subscriberInPics_);
    }
    if(switchTimeIsSet_) {
        val[utility::conversions::to_string_t("switchTime")] = ModelBase::toJson(switchTime_);
    }

    return val;
}
bool RestMixedPictureBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("manualSet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manualSet"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManualSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriberInPics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriberInPics"));
        if(!fieldValue.is_null())
        {
            std::vector<SubscriberInPic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriberInPics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switchTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switchTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchTime(refVal);
        }
    }
    return ok;
}


int32_t RestMixedPictureBody::getManualSet() const
{
    return manualSet_;
}

void RestMixedPictureBody::setManualSet(int32_t value)
{
    manualSet_ = value;
    manualSetIsSet_ = true;
}

bool RestMixedPictureBody::manualSetIsSet() const
{
    return manualSetIsSet_;
}

void RestMixedPictureBody::unsetmanualSet()
{
    manualSetIsSet_ = false;
}

std::string RestMixedPictureBody::getImageType() const
{
    return imageType_;
}

void RestMixedPictureBody::setImageType(const std::string& value)
{
    imageType_ = value;
    imageTypeIsSet_ = true;
}

bool RestMixedPictureBody::imageTypeIsSet() const
{
    return imageTypeIsSet_;
}

void RestMixedPictureBody::unsetimageType()
{
    imageTypeIsSet_ = false;
}

std::vector<SubscriberInPic>& RestMixedPictureBody::getSubscriberInPics()
{
    return subscriberInPics_;
}

void RestMixedPictureBody::setSubscriberInPics(const std::vector<SubscriberInPic>& value)
{
    subscriberInPics_ = value;
    subscriberInPicsIsSet_ = true;
}

bool RestMixedPictureBody::subscriberInPicsIsSet() const
{
    return subscriberInPicsIsSet_;
}

void RestMixedPictureBody::unsetsubscriberInPics()
{
    subscriberInPicsIsSet_ = false;
}

int32_t RestMixedPictureBody::getSwitchTime() const
{
    return switchTime_;
}

void RestMixedPictureBody::setSwitchTime(int32_t value)
{
    switchTime_ = value;
    switchTimeIsSet_ = true;
}

bool RestMixedPictureBody::switchTimeIsSet() const
{
    return switchTimeIsSet_;
}

void RestMixedPictureBody::unsetswitchTime()
{
    switchTimeIsSet_ = false;
}

}
}
}
}
}


