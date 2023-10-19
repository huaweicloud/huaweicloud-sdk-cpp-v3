

#include "huaweicloud/cfw/v1/model/ListFirewallDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFirewallDetailResponse::ListFirewallDetailResponse()
{
    dataIsSet_ = false;
}

ListFirewallDetailResponse::~ListFirewallDetailResponse() = default;

void ListFirewallDetailResponse::validate()
{
}

web::json::value ListFirewallDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListFirewallDetailResponse::fromJson(const web::json::value& val)
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


GetFirewallInstanceData ListFirewallDetailResponse::getData() const
{
    return data_;
}

void ListFirewallDetailResponse::setData(const GetFirewallInstanceData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListFirewallDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListFirewallDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


