

#include "huaweicloud/csms/v1/model/UpdateGrantResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateGrantResponse::UpdateGrantResponse()
{
    dataIsSet_ = false;
}

UpdateGrantResponse::~UpdateGrantResponse() = default;

void UpdateGrantResponse::validate()
{
}

web::json::value UpdateGrantResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateGrantResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            GrantData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


GrantData UpdateGrantResponse::getData() const
{
    return data_;
}

void UpdateGrantResponse::setData(const GrantData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateGrantResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateGrantResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


