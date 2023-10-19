

#include "huaweicloud/cfw/v1/model/ListAddressSetDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressSetDetailResponse::ListAddressSetDetailResponse()
{
    dataIsSet_ = false;
}

ListAddressSetDetailResponse::~ListAddressSetDetailResponse() = default;

void ListAddressSetDetailResponse::validate()
{
}

web::json::value ListAddressSetDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAddressSetDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AddressSetDetailResponseDTO_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AddressSetDetailResponseDTO_data ListAddressSetDetailResponse::getData() const
{
    return data_;
}

void ListAddressSetDetailResponse::setData(const AddressSetDetailResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAddressSetDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAddressSetDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


