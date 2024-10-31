

#include "huaweicloud/cfw/v1/model/DeleteAddressSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAddressSetResponse::DeleteAddressSetResponse()
{
    dataIsSet_ = false;
}

DeleteAddressSetResponse::~DeleteAddressSetResponse() = default;

void DeleteAddressSetResponse::validate()
{
}

web::json::value DeleteAddressSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteAddressSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AddressSetId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AddressSetId DeleteAddressSetResponse::getData() const
{
    return data_;
}

void DeleteAddressSetResponse::setData(const AddressSetId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteAddressSetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteAddressSetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


