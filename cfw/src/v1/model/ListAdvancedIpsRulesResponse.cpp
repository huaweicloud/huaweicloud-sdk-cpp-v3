

#include "huaweicloud/cfw/v1/model/ListAdvancedIpsRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAdvancedIpsRulesResponse::ListAdvancedIpsRulesResponse()
{
    dataIsSet_ = false;
}

ListAdvancedIpsRulesResponse::~ListAdvancedIpsRulesResponse() = default;

void ListAdvancedIpsRulesResponse::validate()
{
}

web::json::value ListAdvancedIpsRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAdvancedIpsRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AdvancedIpsRuleListVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AdvancedIpsRuleListVo ListAdvancedIpsRulesResponse::getData() const
{
    return data_;
}

void ListAdvancedIpsRulesResponse::setData(const AdvancedIpsRuleListVo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAdvancedIpsRulesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAdvancedIpsRulesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


