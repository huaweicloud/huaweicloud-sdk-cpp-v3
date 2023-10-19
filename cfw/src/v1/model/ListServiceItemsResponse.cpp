

#include "huaweicloud/cfw/v1/model/ListServiceItemsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceItemsResponse::ListServiceItemsResponse()
{
    dataIsSet_ = false;
}

ListServiceItemsResponse::~ListServiceItemsResponse() = default;

void ListServiceItemsResponse::validate()
{
}

web::json::value ListServiceItemsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListServiceItemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ServiceItemListResponseDto_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ServiceItemListResponseDto_data ListServiceItemsResponse::getData() const
{
    return data_;
}

void ListServiceItemsResponse::setData(const ServiceItemListResponseDto_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListServiceItemsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListServiceItemsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


