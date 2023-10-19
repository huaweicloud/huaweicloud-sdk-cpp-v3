

#include "huaweicloud/cfw/v1/model/ListAclRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAclRulesResponse::ListAclRulesResponse()
{
    dataIsSet_ = false;
}

ListAclRulesResponse::~ListAclRulesResponse() = default;

void ListAclRulesResponse::validate()
{
}

web::json::value ListAclRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAclRulesResponse::fromJson(const web::json::value& val)
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


RuleAclListResponseDTO_data ListAclRulesResponse::getData() const
{
    return data_;
}

void ListAclRulesResponse::setData(const RuleAclListResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAclRulesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAclRulesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


