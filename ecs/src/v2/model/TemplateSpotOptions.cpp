

#include "huaweicloud/ecs/v2/model/TemplateSpotOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateSpotOptions::TemplateSpotOptions()
{
    spotPrice_ = 0.0f;
    spotPriceIsSet_ = false;
    blockDurationMinutes_ = 0;
    blockDurationMinutesIsSet_ = false;
    instanceInterruptionBehavior_ = "";
    instanceInterruptionBehaviorIsSet_ = false;
}

TemplateSpotOptions::~TemplateSpotOptions() = default;

void TemplateSpotOptions::validate()
{
}

web::json::value TemplateSpotOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(spotPriceIsSet_) {
        val[utility::conversions::to_string_t("spot_price")] = ModelBase::toJson(spotPrice_);
    }
    if(blockDurationMinutesIsSet_) {
        val[utility::conversions::to_string_t("block_duration_minutes")] = ModelBase::toJson(blockDurationMinutes_);
    }
    if(instanceInterruptionBehaviorIsSet_) {
        val[utility::conversions::to_string_t("instance_interruption_behavior")] = ModelBase::toJson(instanceInterruptionBehavior_);
    }

    return val;
}
bool TemplateSpotOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spot_price"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spot_price"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpotPrice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_duration_minutes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_duration_minutes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockDurationMinutes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_interruption_behavior"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_interruption_behavior"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceInterruptionBehavior(refVal);
        }
    }
    return ok;
}


float TemplateSpotOptions::getSpotPrice() const
{
    return spotPrice_;
}

void TemplateSpotOptions::setSpotPrice(float value)
{
    spotPrice_ = value;
    spotPriceIsSet_ = true;
}

bool TemplateSpotOptions::spotPriceIsSet() const
{
    return spotPriceIsSet_;
}

void TemplateSpotOptions::unsetspotPrice()
{
    spotPriceIsSet_ = false;
}

int32_t TemplateSpotOptions::getBlockDurationMinutes() const
{
    return blockDurationMinutes_;
}

void TemplateSpotOptions::setBlockDurationMinutes(int32_t value)
{
    blockDurationMinutes_ = value;
    blockDurationMinutesIsSet_ = true;
}

bool TemplateSpotOptions::blockDurationMinutesIsSet() const
{
    return blockDurationMinutesIsSet_;
}

void TemplateSpotOptions::unsetblockDurationMinutes()
{
    blockDurationMinutesIsSet_ = false;
}

std::string TemplateSpotOptions::getInstanceInterruptionBehavior() const
{
    return instanceInterruptionBehavior_;
}

void TemplateSpotOptions::setInstanceInterruptionBehavior(const std::string& value)
{
    instanceInterruptionBehavior_ = value;
    instanceInterruptionBehaviorIsSet_ = true;
}

bool TemplateSpotOptions::instanceInterruptionBehaviorIsSet() const
{
    return instanceInterruptionBehaviorIsSet_;
}

void TemplateSpotOptions::unsetinstanceInterruptionBehavior()
{
    instanceInterruptionBehaviorIsSet_ = false;
}

}
}
}
}
}


