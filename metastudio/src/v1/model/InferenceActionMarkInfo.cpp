

#include "huaweicloud/metastudio/v1/model/InferenceActionMarkInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InferenceActionMarkInfo::InferenceActionMarkInfo()
{
    actionInfoIsSet_ = false;
}

InferenceActionMarkInfo::~InferenceActionMarkInfo() = default;

void InferenceActionMarkInfo::validate()
{
}

web::json::value InferenceActionMarkInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionInfoIsSet_) {
        val[utility::conversions::to_string_t("action_info")] = ModelBase::toJson(actionInfo_);
    }

    return val;
}
bool InferenceActionMarkInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_info"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionMarkItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionInfo(refVal);
        }
    }
    return ok;
}


std::vector<ActionMarkItem>& InferenceActionMarkInfo::getActionInfo()
{
    return actionInfo_;
}

void InferenceActionMarkInfo::setActionInfo(const std::vector<ActionMarkItem>& value)
{
    actionInfo_ = value;
    actionInfoIsSet_ = true;
}

bool InferenceActionMarkInfo::actionInfoIsSet() const
{
    return actionInfoIsSet_;
}

void InferenceActionMarkInfo::unsetactionInfo()
{
    actionInfoIsSet_ = false;
}

}
}
}
}
}


