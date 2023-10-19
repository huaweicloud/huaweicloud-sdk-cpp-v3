

#include "huaweicloud/cfw/v1/model/ListAddressSetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressSetsResponse::ListAddressSetsResponse()
{
    dataIsSet_ = false;
}

ListAddressSetsResponse::~ListAddressSetsResponse() = default;

void ListAddressSetsResponse::validate()
{
}

web::json::value ListAddressSetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAddressSetsResponse::fromJson(const web::json::value& val)
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


AddressSetListResponseDTO_data ListAddressSetsResponse::getData() const
{
    return data_;
}

void ListAddressSetsResponse::setData(const AddressSetListResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAddressSetsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAddressSetsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


