

#include "huaweicloud/cfw/v1/model/ShowCustomerIpsInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowCustomerIpsInfoResponse::ShowCustomerIpsInfoResponse()
{
    dataIsSet_ = false;
}

ShowCustomerIpsInfoResponse::~ShowCustomerIpsInfoResponse() = default;

void ShowCustomerIpsInfoResponse::validate()
{
}

web::json::value ShowCustomerIpsInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowCustomerIpsInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            CustomerIpsVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


CustomerIpsVO ShowCustomerIpsInfoResponse::getData() const
{
    return data_;
}

void ShowCustomerIpsInfoResponse::setData(const CustomerIpsVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowCustomerIpsInfoResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowCustomerIpsInfoResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


