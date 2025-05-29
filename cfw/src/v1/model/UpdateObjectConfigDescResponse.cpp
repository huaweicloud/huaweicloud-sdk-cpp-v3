

#include "huaweicloud/cfw/v1/model/UpdateObjectConfigDescResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateObjectConfigDescResponse::UpdateObjectConfigDescResponse()
{
    dataIsSet_ = false;
}

UpdateObjectConfigDescResponse::~UpdateObjectConfigDescResponse() = default;

void UpdateObjectConfigDescResponse::validate()
{
}

web::json::value UpdateObjectConfigDescResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateObjectConfigDescResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


Object UpdateObjectConfigDescResponse::getData() const
{
    return data_;
}

void UpdateObjectConfigDescResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateObjectConfigDescResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateObjectConfigDescResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


