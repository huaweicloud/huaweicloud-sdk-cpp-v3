

#include "huaweicloud/gaussdbforopengauss/v3/model/SearchAutoEnlargePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SearchAutoEnlargePolicyResponse::SearchAutoEnlargePolicyResponse()
{
    switchOption_ = false;
    switchOptionIsSet_ = false;
    limitVolumeSize_ = 0;
    limitVolumeSizeIsSet_ = false;
    minVolumeSize_ = 0;
    minVolumeSizeIsSet_ = false;
    maxVolumeSize_ = 0;
    maxVolumeSizeIsSet_ = false;
    triggerAvailablePercent_ = 0;
    triggerAvailablePercentIsSet_ = false;
    percentsIsSet_ = false;
}

SearchAutoEnlargePolicyResponse::~SearchAutoEnlargePolicyResponse() = default;

void SearchAutoEnlargePolicyResponse::validate()
{
}

web::json::value SearchAutoEnlargePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }
    if(limitVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("limit_volume_size")] = ModelBase::toJson(limitVolumeSize_);
    }
    if(minVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("min_volume_size")] = ModelBase::toJson(minVolumeSize_);
    }
    if(maxVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("max_volume_size")] = ModelBase::toJson(maxVolumeSize_);
    }
    if(triggerAvailablePercentIsSet_) {
        val[utility::conversions::to_string_t("trigger_available_percent")] = ModelBase::toJson(triggerAvailablePercent_);
    }
    if(percentsIsSet_) {
        val[utility::conversions::to_string_t("percents")] = ModelBase::toJson(percents_);
    }

    return val;
}
bool SearchAutoEnlargePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_option"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_available_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_available_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerAvailablePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percents"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercents(refVal);
        }
    }
    return ok;
}


bool SearchAutoEnlargePolicyResponse::isSwitchOption() const
{
    return switchOption_;
}

void SearchAutoEnlargePolicyResponse::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool SearchAutoEnlargePolicyResponse::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void SearchAutoEnlargePolicyResponse::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

int32_t SearchAutoEnlargePolicyResponse::getLimitVolumeSize() const
{
    return limitVolumeSize_;
}

void SearchAutoEnlargePolicyResponse::setLimitVolumeSize(int32_t value)
{
    limitVolumeSize_ = value;
    limitVolumeSizeIsSet_ = true;
}

bool SearchAutoEnlargePolicyResponse::limitVolumeSizeIsSet() const
{
    return limitVolumeSizeIsSet_;
}

void SearchAutoEnlargePolicyResponse::unsetlimitVolumeSize()
{
    limitVolumeSizeIsSet_ = false;
}

int32_t SearchAutoEnlargePolicyResponse::getMinVolumeSize() const
{
    return minVolumeSize_;
}

void SearchAutoEnlargePolicyResponse::setMinVolumeSize(int32_t value)
{
    minVolumeSize_ = value;
    minVolumeSizeIsSet_ = true;
}

bool SearchAutoEnlargePolicyResponse::minVolumeSizeIsSet() const
{
    return minVolumeSizeIsSet_;
}

void SearchAutoEnlargePolicyResponse::unsetminVolumeSize()
{
    minVolumeSizeIsSet_ = false;
}

int32_t SearchAutoEnlargePolicyResponse::getMaxVolumeSize() const
{
    return maxVolumeSize_;
}

void SearchAutoEnlargePolicyResponse::setMaxVolumeSize(int32_t value)
{
    maxVolumeSize_ = value;
    maxVolumeSizeIsSet_ = true;
}

bool SearchAutoEnlargePolicyResponse::maxVolumeSizeIsSet() const
{
    return maxVolumeSizeIsSet_;
}

void SearchAutoEnlargePolicyResponse::unsetmaxVolumeSize()
{
    maxVolumeSizeIsSet_ = false;
}

int32_t SearchAutoEnlargePolicyResponse::getTriggerAvailablePercent() const
{
    return triggerAvailablePercent_;
}

void SearchAutoEnlargePolicyResponse::setTriggerAvailablePercent(int32_t value)
{
    triggerAvailablePercent_ = value;
    triggerAvailablePercentIsSet_ = true;
}

bool SearchAutoEnlargePolicyResponse::triggerAvailablePercentIsSet() const
{
    return triggerAvailablePercentIsSet_;
}

void SearchAutoEnlargePolicyResponse::unsettriggerAvailablePercent()
{
    triggerAvailablePercentIsSet_ = false;
}

std::vector<int32_t>& SearchAutoEnlargePolicyResponse::getPercents()
{
    return percents_;
}

void SearchAutoEnlargePolicyResponse::setPercents(std::vector<int32_t> value)
{
    percents_ = value;
    percentsIsSet_ = true;
}

bool SearchAutoEnlargePolicyResponse::percentsIsSet() const
{
    return percentsIsSet_;
}

void SearchAutoEnlargePolicyResponse::unsetpercents()
{
    percentsIsSet_ = false;
}

}
}
}
}
}


