

#include "huaweicloud/cfw/v1/model/ListAddressItemsUsingGetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressItemsUsingGetResponse::ListAddressItemsUsingGetResponse()
{
    dataIsSet_ = false;
}

ListAddressItemsUsingGetResponse::~ListAddressItemsUsingGetResponse() = default;

void ListAddressItemsUsingGetResponse::validate()
{
}

web::json::value ListAddressItemsUsingGetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListAddressItemsUsingGetResponse::fromJson(const web::json::value& val)
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


AddressItemListResponseDTO_data ListAddressItemsUsingGetResponse::getData() const
{
    return data_;
}

void ListAddressItemsUsingGetResponse::setData(const AddressItemListResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAddressItemsUsingGetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAddressItemsUsingGetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


