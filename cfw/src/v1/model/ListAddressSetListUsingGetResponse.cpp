

#include "huaweicloud/cfw/v1/model/ListAddressSetListUsingGetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressSetListUsingGetResponse::ListAddressSetListUsingGetResponse()
{
    dataIsSet_ = false;
}

ListAddressSetListUsingGetResponse::~ListAddressSetListUsingGetResponse() = default;

void ListAddressSetListUsingGetResponse::validate()
{
}

web::json::value ListAddressSetListUsingGetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListAddressSetListUsingGetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AddressSetListResponseDTO_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

AddressSetListResponseDTO_data ListAddressSetListUsingGetResponse::getData() const
{
    return data_;
}

void ListAddressSetListUsingGetResponse::setData(const AddressSetListResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAddressSetListUsingGetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAddressSetListUsingGetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


