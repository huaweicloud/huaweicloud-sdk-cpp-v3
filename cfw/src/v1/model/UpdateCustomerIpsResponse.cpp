

#include "huaweicloud/cfw/v1/model/UpdateCustomerIpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateCustomerIpsResponse::UpdateCustomerIpsResponse()
{
    dataIsSet_ = false;
}

UpdateCustomerIpsResponse::~UpdateCustomerIpsResponse() = default;

void UpdateCustomerIpsResponse::validate()
{
}

web::json::value UpdateCustomerIpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateCustomerIpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            UpdateCustomerIpsResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


UpdateCustomerIpsResp_data UpdateCustomerIpsResponse::getData() const
{
    return data_;
}

void UpdateCustomerIpsResponse::setData(const UpdateCustomerIpsResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateCustomerIpsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateCustomerIpsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


