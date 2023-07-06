

#include "huaweicloud/cfw/v1/model/OrderRuleAclDto.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




OrderRuleAclDto::OrderRuleAclDto()
{
    destRuleId_ = "";
    destRuleIdIsSet_ = false;
    top_ = 0;
    topIsSet_ = false;
}

OrderRuleAclDto::~OrderRuleAclDto() = default;

void OrderRuleAclDto::validate()
{
}

web::json::value OrderRuleAclDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destRuleIdIsSet_) {
        val[utility::conversions::to_string_t("dest_rule_id")] = ModelBase::toJson(destRuleId_);
    }
    if(topIsSet_) {
        val[utility::conversions::to_string_t("top")] = ModelBase::toJson(top_);
    }

    return val;
}

bool OrderRuleAclDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dest_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTop(refVal);
        }
    }
    return ok;
}

std::string OrderRuleAclDto::getDestRuleId() const
{
    return destRuleId_;
}

void OrderRuleAclDto::setDestRuleId(const std::string& value)
{
    destRuleId_ = value;
    destRuleIdIsSet_ = true;
}

bool OrderRuleAclDto::destRuleIdIsSet() const
{
    return destRuleIdIsSet_;
}

void OrderRuleAclDto::unsetdestRuleId()
{
    destRuleIdIsSet_ = false;
}

int32_t OrderRuleAclDto::getTop() const
{
    return top_;
}

void OrderRuleAclDto::setTop(int32_t value)
{
    top_ = value;
    topIsSet_ = true;
}

bool OrderRuleAclDto::topIsSet() const
{
    return topIsSet_;
}

void OrderRuleAclDto::unsettop()
{
    topIsSet_ = false;
}

}
}
}
}
}


