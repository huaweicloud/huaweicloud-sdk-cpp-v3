

#include "huaweicloud/meeting/v1/model/RestCustomMultiPictureBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestCustomMultiPictureBody::RestCustomMultiPictureBody()
{
    manualSet_ = 0;
    manualSetIsSet_ = false;
    picLayoutInfoIsSet_ = false;
    imageType_ = "";
    imageTypeIsSet_ = false;
    subscriberInPicsIsSet_ = false;
    switchTime_ = 0;
    switchTimeIsSet_ = false;
    multiPicSaveOnly_ = false;
    multiPicSaveOnlyIsSet_ = false;
}

RestCustomMultiPictureBody::~RestCustomMultiPictureBody() = default;

void RestCustomMultiPictureBody::validate()
{
}

web::json::value RestCustomMultiPictureBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(manualSetIsSet_) {
        val[utility::conversions::to_string_t("manualSet")] = ModelBase::toJson(manualSet_);
    }
    if(picLayoutInfoIsSet_) {
        val[utility::conversions::to_string_t("picLayoutInfo")] = ModelBase::toJson(picLayoutInfo_);
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
    if(multiPicSaveOnlyIsSet_) {
        val[utility::conversions::to_string_t("multiPicSaveOnly")] = ModelBase::toJson(multiPicSaveOnly_);
    }

    return val;
}
bool RestCustomMultiPictureBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("picLayoutInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picLayoutInfo"));
        if(!fieldValue.is_null())
        {
            PicLayoutInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicLayoutInfo(refVal);
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
            std::vector<RestSubscriberInPic> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("multiPicSaveOnly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiPicSaveOnly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiPicSaveOnly(refVal);
        }
    }
    return ok;
}


int32_t RestCustomMultiPictureBody::getManualSet() const
{
    return manualSet_;
}

void RestCustomMultiPictureBody::setManualSet(int32_t value)
{
    manualSet_ = value;
    manualSetIsSet_ = true;
}

bool RestCustomMultiPictureBody::manualSetIsSet() const
{
    return manualSetIsSet_;
}

void RestCustomMultiPictureBody::unsetmanualSet()
{
    manualSetIsSet_ = false;
}

PicLayoutInfo RestCustomMultiPictureBody::getPicLayoutInfo() const
{
    return picLayoutInfo_;
}

void RestCustomMultiPictureBody::setPicLayoutInfo(const PicLayoutInfo& value)
{
    picLayoutInfo_ = value;
    picLayoutInfoIsSet_ = true;
}

bool RestCustomMultiPictureBody::picLayoutInfoIsSet() const
{
    return picLayoutInfoIsSet_;
}

void RestCustomMultiPictureBody::unsetpicLayoutInfo()
{
    picLayoutInfoIsSet_ = false;
}

std::string RestCustomMultiPictureBody::getImageType() const
{
    return imageType_;
}

void RestCustomMultiPictureBody::setImageType(const std::string& value)
{
    imageType_ = value;
    imageTypeIsSet_ = true;
}

bool RestCustomMultiPictureBody::imageTypeIsSet() const
{
    return imageTypeIsSet_;
}

void RestCustomMultiPictureBody::unsetimageType()
{
    imageTypeIsSet_ = false;
}

std::vector<RestSubscriberInPic>& RestCustomMultiPictureBody::getSubscriberInPics()
{
    return subscriberInPics_;
}

void RestCustomMultiPictureBody::setSubscriberInPics(const std::vector<RestSubscriberInPic>& value)
{
    subscriberInPics_ = value;
    subscriberInPicsIsSet_ = true;
}

bool RestCustomMultiPictureBody::subscriberInPicsIsSet() const
{
    return subscriberInPicsIsSet_;
}

void RestCustomMultiPictureBody::unsetsubscriberInPics()
{
    subscriberInPicsIsSet_ = false;
}

int32_t RestCustomMultiPictureBody::getSwitchTime() const
{
    return switchTime_;
}

void RestCustomMultiPictureBody::setSwitchTime(int32_t value)
{
    switchTime_ = value;
    switchTimeIsSet_ = true;
}

bool RestCustomMultiPictureBody::switchTimeIsSet() const
{
    return switchTimeIsSet_;
}

void RestCustomMultiPictureBody::unsetswitchTime()
{
    switchTimeIsSet_ = false;
}

bool RestCustomMultiPictureBody::isMultiPicSaveOnly() const
{
    return multiPicSaveOnly_;
}

void RestCustomMultiPictureBody::setMultiPicSaveOnly(bool value)
{
    multiPicSaveOnly_ = value;
    multiPicSaveOnlyIsSet_ = true;
}

bool RestCustomMultiPictureBody::multiPicSaveOnlyIsSet() const
{
    return multiPicSaveOnlyIsSet_;
}

void RestCustomMultiPictureBody::unsetmultiPicSaveOnly()
{
    multiPicSaveOnlyIsSet_ = false;
}

}
}
}
}
}


