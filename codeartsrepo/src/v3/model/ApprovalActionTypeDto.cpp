

#include "huaweicloud/codeartsrepo/v3/model/ApprovalActionTypeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ApprovalActionTypeDto::ApprovalActionTypeDto()
{
    actionType_ = "";
    actionTypeIsSet_ = false;
}

ApprovalActionTypeDto::~ApprovalActionTypeDto() = default;

void ApprovalActionTypeDto::validate()
{
}

web::json::value ApprovalActionTypeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }

    return val;
}
bool ApprovalActionTypeDto::fromJson(const web::json::value& val)
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


std::string ApprovalActionTypeDto::getActionType() const
{
    return actionType_;
}

void ApprovalActionTypeDto::setActionType(const std::string& value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool ApprovalActionTypeDto::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void ApprovalActionTypeDto::unsetactionType()
{
    actionTypeIsSet_ = false;
}

}
}
}
}
}


