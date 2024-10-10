

#include "huaweicloud/aad/v2/model/ListWhiteBlackIpRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWhiteBlackIpRuleResponse::ListWhiteBlackIpRuleResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    ipsIsSet_ = false;
}

ListWhiteBlackIpRuleResponse::~ListWhiteBlackIpRuleResponse() = default;

void ListWhiteBlackIpRuleResponse::validate()
{
}

web::json::value ListWhiteBlackIpRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }

    return val;
}
bool ListWhiteBlackIpRuleResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<BwListIps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
        }
    }
    return ok;
}


int32_t ListWhiteBlackIpRuleResponse::getTotal() const
{
    return total_;
}

void ListWhiteBlackIpRuleResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWhiteBlackIpRuleResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWhiteBlackIpRuleResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<BwListIps>& ListWhiteBlackIpRuleResponse::getIps()
{
    return ips_;
}

void ListWhiteBlackIpRuleResponse::setIps(const std::vector<BwListIps>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool ListWhiteBlackIpRuleResponse::ipsIsSet() const
{
    return ipsIsSet_;
}

void ListWhiteBlackIpRuleResponse::unsetips()
{
    ipsIsSet_ = false;
}

}
}
}
}
}


