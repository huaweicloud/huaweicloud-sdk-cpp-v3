

#include "huaweicloud/codeartscheck/v2/model/ListRulesetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListRulesetsResponse::ListRulesetsResponse()
{
    infoIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListRulesetsResponse::~ListRulesetsResponse() = default;

void ListRulesetsResponse::validate()
{
}

web::json::value ListRulesetsResponse::toJson() const
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
bool ListRulesetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::vector<RulesetItem> refVal;
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


std::vector<RulesetItem>& ListRulesetsResponse::getInfo()
{
    return info_;
}

void ListRulesetsResponse::setInfo(const std::vector<RulesetItem>& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool ListRulesetsResponse::infoIsSet() const
{
    return infoIsSet_;
}

void ListRulesetsResponse::unsetinfo()
{
    infoIsSet_ = false;
}

int32_t ListRulesetsResponse::getTotal() const
{
    return total_;
}

void ListRulesetsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRulesetsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRulesetsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


