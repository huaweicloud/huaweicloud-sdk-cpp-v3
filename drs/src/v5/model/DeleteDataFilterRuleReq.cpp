

#include "huaweicloud/drs/v5/model/DeleteDataFilterRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteDataFilterRuleReq::DeleteDataFilterRuleReq()
{
    ruleIdsIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

DeleteDataFilterRuleReq::~DeleteDataFilterRuleReq() = default;

void DeleteDataFilterRuleReq::validate()
{
}

web::json::value DeleteDataFilterRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdsIsSet_) {
        val[utility::conversions::to_string_t("rule_ids")] = ModelBase::toJson(ruleIds_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool DeleteDataFilterRuleReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::vector<int64_t>& DeleteDataFilterRuleReq::getRuleIds()
{
    return ruleIds_;
}

void DeleteDataFilterRuleReq::setRuleIds(std::vector<int64_t> value)
{
    ruleIds_ = value;
    ruleIdsIsSet_ = true;
}

bool DeleteDataFilterRuleReq::ruleIdsIsSet() const
{
    return ruleIdsIsSet_;
}

void DeleteDataFilterRuleReq::unsetruleIds()
{
    ruleIdsIsSet_ = false;
}

std::string DeleteDataFilterRuleReq::getType() const
{
    return type_;
}

void DeleteDataFilterRuleReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DeleteDataFilterRuleReq::typeIsSet() const
{
    return typeIsSet_;
}

void DeleteDataFilterRuleReq::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


