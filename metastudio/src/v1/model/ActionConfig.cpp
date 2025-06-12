

#include "huaweicloud/metastudio/v1/model/ActionConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ActionConfig::ActionConfig()
{
    actionInterval_ = 0.0f;
    actionIntervalIsSet_ = false;
}

ActionConfig::~ActionConfig() = default;

void ActionConfig::validate()
{
}

web::json::value ActionConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIntervalIsSet_) {
        val[utility::conversions::to_string_t("action_interval")] = ModelBase::toJson(actionInterval_);
    }

    return val;
}
bool ActionConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_interval"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionInterval(refVal);
        }
    }
    return ok;
}


float ActionConfig::getActionInterval() const
{
    return actionInterval_;
}

void ActionConfig::setActionInterval(float value)
{
    actionInterval_ = value;
    actionIntervalIsSet_ = true;
}

bool ActionConfig::actionIntervalIsSet() const
{
    return actionIntervalIsSet_;
}

void ActionConfig::unsetactionInterval()
{
    actionIntervalIsSet_ = false;
}

}
}
}
}
}


