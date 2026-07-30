

#include "huaweicloud/modelarts/v1/model/JobActionType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobActionType::JobActionType()
{
    actionType_ = "";
    actionTypeIsSet_ = false;
}

JobActionType::~JobActionType() = default;

void JobActionType::validate()
{
}

web::json::value JobActionType::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }

    return val;
}
bool JobActionType::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionType(refVal);
        }
    }
    return ok;
}


std::string JobActionType::getActionType() const
{
    return actionType_;
}

void JobActionType::setActionType(const std::string& value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool JobActionType::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void JobActionType::unsetactionType()
{
    actionTypeIsSet_ = false;
}

}
}
}
}
}


