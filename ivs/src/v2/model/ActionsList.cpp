

#include "huaweicloud/ivs/v2/model/ActionsList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




ActionsList::ActionsList()
{
    confidence_ = 0.0;
    confidenceIsSet_ = false;
    action_ = 0;
    actionIsSet_ = false;
}

ActionsList::~ActionsList() = default;

void ActionsList::validate()
{
}

web::json::value ActionsList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool ActionsList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


double ActionsList::getConfidence() const
{
    return confidence_;
}

void ActionsList::setConfidence(double value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ActionsList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ActionsList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

int32_t ActionsList::getAction() const
{
    return action_;
}

void ActionsList::setAction(int32_t value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ActionsList::actionIsSet() const
{
    return actionIsSet_;
}

void ActionsList::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


