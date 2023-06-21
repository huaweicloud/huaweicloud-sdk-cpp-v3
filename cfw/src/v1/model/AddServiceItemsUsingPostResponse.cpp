

#include "huaweicloud/cfw/v1/model/AddServiceItemsUsingPostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceItemsUsingPostResponse::AddServiceItemsUsingPostResponse()
{
    dataIsSet_ = false;
}

AddServiceItemsUsingPostResponse::~AddServiceItemsUsingPostResponse() = default;

void AddServiceItemsUsingPostResponse::validate()
{
}

web::json::value AddServiceItemsUsingPostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool AddServiceItemsUsingPostResponse::fromJson(const web::json::value& val)
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


ServiceItemIds AddServiceItemsUsingPostResponse::getData() const
{
    return data_;
}

void AddServiceItemsUsingPostResponse::setData(const ServiceItemIds& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddServiceItemsUsingPostResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddServiceItemsUsingPostResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


