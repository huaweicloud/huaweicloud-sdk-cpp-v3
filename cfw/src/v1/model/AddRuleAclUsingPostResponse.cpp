

#include "huaweicloud/cfw/v1/model/AddRuleAclUsingPostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddRuleAclUsingPostResponse::AddRuleAclUsingPostResponse()
{
    dataIsSet_ = false;
}

AddRuleAclUsingPostResponse::~AddRuleAclUsingPostResponse() = default;

void AddRuleAclUsingPostResponse::validate()
{
}

web::json::value AddRuleAclUsingPostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool AddRuleAclUsingPostResponse::fromJson(const web::json::value& val)
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


RuleIdList AddRuleAclUsingPostResponse::getData() const
{
    return data_;
}

void AddRuleAclUsingPostResponse::setData(const RuleIdList& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddRuleAclUsingPostResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddRuleAclUsingPostResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


