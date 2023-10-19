

#include "huaweicloud/cfw/v1/model/UpdateAddressSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAddressSetResponse::UpdateAddressSetResponse()
{
    dataIsSet_ = false;
}

UpdateAddressSetResponse::~UpdateAddressSetResponse() = default;

void UpdateAddressSetResponse::validate()
{
}

web::json::value UpdateAddressSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateAddressSetResponse::fromJson(const web::json::value& val)
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


IdObject UpdateAddressSetResponse::getData() const
{
    return data_;
}

void UpdateAddressSetResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateAddressSetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateAddressSetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


