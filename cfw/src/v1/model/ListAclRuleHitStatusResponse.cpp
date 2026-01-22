

#include "huaweicloud/cfw/v1/model/ListAclRuleHitStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAclRuleHitStatusResponse::ListAclRuleHitStatusResponse()
{
    dataIsSet_ = false;
}

ListAclRuleHitStatusResponse::~ListAclRuleHitStatusResponse() = default;

void ListAclRuleHitStatusResponse::validate()
{
}

web::json::value ListAclRuleHitStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAclRuleHitStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            HitStatusResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


HitStatusResponseData ListAclRuleHitStatusResponse::getData() const
{
    return data_;
}

void ListAclRuleHitStatusResponse::setData(const HitStatusResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAclRuleHitStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAclRuleHitStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


