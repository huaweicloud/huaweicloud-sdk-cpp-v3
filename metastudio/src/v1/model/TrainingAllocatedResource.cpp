

#include "huaweicloud/metastudio/v1/model/TrainingAllocatedResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TrainingAllocatedResource::TrainingAllocatedResource()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
}

TrainingAllocatedResource::~TrainingAllocatedResource() = default;

void TrainingAllocatedResource::validate()
{
}

web::json::value TrainingAllocatedResource::toJson() const
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
bool TrainingAllocatedResource::fromJson(const web::json::value& val)
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
            std::string refVal;
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


std::string TrainingAllocatedResource::getResourceId() const
{
    return resourceId_;
}

void TrainingAllocatedResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool TrainingAllocatedResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void TrainingAllocatedResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string TrainingAllocatedResource::getChargeMode() const
{
    return chargeMode_;
}

void TrainingAllocatedResource::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool TrainingAllocatedResource::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void TrainingAllocatedResource::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string TrainingAllocatedResource::getExpireTime() const
{
    return expireTime_;
}

void TrainingAllocatedResource::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool TrainingAllocatedResource::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void TrainingAllocatedResource::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}


