

#include "huaweicloud/cfw/v1/model/BatchDeleteCustomerIpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteCustomerIpsResponse::BatchDeleteCustomerIpsResponse()
{
    dataIsSet_ = false;
}

BatchDeleteCustomerIpsResponse::~BatchDeleteCustomerIpsResponse() = default;

void BatchDeleteCustomerIpsResponse::validate()
{
}

web::json::value BatchDeleteCustomerIpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteCustomerIpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            BatchCustomerIpsResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


BatchCustomerIpsResp_data BatchDeleteCustomerIpsResponse::getData() const
{
    return data_;
}

void BatchDeleteCustomerIpsResponse::setData(const BatchCustomerIpsResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteCustomerIpsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteCustomerIpsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


