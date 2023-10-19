

#include "huaweicloud/cfw/v1/model/DeleteAclRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAclRuleResponse::DeleteAclRuleResponse()
{
    dataIsSet_ = false;
}

DeleteAclRuleResponse::~DeleteAclRuleResponse() = default;

void DeleteAclRuleResponse::validate()
{
}

web::json::value DeleteAclRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteAclRuleResponse::fromJson(const web::json::value& val)
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


RuleId DeleteAclRuleResponse::getData() const
{
    return data_;
}

void DeleteAclRuleResponse::setData(const RuleId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteAclRuleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteAclRuleResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


