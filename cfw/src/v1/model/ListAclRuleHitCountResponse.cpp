

#include "huaweicloud/cfw/v1/model/ListAclRuleHitCountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAclRuleHitCountResponse::ListAclRuleHitCountResponse()
{
    dataIsSet_ = false;
}

ListAclRuleHitCountResponse::~ListAclRuleHitCountResponse() = default;

void ListAclRuleHitCountResponse::validate()
{
}

web::json::value ListAclRuleHitCountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAclRuleHitCountResponse::fromJson(const web::json::value& val)
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


RuleHitCountRecords ListAclRuleHitCountResponse::getData() const
{
    return data_;
}

void ListAclRuleHitCountResponse::setData(const RuleHitCountRecords& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAclRuleHitCountResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAclRuleHitCountResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


