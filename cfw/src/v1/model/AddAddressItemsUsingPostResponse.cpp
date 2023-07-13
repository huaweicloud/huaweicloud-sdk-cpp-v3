

#include "huaweicloud/cfw/v1/model/AddAddressItemsUsingPostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressItemsUsingPostResponse::AddAddressItemsUsingPostResponse()
{
    dataIsSet_ = false;
}

AddAddressItemsUsingPostResponse::~AddAddressItemsUsingPostResponse() = default;

void AddAddressItemsUsingPostResponse::validate()
{
}

web::json::value AddAddressItemsUsingPostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool AddAddressItemsUsingPostResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AddressItems refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

AddressItems AddAddressItemsUsingPostResponse::getData() const
{
    return data_;
}

void AddAddressItemsUsingPostResponse::setData(const AddressItems& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddAddressItemsUsingPostResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddAddressItemsUsingPostResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


