

#include "huaweicloud/cfw/v1/model/AddAclRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAclRuleResponse::AddAclRuleResponse()
{
    dataIsSet_ = false;
}

AddAclRuleResponse::~AddAclRuleResponse() = default;

void AddAclRuleResponse::validate()
{
}

web::json::value AddAclRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddAclRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            RuleIdList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


RuleIdList AddAclRuleResponse::getData() const
{
    return data_;
}

void AddAclRuleResponse::setData(const RuleIdList& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddAclRuleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddAclRuleResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


