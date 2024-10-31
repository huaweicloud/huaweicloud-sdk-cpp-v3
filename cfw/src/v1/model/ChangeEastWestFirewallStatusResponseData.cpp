

#include "huaweicloud/cfw/v1/model/ChangeEastWestFirewallStatusResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeEastWestFirewallStatusResponseData::ChangeEastWestFirewallStatusResponseData()
{
    id_ = "";
    idIsSet_ = false;
}

ChangeEastWestFirewallStatusResponseData::~ChangeEastWestFirewallStatusResponseData() = default;

void ChangeEastWestFirewallStatusResponseData::validate()
{
}

web::json::value ChangeEastWestFirewallStatusResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ChangeEastWestFirewallStatusResponseData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ChangeEastWestFirewallStatusResponseData::getId() const
{
    return id_;
}

void ChangeEastWestFirewallStatusResponseData::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChangeEastWestFirewallStatusResponseData::idIsSet() const
{
    return idIsSet_;
}

void ChangeEastWestFirewallStatusResponseData::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


