

#include "huaweicloud/cfw/v1/model/DeleteAddressItemUsingDeleteResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAddressItemUsingDeleteResponse::DeleteAddressItemUsingDeleteResponse()
{
    dataIsSet_ = false;
}

DeleteAddressItemUsingDeleteResponse::~DeleteAddressItemUsingDeleteResponse() = default;

void DeleteAddressItemUsingDeleteResponse::validate()
{
}

web::json::value DeleteAddressItemUsingDeleteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool DeleteAddressItemUsingDeleteResponse::fromJson(const web::json::value& val)
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

IdObject DeleteAddressItemUsingDeleteResponse::getData() const
{
    return data_;
}

void DeleteAddressItemUsingDeleteResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteAddressItemUsingDeleteResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteAddressItemUsingDeleteResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


