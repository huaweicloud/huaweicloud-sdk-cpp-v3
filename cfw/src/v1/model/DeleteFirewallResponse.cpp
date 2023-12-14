

#include "huaweicloud/cfw/v1/model/DeleteFirewallResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteFirewallResponse::DeleteFirewallResponse()
{
    data_ = "";
    dataIsSet_ = false;
}

DeleteFirewallResponse::~DeleteFirewallResponse() = default;

void DeleteFirewallResponse::validate()
{
}

web::json::value DeleteFirewallResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteFirewallResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string DeleteFirewallResponse::getData() const
{
    return data_;
}

void DeleteFirewallResponse::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteFirewallResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteFirewallResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


