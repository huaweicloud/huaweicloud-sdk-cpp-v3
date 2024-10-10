

#include "huaweicloud/aad/v2/model/ListWafWhiteIpRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafWhiteIpRuleResponse::ListWafWhiteIpRuleResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    blackIsSet_ = false;
    whiteIsSet_ = false;
}

ListWafWhiteIpRuleResponse::~ListWafWhiteIpRuleResponse() = default;

void ListWafWhiteIpRuleResponse::validate()
{
}

web::json::value ListWafWhiteIpRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(blackIsSet_) {
        val[utility::conversions::to_string_t("black")] = ModelBase::toJson(black_);
    }
    if(whiteIsSet_) {
        val[utility::conversions::to_string_t("white")] = ModelBase::toJson(white_);
    }

    return val;
}
bool ListWafWhiteIpRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("black"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("black"));
        if(!fieldValue.is_null())
        {
            std::vector<BlackWhiteListRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("white"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("white"));
        if(!fieldValue.is_null())
        {
            std::vector<BlackWhiteListRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhite(refVal);
        }
    }
    return ok;
}


int32_t ListWafWhiteIpRuleResponse::getTotal() const
{
    return total_;
}

void ListWafWhiteIpRuleResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWafWhiteIpRuleResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWafWhiteIpRuleResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<BlackWhiteListRule>& ListWafWhiteIpRuleResponse::getBlack()
{
    return black_;
}

void ListWafWhiteIpRuleResponse::setBlack(const std::vector<BlackWhiteListRule>& value)
{
    black_ = value;
    blackIsSet_ = true;
}

bool ListWafWhiteIpRuleResponse::blackIsSet() const
{
    return blackIsSet_;
}

void ListWafWhiteIpRuleResponse::unsetblack()
{
    blackIsSet_ = false;
}

std::vector<BlackWhiteListRule>& ListWafWhiteIpRuleResponse::getWhite()
{
    return white_;
}

void ListWafWhiteIpRuleResponse::setWhite(const std::vector<BlackWhiteListRule>& value)
{
    white_ = value;
    whiteIsSet_ = true;
}

bool ListWafWhiteIpRuleResponse::whiteIsSet() const
{
    return whiteIsSet_;
}

void ListWafWhiteIpRuleResponse::unsetwhite()
{
    whiteIsSet_ = false;
}

}
}
}
}
}


