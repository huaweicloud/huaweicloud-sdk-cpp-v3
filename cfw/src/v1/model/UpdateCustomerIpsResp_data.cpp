

#include "huaweicloud/cfw/v1/model/UpdateCustomerIpsResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateCustomerIpsResp_data::UpdateCustomerIpsResp_data()
{
    id_ = "";
    idIsSet_ = false;
}

UpdateCustomerIpsResp_data::~UpdateCustomerIpsResp_data() = default;

void UpdateCustomerIpsResp_data::validate()
{
}

web::json::value UpdateCustomerIpsResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool UpdateCustomerIpsResp_data::fromJson(const web::json::value& val)
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


std::string UpdateCustomerIpsResp_data::getId() const
{
    return id_;
}

void UpdateCustomerIpsResp_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateCustomerIpsResp_data::idIsSet() const
{
    return idIsSet_;
}

void UpdateCustomerIpsResp_data::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


