

#include "huaweicloud/cfw/v1/model/UpdateRuleAclUsingPutResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateRuleAclUsingPutResponse::UpdateRuleAclUsingPutResponse()
{
    dataIsSet_ = false;
}

UpdateRuleAclUsingPutResponse::~UpdateRuleAclUsingPutResponse() = default;

void UpdateRuleAclUsingPutResponse::validate()
{
}

web::json::value UpdateRuleAclUsingPutResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool UpdateRuleAclUsingPutResponse::fromJson(const web::json::value& val)
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


RuleId UpdateRuleAclUsingPutResponse::getData() const
{
    return data_;
}

void UpdateRuleAclUsingPutResponse::setData(const RuleId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateRuleAclUsingPutResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateRuleAclUsingPutResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


