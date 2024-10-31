

#include "huaweicloud/cfw/v1/model/ChangeEastWestFirewallStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeEastWestFirewallStatusResponse::ChangeEastWestFirewallStatusResponse()
{
    dataIsSet_ = false;
}

ChangeEastWestFirewallStatusResponse::~ChangeEastWestFirewallStatusResponse() = default;

void ChangeEastWestFirewallStatusResponse::validate()
{
}

web::json::value ChangeEastWestFirewallStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ChangeEastWestFirewallStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ChangeEastWestFirewallStatusResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ChangeEastWestFirewallStatusResponseData ChangeEastWestFirewallStatusResponse::getData() const
{
    return data_;
}

void ChangeEastWestFirewallStatusResponse::setData(const ChangeEastWestFirewallStatusResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeEastWestFirewallStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeEastWestFirewallStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


