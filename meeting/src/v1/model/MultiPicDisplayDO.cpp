

#include "huaweicloud/meeting/v1/model/MultiPicDisplayDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




MultiPicDisplayDO::MultiPicDisplayDO()
{
    manualSet_ = 0;
    manualSetIsSet_ = false;
    imageType_ = "";
    imageTypeIsSet_ = false;
    subscriberInPicsIsSet_ = false;
    switchTime_ = 0;
    switchTimeIsSet_ = false;
    picLayoutInfoIsSet_ = false;
}

MultiPicDisplayDO::~MultiPicDisplayDO() = default;

void MultiPicDisplayDO::validate()
{
}

web::json::value MultiPicDisplayDO::toJson() const
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
    if(picLayoutInfoIsSet_) {
        val[utility::conversions::to_string_t("picLayoutInfo")] = ModelBase::toJson(picLayoutInfo_);
    }

    return val;
}
bool MultiPicDisplayDO::fromJson(const web::json::value& val)
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
            std::vector<PicInfoNotify> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("picLayoutInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picLayoutInfo"));
        if(!fieldValue.is_null())
        {
            PicLayoutInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicLayoutInfo(refVal);
        }
    }
    return ok;
}


int32_t MultiPicDisplayDO::getManualSet() const
{
    return manualSet_;
}

void MultiPicDisplayDO::setManualSet(int32_t value)
{
    manualSet_ = value;
    manualSetIsSet_ = true;
}

bool MultiPicDisplayDO::manualSetIsSet() const
{
    return manualSetIsSet_;
}

void MultiPicDisplayDO::unsetmanualSet()
{
    manualSetIsSet_ = false;
}

std::string MultiPicDisplayDO::getImageType() const
{
    return imageType_;
}

void MultiPicDisplayDO::setImageType(const std::string& value)
{
    imageType_ = value;
    imageTypeIsSet_ = true;
}

bool MultiPicDisplayDO::imageTypeIsSet() const
{
    return imageTypeIsSet_;
}

void MultiPicDisplayDO::unsetimageType()
{
    imageTypeIsSet_ = false;
}

std::vector<PicInfoNotify>& MultiPicDisplayDO::getSubscriberInPics()
{
    return subscriberInPics_;
}

void MultiPicDisplayDO::setSubscriberInPics(const std::vector<PicInfoNotify>& value)
{
    subscriberInPics_ = value;
    subscriberInPicsIsSet_ = true;
}

bool MultiPicDisplayDO::subscriberInPicsIsSet() const
{
    return subscriberInPicsIsSet_;
}

void MultiPicDisplayDO::unsetsubscriberInPics()
{
    subscriberInPicsIsSet_ = false;
}

int32_t MultiPicDisplayDO::getSwitchTime() const
{
    return switchTime_;
}

void MultiPicDisplayDO::setSwitchTime(int32_t value)
{
    switchTime_ = value;
    switchTimeIsSet_ = true;
}

bool MultiPicDisplayDO::switchTimeIsSet() const
{
    return switchTimeIsSet_;
}

void MultiPicDisplayDO::unsetswitchTime()
{
    switchTimeIsSet_ = false;
}

PicLayoutInfo MultiPicDisplayDO::getPicLayoutInfo() const
{
    return picLayoutInfo_;
}

void MultiPicDisplayDO::setPicLayoutInfo(const PicLayoutInfo& value)
{
    picLayoutInfo_ = value;
    picLayoutInfoIsSet_ = true;
}

bool MultiPicDisplayDO::picLayoutInfoIsSet() const
{
    return picLayoutInfoIsSet_;
}

void MultiPicDisplayDO::unsetpicLayoutInfo()
{
    picLayoutInfoIsSet_ = false;
}

}
}
}
}
}


