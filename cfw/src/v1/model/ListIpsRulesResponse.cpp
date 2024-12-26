

#include "huaweicloud/cfw/v1/model/ListIpsRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsRulesResponse::ListIpsRulesResponse()
{
    dataIsSet_ = false;
}

ListIpsRulesResponse::~ListIpsRulesResponse() = default;

void ListIpsRulesResponse::validate()
{
}

web::json::value ListIpsRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListIpsRulesResponse::fromJson(const web::json::value& val)
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


AdvancedIpsRuleListVo ListIpsRulesResponse::getData() const
{
    return data_;
}

void ListIpsRulesResponse::setData(const AdvancedIpsRuleListVo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListIpsRulesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListIpsRulesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


