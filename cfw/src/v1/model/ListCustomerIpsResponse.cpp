

#include "huaweicloud/cfw/v1/model/ListCustomerIpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListCustomerIpsResponse::ListCustomerIpsResponse()
{
    dataIsSet_ = false;
}

ListCustomerIpsResponse::~ListCustomerIpsResponse() = default;

void ListCustomerIpsResponse::validate()
{
}

web::json::value ListCustomerIpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListCustomerIpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            CustomerIpsPageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


CustomerIpsPageInfo ListCustomerIpsResponse::getData() const
{
    return data_;
}

void ListCustomerIpsResponse::setData(const CustomerIpsPageInfo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListCustomerIpsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListCustomerIpsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


