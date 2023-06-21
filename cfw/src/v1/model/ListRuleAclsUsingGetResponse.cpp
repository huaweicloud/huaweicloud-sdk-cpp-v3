

#include "huaweicloud/cfw/v1/model/ListRuleAclsUsingGetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListRuleAclsUsingGetResponse::ListRuleAclsUsingGetResponse()
{
    dataIsSet_ = false;
}

ListRuleAclsUsingGetResponse::~ListRuleAclsUsingGetResponse() = default;

void ListRuleAclsUsingGetResponse::validate()
{
}

web::json::value ListRuleAclsUsingGetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListRuleAclsUsingGetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            RuleAclListResponseDTO_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


RuleAclListResponseDTO_data ListRuleAclsUsingGetResponse::getData() const
{
    return data_;
}

void ListRuleAclsUsingGetResponse::setData(const RuleAclListResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListRuleAclsUsingGetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListRuleAclsUsingGetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


