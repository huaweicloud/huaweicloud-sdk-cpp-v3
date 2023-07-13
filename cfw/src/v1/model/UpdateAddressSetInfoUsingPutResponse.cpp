

#include "huaweicloud/cfw/v1/model/UpdateAddressSetInfoUsingPutResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAddressSetInfoUsingPutResponse::UpdateAddressSetInfoUsingPutResponse()
{
    dataIsSet_ = false;
}

UpdateAddressSetInfoUsingPutResponse::~UpdateAddressSetInfoUsingPutResponse() = default;

void UpdateAddressSetInfoUsingPutResponse::validate()
{
}

web::json::value UpdateAddressSetInfoUsingPutResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool UpdateAddressSetInfoUsingPutResponse::fromJson(const web::json::value& val)
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

IdObject UpdateAddressSetInfoUsingPutResponse::getData() const
{
    return data_;
}

void UpdateAddressSetInfoUsingPutResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateAddressSetInfoUsingPutResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateAddressSetInfoUsingPutResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


