

#include "huaweicloud/cfw/v1/model/ListFirewallUsingGetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFirewallUsingGetResponse::ListFirewallUsingGetResponse()
{
    dataIsSet_ = false;
}

ListFirewallUsingGetResponse::~ListFirewallUsingGetResponse() = default;

void ListFirewallUsingGetResponse::validate()
{
}

web::json::value ListFirewallUsingGetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListFirewallUsingGetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            GetFirewallInstanceData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


GetFirewallInstanceData ListFirewallUsingGetResponse::getData() const
{
    return data_;
}

void ListFirewallUsingGetResponse::setData(const GetFirewallInstanceData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListFirewallUsingGetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListFirewallUsingGetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


