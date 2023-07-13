

#include "huaweicloud/eps/v1/model/DisableAction.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




DisableAction::DisableAction()
{
    action_ = "";
    actionIsSet_ = false;
}

DisableAction::~DisableAction() = default;

void DisableAction::validate()
{
}

web::json::value DisableAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}

bool DisableAction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}

std::string DisableAction::getAction() const
{
    return action_;
}

void DisableAction::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool DisableAction::actionIsSet() const
{
    return actionIsSet_;
}

void DisableAction::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


