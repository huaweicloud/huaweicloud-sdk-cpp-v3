

#include "huaweicloud/cfw/v1/model/AddAddressItemResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressItemResponse::AddAddressItemResponse()
{
    dataIsSet_ = false;
}

AddAddressItemResponse::~AddAddressItemResponse() = default;

void AddAddressItemResponse::validate()
{
}

web::json::value AddAddressItemResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddAddressItemResponse::fromJson(const web::json::value& val)
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


AddressItems AddAddressItemResponse::getData() const
{
    return data_;
}

void AddAddressItemResponse::setData(const AddressItems& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddAddressItemResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddAddressItemResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


