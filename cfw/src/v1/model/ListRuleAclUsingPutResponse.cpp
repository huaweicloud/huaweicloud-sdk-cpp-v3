

#include "huaweicloud/cfw/v1/model/ListRuleAclUsingPutResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListRuleAclUsingPutResponse::ListRuleAclUsingPutResponse()
{
    dataIsSet_ = false;
}

ListRuleAclUsingPutResponse::~ListRuleAclUsingPutResponse() = default;

void ListRuleAclUsingPutResponse::validate()
{
}

web::json::value ListRuleAclUsingPutResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListRuleAclUsingPutResponse::fromJson(const web::json::value& val)
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


RuleId ListRuleAclUsingPutResponse::getData() const
{
    return data_;
}

void ListRuleAclUsingPutResponse::setData(const RuleId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListRuleAclUsingPutResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListRuleAclUsingPutResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


