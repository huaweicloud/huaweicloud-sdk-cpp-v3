

#include "huaweicloud/cfw/v1/model/ListAddressItemsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressItemsResponse::ListAddressItemsResponse()
{
    dataIsSet_ = false;
}

ListAddressItemsResponse::~ListAddressItemsResponse() = default;

void ListAddressItemsResponse::validate()
{
}

web::json::value ListAddressItemsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAddressItemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AddressItemListResponseDTO_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AddressItemListResponseDTO_data ListAddressItemsResponse::getData() const
{
    return data_;
}

void ListAddressItemsResponse::setData(const AddressItemListResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAddressItemsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAddressItemsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


