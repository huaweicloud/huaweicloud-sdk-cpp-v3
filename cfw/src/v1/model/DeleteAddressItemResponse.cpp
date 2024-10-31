

#include "huaweicloud/cfw/v1/model/DeleteAddressItemResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAddressItemResponse::DeleteAddressItemResponse()
{
    dataIsSet_ = false;
}

DeleteAddressItemResponse::~DeleteAddressItemResponse() = default;

void DeleteAddressItemResponse::validate()
{
}

web::json::value DeleteAddressItemResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteAddressItemResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AddressItemId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AddressItemId DeleteAddressItemResponse::getData() const
{
    return data_;
}

void DeleteAddressItemResponse::setData(const AddressItemId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteAddressItemResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteAddressItemResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


