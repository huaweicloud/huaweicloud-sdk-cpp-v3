

#include "huaweicloud/aad/v2/model/WafCustomRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




WafCustomRule::WafCustomRule()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    time_ = false;
    timeIsSet_ = false;
    start_ = 0L;
    startIsSet_ = false;
    terminal_ = 0L;
    terminalIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    conditionsIsSet_ = false;
    actionIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
}

WafCustomRule::~WafCustomRule() = default;

void WafCustomRule::validate()
{
}

web::json::value WafCustomRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(startIsSet_) {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(start_);
    }
    if(terminalIsSet_) {
        val[utility::conversions::to_string_t("terminal")] = ModelBase::toJson(terminal_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }

    return val;
}
bool WafCustomRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terminal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terminal"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerminal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<WafCustomCondition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            WafCustomRuleAction refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overseas_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overseas_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverseasType(refVal);
        }
    }
    return ok;
}


std::string WafCustomRule::getId() const
{
    return id_;
}

void WafCustomRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WafCustomRule::idIsSet() const
{
    return idIsSet_;
}

void WafCustomRule::unsetid()
{
    idIsSet_ = false;
}

std::string WafCustomRule::getName() const
{
    return name_;
}

void WafCustomRule::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WafCustomRule::nameIsSet() const
{
    return nameIsSet_;
}

void WafCustomRule::unsetname()
{
    nameIsSet_ = false;
}

bool WafCustomRule::isTime() const
{
    return time_;
}

void WafCustomRule::setTime(bool value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool WafCustomRule::timeIsSet() const
{
    return timeIsSet_;
}

void WafCustomRule::unsettime()
{
    timeIsSet_ = false;
}

int64_t WafCustomRule::getStart() const
{
    return start_;
}

void WafCustomRule::setStart(int64_t value)
{
    start_ = value;
    startIsSet_ = true;
}

bool WafCustomRule::startIsSet() const
{
    return startIsSet_;
}

void WafCustomRule::unsetstart()
{
    startIsSet_ = false;
}

int64_t WafCustomRule::getTerminal() const
{
    return terminal_;
}

void WafCustomRule::setTerminal(int64_t value)
{
    terminal_ = value;
    terminalIsSet_ = true;
}

bool WafCustomRule::terminalIsSet() const
{
    return terminalIsSet_;
}

void WafCustomRule::unsetterminal()
{
    terminalIsSet_ = false;
}

int32_t WafCustomRule::getPriority() const
{
    return priority_;
}

void WafCustomRule::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool WafCustomRule::priorityIsSet() const
{
    return priorityIsSet_;
}

void WafCustomRule::unsetpriority()
{
    priorityIsSet_ = false;
}

std::vector<WafCustomCondition>& WafCustomRule::getConditions()
{
    return conditions_;
}

void WafCustomRule::setConditions(const std::vector<WafCustomCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool WafCustomRule::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void WafCustomRule::unsetconditions()
{
    conditionsIsSet_ = false;
}

WafCustomRuleAction WafCustomRule::getAction() const
{
    return action_;
}

void WafCustomRule::setAction(const WafCustomRuleAction& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool WafCustomRule::actionIsSet() const
{
    return actionIsSet_;
}

void WafCustomRule::unsetaction()
{
    actionIsSet_ = false;
}

std::string WafCustomRule::getDomainName() const
{
    return domainName_;
}

void WafCustomRule::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool WafCustomRule::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void WafCustomRule::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t WafCustomRule::getOverseasType() const
{
    return overseasType_;
}

void WafCustomRule::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool WafCustomRule::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void WafCustomRule::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

}
}
}
}
}


