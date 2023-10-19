

#include "huaweicloud/cfw/v1/model/UpdateAclRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAclRuleResponse::UpdateAclRuleResponse()
{
    dataIsSet_ = false;
}

UpdateAclRuleResponse::~UpdateAclRuleResponse() = default;

void UpdateAclRuleResponse::validate()
{
}

web::json::value UpdateAclRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateAclRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            RuleId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


RuleId UpdateAclRuleResponse::getData() const
{
    return data_;
}

void UpdateAclRuleResponse::setData(const RuleId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateAclRuleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateAclRuleResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


