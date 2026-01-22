

#include "huaweicloud/cfw/v1/model/BatchCustomerIpsResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchCustomerIpsResp_data::BatchCustomerIpsResp_data()
{
    id_ = "";
    idIsSet_ = false;
}

BatchCustomerIpsResp_data::~BatchCustomerIpsResp_data() = default;

void BatchCustomerIpsResp_data::validate()
{
}

web::json::value BatchCustomerIpsResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool BatchCustomerIpsResp_data::fromJson(const web::json::value& val)
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


std::string BatchCustomerIpsResp_data::getId() const
{
    return id_;
}

void BatchCustomerIpsResp_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchCustomerIpsResp_data::idIsSet() const
{
    return idIsSet_;
}

void BatchCustomerIpsResp_data::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


