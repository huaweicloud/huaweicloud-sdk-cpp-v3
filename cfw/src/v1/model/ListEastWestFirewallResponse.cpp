

#include "huaweicloud/cfw/v1/model/ListEastWestFirewallResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListEastWestFirewallResponse::ListEastWestFirewallResponse()
{
    dataIsSet_ = false;
}

ListEastWestFirewallResponse::~ListEastWestFirewallResponse() = default;

void ListEastWestFirewallResponse::validate()
{
}

web::json::value ListEastWestFirewallResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListEastWestFirewallResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            GetEastWestFirewallResponseBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

GetEastWestFirewallResponseBody ListEastWestFirewallResponse::getData() const
{
    return data_;
}

void ListEastWestFirewallResponse::setData(const GetEastWestFirewallResponseBody& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListEastWestFirewallResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListEastWestFirewallResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


