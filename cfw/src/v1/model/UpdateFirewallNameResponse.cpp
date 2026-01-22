

#include "huaweicloud/cfw/v1/model/UpdateFirewallNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateFirewallNameResponse::UpdateFirewallNameResponse()
{
    dataIsSet_ = false;
}

UpdateFirewallNameResponse::~UpdateFirewallNameResponse() = default;

void UpdateFirewallNameResponse::validate()
{
}

web::json::value UpdateFirewallNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateFirewallNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            UpdateFirewallNameResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


UpdateFirewallNameResp_data UpdateFirewallNameResponse::getData() const
{
    return data_;
}

void UpdateFirewallNameResponse::setData(const UpdateFirewallNameResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateFirewallNameResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateFirewallNameResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


