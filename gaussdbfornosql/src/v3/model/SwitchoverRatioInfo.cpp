

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchoverRatioInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchoverRatioInfo::SwitchoverRatioInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    switchoverRatio_ = 0;
    switchoverRatioIsSet_ = false;
}

SwitchoverRatioInfo::~SwitchoverRatioInfo() = default;

void SwitchoverRatioInfo::validate()
{
}

web::json::value SwitchoverRatioInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(switchoverRatioIsSet_) {
        val[utility::conversions::to_string_t("switchover_ratio")] = ModelBase::toJson(switchoverRatio_);
    }

    return val;
}
bool SwitchoverRatioInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switchover_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switchover_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchoverRatio(refVal);
        }
    }
    return ok;
}


std::string SwitchoverRatioInfo::getInstanceId() const
{
    return instanceId_;
}

void SwitchoverRatioInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchoverRatioInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchoverRatioInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t SwitchoverRatioInfo::getSwitchoverRatio() const
{
    return switchoverRatio_;
}

void SwitchoverRatioInfo::setSwitchoverRatio(int32_t value)
{
    switchoverRatio_ = value;
    switchoverRatioIsSet_ = true;
}

bool SwitchoverRatioInfo::switchoverRatioIsSet() const
{
    return switchoverRatioIsSet_;
}

void SwitchoverRatioInfo::unsetswitchoverRatio()
{
    switchoverRatioIsSet_ = false;
}

}
}
}
}
}


