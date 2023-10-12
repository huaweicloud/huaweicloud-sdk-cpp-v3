

#include "huaweicloud/cfw/v1/model/ChangeProtectEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeProtectEipResponse::ChangeProtectEipResponse()
{
    dataIsSet_ = false;
}

ChangeProtectEipResponse::~ChangeProtectEipResponse() = default;

void ChangeProtectEipResponse::validate()
{
}

web::json::value ChangeProtectEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ChangeProtectEipResponse::fromJson(const web::json::value& val)
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


IdObject ChangeProtectEipResponse::getData() const
{
    return data_;
}

void ChangeProtectEipResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeProtectEipResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeProtectEipResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


