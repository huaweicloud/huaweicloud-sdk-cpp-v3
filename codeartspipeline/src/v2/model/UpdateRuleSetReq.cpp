

#include "huaweicloud/codeartspipeline/v2/model/UpdateRuleSetReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateRuleSetReq::UpdateRuleSetReq()
{
    name_ = "";
    nameIsSet_ = false;
    rulesIsSet_ = false;
}

UpdateRuleSetReq::~UpdateRuleSetReq() = default;

void UpdateRuleSetReq::validate()
{
}

web::json::value UpdateRuleSetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool UpdateRuleSetReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateRuleInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::string UpdateRuleSetReq::getName() const
{
    return name_;
}

void UpdateRuleSetReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateRuleSetReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateRuleSetReq::unsetname()
{
    nameIsSet_ = false;
}

std::vector<UpdateRuleInstance>& UpdateRuleSetReq::getRules()
{
    return rules_;
}

void UpdateRuleSetReq::setRules(const std::vector<UpdateRuleInstance>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool UpdateRuleSetReq::rulesIsSet() const
{
    return rulesIsSet_;
}

void UpdateRuleSetReq::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


