

#include "huaweicloud/cfw/v1/model/AddServiceItemsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceItemsResponse::AddServiceItemsResponse()
{
    dataIsSet_ = false;
}

AddServiceItemsResponse::~AddServiceItemsResponse() = default;

void AddServiceItemsResponse::validate()
{
}

web::json::value AddServiceItemsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddServiceItemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ServiceItemIds refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ServiceItemIds AddServiceItemsResponse::getData() const
{
    return data_;
}

void AddServiceItemsResponse::setData(const ServiceItemIds& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddServiceItemsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddServiceItemsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


