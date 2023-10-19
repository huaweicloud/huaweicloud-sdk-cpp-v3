

#include "huaweicloud/cfw/v1/model/UpdateBlackWhiteListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateBlackWhiteListResponse::UpdateBlackWhiteListResponse()
{
    dataIsSet_ = false;
}

UpdateBlackWhiteListResponse::~UpdateBlackWhiteListResponse() = default;

void UpdateBlackWhiteListResponse::validate()
{
}

web::json::value UpdateBlackWhiteListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateBlackWhiteListResponse::fromJson(const web::json::value& val)
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


IdObject UpdateBlackWhiteListResponse::getData() const
{
    return data_;
}

void UpdateBlackWhiteListResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateBlackWhiteListResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateBlackWhiteListResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


