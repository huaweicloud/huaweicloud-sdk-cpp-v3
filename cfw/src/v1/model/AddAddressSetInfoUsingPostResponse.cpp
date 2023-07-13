

#include "huaweicloud/cfw/v1/model/AddAddressSetInfoUsingPostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressSetInfoUsingPostResponse::AddAddressSetInfoUsingPostResponse()
{
    dataIsSet_ = false;
}

AddAddressSetInfoUsingPostResponse::~AddAddressSetInfoUsingPostResponse() = default;

void AddAddressSetInfoUsingPostResponse::validate()
{
}

web::json::value AddAddressSetInfoUsingPostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool AddAddressSetInfoUsingPostResponse::fromJson(const web::json::value& val)
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

IdObject AddAddressSetInfoUsingPostResponse::getData() const
{
    return data_;
}

void AddAddressSetInfoUsingPostResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddAddressSetInfoUsingPostResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddAddressSetInfoUsingPostResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


