

#include "huaweicloud/gaussdb/v3/model/ServerlessScalingPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ServerlessScalingPolicy::ServerlessScalingPolicy()
{
    enlargeStepSize_ = "";
    enlargeStepSizeIsSet_ = false;
    customScalingConfigIsSet_ = false;
}

ServerlessScalingPolicy::~ServerlessScalingPolicy() = default;

void ServerlessScalingPolicy::validate()
{
}

web::json::value ServerlessScalingPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enlargeStepSizeIsSet_) {
        val[utility::conversions::to_string_t("enlarge_step_size")] = ModelBase::toJson(enlargeStepSize_);
    }
    if(customScalingConfigIsSet_) {
        val[utility::conversions::to_string_t("custom_scaling_config")] = ModelBase::toJson(customScalingConfig_);
    }

    return val;
}
bool ServerlessScalingPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enlarge_step_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enlarge_step_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnlargeStepSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_scaling_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_scaling_config"));
        if(!fieldValue.is_null())
        {
            CustomScalingConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomScalingConfig(refVal);
        }
    }
    return ok;
}


std::string ServerlessScalingPolicy::getEnlargeStepSize() const
{
    return enlargeStepSize_;
}

void ServerlessScalingPolicy::setEnlargeStepSize(const std::string& value)
{
    enlargeStepSize_ = value;
    enlargeStepSizeIsSet_ = true;
}

bool ServerlessScalingPolicy::enlargeStepSizeIsSet() const
{
    return enlargeStepSizeIsSet_;
}

void ServerlessScalingPolicy::unsetenlargeStepSize()
{
    enlargeStepSizeIsSet_ = false;
}

CustomScalingConfig ServerlessScalingPolicy::getCustomScalingConfig() const
{
    return customScalingConfig_;
}

void ServerlessScalingPolicy::setCustomScalingConfig(const CustomScalingConfig& value)
{
    customScalingConfig_ = value;
    customScalingConfigIsSet_ = true;
}

bool ServerlessScalingPolicy::customScalingConfigIsSet() const
{
    return customScalingConfigIsSet_;
}

void ServerlessScalingPolicy::unsetcustomScalingConfig()
{
    customScalingConfigIsSet_ = false;
}

}
}
}
}
}


