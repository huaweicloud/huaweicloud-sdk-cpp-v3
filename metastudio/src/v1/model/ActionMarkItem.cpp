

#include "huaweicloud/metastudio/v1/model/ActionMarkItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ActionMarkItem::ActionMarkItem()
{
    actionStartTime_ = "";
    actionStartTimeIsSet_ = false;
    actionEndTime_ = "";
    actionEndTimeIsSet_ = false;
    actionType_ = "";
    actionTypeIsSet_ = false;
}

ActionMarkItem::~ActionMarkItem() = default;

void ActionMarkItem::validate()
{
}

web::json::value ActionMarkItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionStartTimeIsSet_) {
        val[utility::conversions::to_string_t("action_start_time")] = ModelBase::toJson(actionStartTime_);
    }
    if(actionEndTimeIsSet_) {
        val[utility::conversions::to_string_t("action_end_time")] = ModelBase::toJson(actionEndTime_);
    }
    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }

    return val;
}
bool ActionMarkItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionEndTime(refVal);
        }
    }
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


std::string ActionMarkItem::getActionStartTime() const
{
    return actionStartTime_;
}

void ActionMarkItem::setActionStartTime(const std::string& value)
{
    actionStartTime_ = value;
    actionStartTimeIsSet_ = true;
}

bool ActionMarkItem::actionStartTimeIsSet() const
{
    return actionStartTimeIsSet_;
}

void ActionMarkItem::unsetactionStartTime()
{
    actionStartTimeIsSet_ = false;
}

std::string ActionMarkItem::getActionEndTime() const
{
    return actionEndTime_;
}

void ActionMarkItem::setActionEndTime(const std::string& value)
{
    actionEndTime_ = value;
    actionEndTimeIsSet_ = true;
}

bool ActionMarkItem::actionEndTimeIsSet() const
{
    return actionEndTimeIsSet_;
}

void ActionMarkItem::unsetactionEndTime()
{
    actionEndTimeIsSet_ = false;
}

std::string ActionMarkItem::getActionType() const
{
    return actionType_;
}

void ActionMarkItem::setActionType(const std::string& value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool ActionMarkItem::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void ActionMarkItem::unsetactionType()
{
    actionTypeIsSet_ = false;
}

}
}
}
}
}


