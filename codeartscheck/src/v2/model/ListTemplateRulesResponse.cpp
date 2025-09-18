

#include "huaweicloud/codeartscheck/v2/model/ListTemplateRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListTemplateRulesResponse::ListTemplateRulesResponse()
{
    infoIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListTemplateRulesResponse::~ListTemplateRulesResponse() = default;

void ListTemplateRulesResponse::validate()
{
}

web::json::value ListTemplateRulesResponse::toJson() const
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
bool ListTemplateRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleItem> refVal;
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


std::vector<RuleItem>& ListTemplateRulesResponse::getInfo()
{
    return info_;
}

void ListTemplateRulesResponse::setInfo(const std::vector<RuleItem>& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool ListTemplateRulesResponse::infoIsSet() const
{
    return infoIsSet_;
}

void ListTemplateRulesResponse::unsetinfo()
{
    infoIsSet_ = false;
}

int32_t ListTemplateRulesResponse::getTotal() const
{
    return total_;
}

void ListTemplateRulesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTemplateRulesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTemplateRulesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


