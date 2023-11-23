

#include "huaweicloud/dds/v3/model/UpdateKillOpRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateKillOpRuleRequestBody::UpdateKillOpRuleRequestBody()
{
    idsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

UpdateKillOpRuleRequestBody::~UpdateKillOpRuleRequestBody() = default;

void UpdateKillOpRuleRequestBody::validate()
{
}

web::json::value UpdateKillOpRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool UpdateKillOpRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
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
    return ok;
}


std::vector<std::string>& UpdateKillOpRuleRequestBody::getIds()
{
    return ids_;
}

void UpdateKillOpRuleRequestBody::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool UpdateKillOpRuleRequestBody::idsIsSet() const
{
    return idsIsSet_;
}

void UpdateKillOpRuleRequestBody::unsetids()
{
    idsIsSet_ = false;
}

std::string UpdateKillOpRuleRequestBody::getAction() const
{
    return action_;
}

void UpdateKillOpRuleRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpdateKillOpRuleRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void UpdateKillOpRuleRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


