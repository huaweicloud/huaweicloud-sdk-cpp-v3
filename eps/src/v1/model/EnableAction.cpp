

#include "huaweicloud/eps/v1/model/EnableAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




EnableAction::EnableAction()
{
    action_ = "";
    actionIsSet_ = false;
}

EnableAction::~EnableAction() = default;

void EnableAction::validate()
{
}

web::json::value EnableAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool EnableAction::fromJson(const web::json::value& val)
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


std::string EnableAction::getAction() const
{
    return action_;
}

void EnableAction::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool EnableAction::actionIsSet() const
{
    return actionIsSet_;
}

void EnableAction::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


