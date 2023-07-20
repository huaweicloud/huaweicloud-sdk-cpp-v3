

#include "huaweicloud/gaussdbfornosql/v3/model/ActionBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ActionBody::ActionBody()
{
    action_ = "";
    actionIsSet_ = false;
}

ActionBody::~ActionBody() = default;

void ActionBody::validate()
{
}

web::json::value ActionBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}

bool ActionBody::fromJson(const web::json::value& val)
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

std::string ActionBody::getAction() const
{
    return action_;
}

void ActionBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ActionBody::actionIsSet() const
{
    return actionIsSet_;
}

void ActionBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


