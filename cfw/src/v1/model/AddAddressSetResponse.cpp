

#include "huaweicloud/cfw/v1/model/AddAddressSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressSetResponse::AddAddressSetResponse()
{
    dataIsSet_ = false;
}

AddAddressSetResponse::~AddAddressSetResponse() = default;

void AddAddressSetResponse::validate()
{
}

web::json::value AddAddressSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddAddressSetResponse::fromJson(const web::json::value& val)
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


IdObject AddAddressSetResponse::getData() const
{
    return data_;
}

void AddAddressSetResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddAddressSetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddAddressSetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


