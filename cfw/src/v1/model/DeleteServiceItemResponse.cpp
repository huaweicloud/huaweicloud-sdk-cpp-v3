

#include "huaweicloud/cfw/v1/model/DeleteServiceItemResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteServiceItemResponse::DeleteServiceItemResponse()
{
    dataIsSet_ = false;
}

DeleteServiceItemResponse::~DeleteServiceItemResponse() = default;

void DeleteServiceItemResponse::validate()
{
}

web::json::value DeleteServiceItemResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteServiceItemResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            DeleteServiceItemResponseBodyData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


DeleteServiceItemResponseBodyData DeleteServiceItemResponse::getData() const
{
    return data_;
}

void DeleteServiceItemResponse::setData(const DeleteServiceItemResponseBodyData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteServiceItemResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteServiceItemResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


