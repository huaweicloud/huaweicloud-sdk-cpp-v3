

#include "huaweicloud/cfw/v1/model/UpdateAclRuleOrderResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAclRuleOrderResponse::UpdateAclRuleOrderResponse()
{
    dataIsSet_ = false;
}

UpdateAclRuleOrderResponse::~UpdateAclRuleOrderResponse() = default;

void UpdateAclRuleOrderResponse::validate()
{
}

web::json::value UpdateAclRuleOrderResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateAclRuleOrderResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            OrderRuleId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


OrderRuleId UpdateAclRuleOrderResponse::getData() const
{
    return data_;
}

void UpdateAclRuleOrderResponse::setData(const OrderRuleId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateAclRuleOrderResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateAclRuleOrderResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


