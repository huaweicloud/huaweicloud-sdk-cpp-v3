

#include "huaweicloud/cfw/v1/model/DeleteServiceItemUsingDeleteResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteServiceItemUsingDeleteResponse::DeleteServiceItemUsingDeleteResponse()
{
    dataIsSet_ = false;
}

DeleteServiceItemUsingDeleteResponse::~DeleteServiceItemUsingDeleteResponse() = default;

void DeleteServiceItemUsingDeleteResponse::validate()
{
}

web::json::value DeleteServiceItemUsingDeleteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool DeleteServiceItemUsingDeleteResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IdObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

IdObject DeleteServiceItemUsingDeleteResponse::getData() const
{
    return data_;
}

void DeleteServiceItemUsingDeleteResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteServiceItemUsingDeleteResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteServiceItemUsingDeleteResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}

