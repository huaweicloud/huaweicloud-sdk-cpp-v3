

#include "huaweicloud/codeartspipeline/v2/model/CreateRuleSetReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateRuleSetReq::CreateRuleSetReq()
{
    name_ = "";
    nameIsSet_ = false;
    rulesIsSet_ = false;
}

CreateRuleSetReq::~CreateRuleSetReq() = default;

void CreateRuleSetReq::validate()
{
}

web::json::value CreateRuleSetReq::toJson() const
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
bool CreateRuleSetReq::fromJson(const web::json::value& val)
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
            std::vector<RequestRuleInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::string CreateRuleSetReq::getName() const
{
    return name_;
}

void CreateRuleSetReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRuleSetReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRuleSetReq::unsetname()
{
    nameIsSet_ = false;
}

std::vector<RequestRuleInstance>& CreateRuleSetReq::getRules()
{
    return rules_;
}

void CreateRuleSetReq::setRules(const std::vector<RequestRuleInstance>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool CreateRuleSetReq::rulesIsSet() const
{
    return rulesIsSet_;
}

void CreateRuleSetReq::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


