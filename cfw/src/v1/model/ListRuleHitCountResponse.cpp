

#include "huaweicloud/cfw/v1/model/ListRuleHitCountResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListRuleHitCountResponse::ListRuleHitCountResponse()
{
    dataIsSet_ = false;
}

ListRuleHitCountResponse::~ListRuleHitCountResponse() = default;

void ListRuleHitCountResponse::validate()
{
}

web::json::value ListRuleHitCountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListRuleHitCountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            RuleHitCountRecords refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


RuleHitCountRecords ListRuleHitCountResponse::getData() const
{
    return data_;
}

void ListRuleHitCountResponse::setData(const RuleHitCountRecords& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListRuleHitCountResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListRuleHitCountResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


