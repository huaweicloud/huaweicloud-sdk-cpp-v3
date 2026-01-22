

#include "huaweicloud/cfw/v1/model/CreateCustomerIpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateCustomerIpsResponse::CreateCustomerIpsResponse()
{
    dataIsSet_ = false;
}

CreateCustomerIpsResponse::~CreateCustomerIpsResponse() = default;

void CreateCustomerIpsResponse::validate()
{
}

web::json::value CreateCustomerIpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CreateCustomerIpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            CreateCustomerIpsResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


CreateCustomerIpsResp_data CreateCustomerIpsResponse::getData() const
{
    return data_;
}

void CreateCustomerIpsResponse::setData(const CreateCustomerIpsResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateCustomerIpsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateCustomerIpsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


