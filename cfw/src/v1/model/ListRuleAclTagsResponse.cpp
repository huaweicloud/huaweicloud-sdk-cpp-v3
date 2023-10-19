

#include "huaweicloud/cfw/v1/model/ListRuleAclTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListRuleAclTagsResponse::ListRuleAclTagsResponse()
{
    dataIsSet_ = false;
}

ListRuleAclTagsResponse::~ListRuleAclTagsResponse() = default;

void ListRuleAclTagsResponse::validate()
{
}

web::json::value ListRuleAclTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListRuleAclTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            HttpGetAclTagResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


HttpGetAclTagResponseData ListRuleAclTagsResponse::getData() const
{
    return data_;
}

void ListRuleAclTagsResponse::setData(const HttpGetAclTagResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListRuleAclTagsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListRuleAclTagsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


