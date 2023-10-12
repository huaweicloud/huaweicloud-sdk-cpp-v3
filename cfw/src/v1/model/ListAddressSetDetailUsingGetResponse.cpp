

#include "huaweicloud/cfw/v1/model/ListAddressSetDetailUsingGetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressSetDetailUsingGetResponse::ListAddressSetDetailUsingGetResponse()
{
    dataIsSet_ = false;
}

ListAddressSetDetailUsingGetResponse::~ListAddressSetDetailUsingGetResponse() = default;

void ListAddressSetDetailUsingGetResponse::validate()
{
}

web::json::value ListAddressSetDetailUsingGetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAddressSetDetailUsingGetResponse::fromJson(const web::json::value& val)
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


AddressSetDetailResponseDTO_data ListAddressSetDetailUsingGetResponse::getData() const
{
    return data_;
}

void ListAddressSetDetailUsingGetResponse::setData(const AddressSetDetailResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAddressSetDetailUsingGetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAddressSetDetailUsingGetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


