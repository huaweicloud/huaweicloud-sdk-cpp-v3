

#include "huaweicloud/cfw/v1/model/UpdateSecurityPolciesActionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateSecurityPolciesActionDto::UpdateSecurityPolciesActionDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    ruleIdsIsSet_ = false;
}

UpdateSecurityPolciesActionDto::~UpdateSecurityPolciesActionDto() = default;

void UpdateSecurityPolciesActionDto::validate()
{
}

web::json::value UpdateSecurityPolciesActionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(ruleIdsIsSet_) {
        val[utility::conversions::to_string_t("rule_ids")] = ModelBase::toJson(ruleIds_);
    }

    return val;
}
bool UpdateSecurityPolciesActionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleIds(refVal);
        }
    }
    return ok;
}


std::string UpdateSecurityPolciesActionDto::getObjectId() const
{
    return objectId_;
}

void UpdateSecurityPolciesActionDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool UpdateSecurityPolciesActionDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void UpdateSecurityPolciesActionDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string UpdateSecurityPolciesActionDto::getAction() const
{
    return action_;
}

void UpdateSecurityPolciesActionDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpdateSecurityPolciesActionDto::actionIsSet() const
{
    return actionIsSet_;
}

void UpdateSecurityPolciesActionDto::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<std::string>& UpdateSecurityPolciesActionDto::getRuleIds()
{
    return ruleIds_;
}

void UpdateSecurityPolciesActionDto::setRuleIds(const std::vector<std::string>& value)
{
    ruleIds_ = value;
    ruleIdsIsSet_ = true;
}

bool UpdateSecurityPolciesActionDto::ruleIdsIsSet() const
{
    return ruleIdsIsSet_;
}

void UpdateSecurityPolciesActionDto::unsetruleIds()
{
    ruleIdsIsSet_ = false;
}

}
}
}
}
}


