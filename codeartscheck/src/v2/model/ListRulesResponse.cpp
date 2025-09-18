

#include "huaweicloud/codeartscheck/v2/model/ListRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListRulesResponse::ListRulesResponse()
{
    infoIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListRulesResponse::~ListRulesResponse() = default;

void ListRulesResponse::validate()
{
}

web::json::value ListRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleListItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<RuleListItem>& ListRulesResponse::getInfo()
{
    return info_;
}

void ListRulesResponse::setInfo(const std::vector<RuleListItem>& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool ListRulesResponse::infoIsSet() const
{
    return infoIsSet_;
}

void ListRulesResponse::unsetinfo()
{
    infoIsSet_ = false;
}

int32_t ListRulesResponse::getTotal() const
{
    return total_;
}

void ListRulesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRulesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRulesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


