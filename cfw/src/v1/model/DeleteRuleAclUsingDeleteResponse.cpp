

#include "huaweicloud/cfw/v1/model/DeleteRuleAclUsingDeleteResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteRuleAclUsingDeleteResponse::DeleteRuleAclUsingDeleteResponse()
{
    dataIsSet_ = false;
}

DeleteRuleAclUsingDeleteResponse::~DeleteRuleAclUsingDeleteResponse() = default;

void DeleteRuleAclUsingDeleteResponse::validate()
{
}

web::json::value DeleteRuleAclUsingDeleteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool DeleteRuleAclUsingDeleteResponse::fromJson(const web::json::value& val)
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

RuleId DeleteRuleAclUsingDeleteResponse::getData() const
{
    return data_;
}

void DeleteRuleAclUsingDeleteResponse::setData(const RuleId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteRuleAclUsingDeleteResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteRuleAclUsingDeleteResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


