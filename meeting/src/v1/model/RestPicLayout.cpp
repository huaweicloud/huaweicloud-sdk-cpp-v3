

#include "huaweicloud/meeting/v1/model/RestPicLayout.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestPicLayout::RestPicLayout()
{
    switchTime_ = 0;
    switchTimeIsSet_ = false;
    picNum_ = 0;
    picNumIsSet_ = false;
    layOutName_ = "";
    layOutNameIsSet_ = false;
    imageType_ = "";
    imageTypeIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    subscriberInPicsIsSet_ = false;
}

RestPicLayout::~RestPicLayout() = default;

void RestPicLayout::validate()
{
}

web::json::value RestPicLayout::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchTimeIsSet_) {
        val[utility::conversions::to_string_t("switchTime")] = ModelBase::toJson(switchTime_);
    }
    if(picNumIsSet_) {
        val[utility::conversions::to_string_t("picNum")] = ModelBase::toJson(picNum_);
    }
    if(layOutNameIsSet_) {
        val[utility::conversions::to_string_t("layOutName")] = ModelBase::toJson(layOutName_);
    }
    if(imageTypeIsSet_) {
        val[utility::conversions::to_string_t("imageType")] = ModelBase::toJson(imageType_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(subscriberInPicsIsSet_) {
        val[utility::conversions::to_string_t("subscriberInPics")] = ModelBase::toJson(subscriberInPics_);
    }

    return val;
}
bool RestPicLayout::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switchTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switchTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("picNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layOutName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layOutName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayOutName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriberInPics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriberInPics"));
        if(!fieldValue.is_null())
        {
            std::vector<PicInfoNotify> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriberInPics(refVal);
        }
    }
    return ok;
}


int32_t RestPicLayout::getSwitchTime() const
{
    return switchTime_;
}

void RestPicLayout::setSwitchTime(int32_t value)
{
    switchTime_ = value;
    switchTimeIsSet_ = true;
}

bool RestPicLayout::switchTimeIsSet() const
{
    return switchTimeIsSet_;
}

void RestPicLayout::unsetswitchTime()
{
    switchTimeIsSet_ = false;
}

int32_t RestPicLayout::getPicNum() const
{
    return picNum_;
}

void RestPicLayout::setPicNum(int32_t value)
{
    picNum_ = value;
    picNumIsSet_ = true;
}

bool RestPicLayout::picNumIsSet() const
{
    return picNumIsSet_;
}

void RestPicLayout::unsetpicNum()
{
    picNumIsSet_ = false;
}

std::string RestPicLayout::getLayOutName() const
{
    return layOutName_;
}

void RestPicLayout::setLayOutName(const std::string& value)
{
    layOutName_ = value;
    layOutNameIsSet_ = true;
}

bool RestPicLayout::layOutNameIsSet() const
{
    return layOutNameIsSet_;
}

void RestPicLayout::unsetlayOutName()
{
    layOutNameIsSet_ = false;
}

std::string RestPicLayout::getImageType() const
{
    return imageType_;
}

void RestPicLayout::setImageType(const std::string& value)
{
    imageType_ = value;
    imageTypeIsSet_ = true;
}

bool RestPicLayout::imageTypeIsSet() const
{
    return imageTypeIsSet_;
}

void RestPicLayout::unsetimageType()
{
    imageTypeIsSet_ = false;
}

std::string RestPicLayout::getUuid() const
{
    return uuid_;
}

void RestPicLayout::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool RestPicLayout::uuidIsSet() const
{
    return uuidIsSet_;
}

void RestPicLayout::unsetuuid()
{
    uuidIsSet_ = false;
}

std::vector<PicInfoNotify>& RestPicLayout::getSubscriberInPics()
{
    return subscriberInPics_;
}

void RestPicLayout::setSubscriberInPics(const std::vector<PicInfoNotify>& value)
{
    subscriberInPics_ = value;
    subscriberInPicsIsSet_ = true;
}

bool RestPicLayout::subscriberInPicsIsSet() const
{
    return subscriberInPicsIsSet_;
}

void RestPicLayout::unsetsubscriberInPics()
{
    subscriberInPicsIsSet_ = false;
}

}
}
}
}
}


