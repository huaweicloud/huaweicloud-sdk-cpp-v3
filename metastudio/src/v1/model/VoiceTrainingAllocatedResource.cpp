

#include "huaweicloud/metastudio/v1/model/VoiceTrainingAllocatedResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VoiceTrainingAllocatedResource::VoiceTrainingAllocatedResource()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    chargeModeIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
}

VoiceTrainingAllocatedResource::~VoiceTrainingAllocatedResource() = default;

void VoiceTrainingAllocatedResource::validate()
{
}

web::json::value VoiceTrainingAllocatedResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }

    return val;
}
bool VoiceTrainingAllocatedResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            ChardMode refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    return ok;
}


std::string VoiceTrainingAllocatedResource::getResourceId() const
{
    return resourceId_;
}

void VoiceTrainingAllocatedResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool VoiceTrainingAllocatedResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void VoiceTrainingAllocatedResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

ChardMode VoiceTrainingAllocatedResource::getChargeMode() const
{
    return chargeMode_;
}

void VoiceTrainingAllocatedResource::setChargeMode(const ChardMode& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool VoiceTrainingAllocatedResource::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void VoiceTrainingAllocatedResource::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string VoiceTrainingAllocatedResource::getExpireTime() const
{
    return expireTime_;
}

void VoiceTrainingAllocatedResource::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool VoiceTrainingAllocatedResource::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void VoiceTrainingAllocatedResource::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}


