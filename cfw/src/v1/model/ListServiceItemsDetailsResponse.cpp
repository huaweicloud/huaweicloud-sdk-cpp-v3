

#include "huaweicloud/cfw/v1/model/ListServiceItemsDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceItemsDetailsResponse::ListServiceItemsDetailsResponse()
{
    dataIsSet_ = false;
}

ListServiceItemsDetailsResponse::~ListServiceItemsDetailsResponse() = default;

void ListServiceItemsDetailsResponse::validate()
{
}

web::json::value ListServiceItemsDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListServiceItemsDetailsResponse::fromJson(const web::json::value& val)
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


ServiceItemListResponseDto_data ListServiceItemsDetailsResponse::getData() const
{
    return data_;
}

void ListServiceItemsDetailsResponse::setData(const ServiceItemListResponseDto_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListServiceItemsDetailsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListServiceItemsDetailsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


