

#include "huaweicloud/cfw/v1/model/UpdateFirewallNameResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateFirewallNameResp_data::UpdateFirewallNameResp_data()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UpdateFirewallNameResp_data::~UpdateFirewallNameResp_data() = default;

void UpdateFirewallNameResp_data::validate()
{
}

web::json::value UpdateFirewallNameResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateFirewallNameResp_data::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string UpdateFirewallNameResp_data::getId() const
{
    return id_;
}

void UpdateFirewallNameResp_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateFirewallNameResp_data::idIsSet() const
{
    return idIsSet_;
}

void UpdateFirewallNameResp_data::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateFirewallNameResp_data::getName() const
{
    return name_;
}

void UpdateFirewallNameResp_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateFirewallNameResp_data::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateFirewallNameResp_data::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


